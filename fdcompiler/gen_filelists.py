import os
import json

cwd = os.getcwd()

def write_list(directory):
    # Get all entries in the directory
    entries = os.listdir(directory)
    result_list = []

    for entry in entries:
        # Skip the 'filelist.json' file to avoid recursion issues
        if entry == 'filelist.json' or entry == '.DS_Store':
            continue

        full_path = os.path.join(directory, entry)
        rel_path = os.path.relpath(full_path, cwd).replace(os.sep, '/')

        if os.path.isdir(full_path):
            result_list.append({"type": "dir", "path": rel_path})
            write_list(full_path)  # Recursively process subdirectories
        elif os.path.isfile(full_path):
            result_list.append({"type": "file", "path": rel_path})

    # Write the JSON file in the current directory
    with open(os.path.join(directory, 'filelist.json'), 'w', encoding='utf-8') as file:
        json.dump(result_list, file, indent=2)


project_dir = os.path.join(cwd, "project")
write_list(project_dir)