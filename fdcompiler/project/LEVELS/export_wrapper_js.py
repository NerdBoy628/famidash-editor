import pathlib
import sys
import re
sys.path.append("/project/LEVELS")
import export_levels_js

own_path = pathlib.Path(sys.path[0]).resolve()

metadataPath = own_path / "metadata"

metadataFileRegex = "lvlset_(.+)_metadata.json5"
metadataFileGlob = "lvlset_*_metadata.json5"
metadataFile = lambda lvlset: metadataPath / f"lvlset_{lvlset}_metadata.json5"
outputFolder = lambda lvlset: own_path / "include" / f"lvlset_{lvlset}"
csvFolder = lambda lvlset : own_path / "LEVEL DATA" / f"lvlset_{lvlset}"
innerScript = own_path / "export_levels_js.py"

availableLevelSets = {re.findall(metadataFileRegex, i.name)[0] for i in (metadataPath).glob(metadataFileGlob)}

verbose = False

#if __name__ == '__main__':
#import argparse
import os
from collections.abc import Iterable

envPath = os.environ.get('PATH', "")

if (os.name == 'posix'):
	envPath = envPath.split(":")
elif (os.name == 'nt'):
	envPath = envPath.split(";")
else:
	print (f"YO KIND OF OPERATING SYSTEM ('{os.name}') AIN'T SUPPORTED")
	exit(1)

def findInPATH(executable : str | dict | Iterable, possibleEnvPaths: str | Iterable | None = None):
	localEnvPath = envPath
	if isinstance(executable, str) or isinstance(executable, dict):
		executable = [executable]
	if possibleEnvPaths:
		if isinstance(possibleEnvPaths, str):
			localEnvPath = [possibleEnvPaths] + localEnvPath
		else:
			localEnvPath = list(possibleEnvPaths) + localEnvPath	
	for prefix in localEnvPath:
		for spec in executable:
			if isinstance(spec, dict):
				crit = spec['criterion']
				spec = spec['name']
			else:
				crit = lambda x: True
			if verbose:
				print(f"Checking {prefix}/{spec}")
			if (pathlib.Path(prefix) / spec).is_file() and crit((pathlib.Path(prefix) / spec).resolve()):
				return (pathlib.Path(prefix) / spec).resolve()
	return None

if False:
	parser = argparse.ArgumentParser(formatter_class=argparse.RawTextHelpFormatter)
	parser.add_argument('-f', '--csvFolder', type=pathlib.Path, required=False,
					default=None,
					help='Path to folder with csv files')
	parser.add_argument('-m', '--metadata', type=pathlib.Path, required=False,
					default=None,
					help='Custom path to json5 file with level metadata specifications')
	parser.add_argument('-o', '--outputFolder', type=pathlib.Path, required=False,
					default=None,
					help='Custom output folder for the include files')
	levelSetArgs = parser.add_mutually_exclusive_group()
	levelSetArgs.add_argument('-l', '--levelSet', choices=availableLevelSets, required=False,
					default='A',
					help='Set of levels to export')
	levelSetArgs.add_argument('-a', '--exportAll', action='store_true', required=False,
					default=False,
					help='Export all level sets')
	parser.add_argument('-v', '--verbose', action='store_true',
		help='Increase verbosity of wrapper script')
	args = parser.parse_args()

	verbose = args.verbose

levelSet = 'A'
levelSetsToExport = [levelSet]

for levelSet in levelSetsToExport:
	metaFile = pathlib.Path('/project/LEVELS/metadata/lvlset_A_metadata.json5') # metadataFile(levelSet) if not args.metadata else args.metadata
	outFolder = pathlib.Path('/project/LEVELS/include/lvlset_A') # outputFolder(levelSet) if not args.outputFolder else args.outputFolder
	csvFolderArg = pathlib.Path('/project/LEVELS/LEVEL DATA/lvlset_A') # csvFolder(levelSet) if not args.csvFolder else args.csvFolder
	
	print(f"Running export script for level set {levelSet}...")
	export_levels_js.main(csvFolderArg, metaFile, outFolder)