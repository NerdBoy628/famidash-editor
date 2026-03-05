#line 1 "SAUCE/famidash.c"
#line 91 "./BUILD_FLAGS.h"

#line 5 "SAUCE/include.h"
#line 48 "LIB/headers/stdint.h"
typedef signed char int8_t;
typedef int int16_t;
typedef long int32_t;
typedef unsigned char uint8_t;
typedef unsigned uint16_t;
typedef unsigned long uint32_t;
#line 66 "LIB/headers/stdint.h"
typedef signed char int_least8_t;
typedef int int_least16_t;
typedef long int_least32_t;
typedef unsigned char uint_least8_t;
typedef unsigned uint_least16_t;
typedef unsigned long uint_least32_t;
#line 84 "LIB/headers/stdint.h"
typedef signed char int_fast8_t;
typedef int int_fast16_t;
typedef long int_fast32_t;
typedef unsigned char uint_fast8_t;
typedef unsigned uint_fast16_t;
typedef unsigned long uint_fast32_t;
#line 102 "LIB/headers/stdint.h"
typedef int intptr_t;
typedef unsigned uintptr_t;






typedef long intmax_t;
typedef unsigned long uintmax_t;
#line 145 "LIB/headers/stdint.h"

#line 8 "SAUCE/include.h"
#line 44 "LIB/headers/stddef.h"
typedef int ptrdiff_t;



typedef char wchar_t;



typedef unsigned size_t;
#line 67 "LIB/headers/stddef.h"

#line 9 "SAUCE/include.h"
#line 6 "LIB/headers/nonstdint.h"
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;

typedef int_least8_t ls8;
typedef int_least16_t ls16;
typedef int_least32_t ls32;
typedef uint_least8_t lu8;
typedef uint_least16_t lu16;
typedef uint_least32_t lu32;

typedef int_fast8_t fs8;
typedef int_fast16_t fs16;
typedef int_fast32_t fs32;
typedef uint_fast8_t fu8;
typedef uint_fast16_t fu16;
typedef uint_fast32_t fu32;

typedef intptr_t sptr;
typedef uintptr_t uptr;

typedef intmax_t smax;
typedef uintmax_t umax;
#line 10 "SAUCE/include.h"
#line 137 "LIB/headers/arr_macros.h"

#line 11 "SAUCE/include.h"
#line 26 "LIB/headers/neslib.h"
void __fastcall__ pal_all(const void *data);



void __fastcall__ pal_bg(const void *data);



void __fastcall__ pal_spr(const void *data);
#line 42 "LIB/headers/neslib.h"
void __fastcall__ pal_clear();



void __fastcall__ pal_bright(uint8_t bright);




void __fastcall__ ppu_wait_nmi();



void __fastcall__ ppu_off();



void __fastcall__ ppu_on_all();



void __fastcall__ ppu_on_bg();



void __fastcall__ ppu_on_spr();



void __fastcall__ ppu_mask(uint8_t mask);



uint8_t __fastcall__ ppu_system();






void __fastcall__ oam_clear();

void __fastcall__ oam_clear_player();
void __fastcall__ oam_clear_two_players();
#line 95 "LIB/headers/neslib.h"
void __fastcall__ _oam_spr(uint32_t args);
#line 105 "LIB/headers/neslib.h"
void __fastcall__ _oam_meta_spr(uint32_t args);


void __fastcall__ _oam_meta_spr_disco(uint32_t args);
#line 121 "LIB/headers/neslib.h"
void __fastcall__ oam_set(uint8_t index);



uint8_t __fastcall__ oam_get();




uint8_t __fastcall__ pad_poll(uint8_t pad);
#line 146 "LIB/headers/neslib.h"
void __fastcall__ _scroll(uint32_t args);
#line 155 "LIB/headers/neslib.h"
void __fastcall__ split(uint16_t x);




void __fastcall__ bank_spr(uint8_t n);
#line 170 "LIB/headers/neslib.h"
uint8_t __fastcall__ newrand();





void __fastcall__ set_rand(uint16_t seed);
#line 206 "LIB/headers/neslib.h"
void __fastcall__ _vram_fill(uint32_t args);




void __fastcall__ vram_inc(uint8_t n);



void __fastcall__ _vram_read(uint32_t args);




void __fastcall__ _vram_write(uint32_t args);




void __fastcall__ vram_unrle(const void *data);





void __fastcall__ _memcpy(uint32_t args);




void __fastcall__ _memfill(uint32_t args);




void __fastcall__ delay(uint8_t frames);


struct pad {
    union {
        unsigned char hold;
        struct {
            unsigned char right : 1;
            unsigned char left : 1;
            unsigned char down : 1;
            unsigned char up : 1;




            unsigned char start : 1;
            unsigned char select : 1;

            unsigned char b : 1;
            unsigned char a : 1;
        };
    };
    union {
        unsigned char press;
        struct {
            unsigned char press_right : 1;
            unsigned char press_left : 1;
            unsigned char press_down : 1;
            unsigned char press_up : 1;




            unsigned char press_start : 1;
            unsigned char press_select : 1;

            unsigned char press_b : 1;
            unsigned char press_a : 1;
        };
    };
    union {
        unsigned char release;
        struct {
            unsigned char release_right : 1;
            unsigned char release_left : 1;
            unsigned char release_down : 1;
            unsigned char release_up : 1;




            unsigned char release_start : 1;
            unsigned char release_select : 1;

            unsigned char release_b : 1;
            unsigned char release_a : 1;
        };
    };
};

extern struct pad joypad1;
_Pragma ("zpsym(\"joypad1\");")

extern struct pad joypad2;
_Pragma ("zpsym(\"joypad2\");")






extern struct pad* controllingplayer;
_Pragma ("zpsym(\"controllingplayer\");")
#line 362 "LIB/headers/neslib.h"

#line 14 "SAUCE/include.h"
#line 12 "LIB/headers/nesdoug.h"
void set_vram_buffer();




void __fastcall__ _one_vram_buffer(uint32_t args);



void __fastcall__ _multi_vram_buffer(uint32_t args);
#line 29 "LIB/headers/nesdoug.h"
void clear_vram_buffer();
#line 38 "LIB/headers/nesdoug.h"
uint8_t __fastcall__ get_frame_count();




uint8_t __fastcall__ check_collision();






void __fastcall__ _pal_fade_to(uint16_t from_to);





void __fastcall__ set_scroll_x(uint16_t x);



void __fastcall__ set_scroll_y(uint16_t y);






uint16_t __fastcall__ _add_scroll_y(uint32_t args);





uint16_t __fastcall__ _sub_scroll_y(uint32_t args);
uint16_t __fastcall__ _sub_scroll_y_ext(uint32_t args);






uint16_t __fastcall__ _get_ppu_addr(uint32_t args);





uint16_t __fastcall__ _get_at_addr(uint32_t args);
#line 129 "LIB/headers/nesdoug.h"
void flush_vram_update2();





void __fastcall__ color_emphasis(uint8_t color);
#line 154 "LIB/headers/nesdoug.h"
const uint8_t gameboy_check_table[] = {
 0x00,
 0x01, 0x21, 0x41, 0x81,
 0x61, 0xA1, 0xC1, 0xe1
};



void __fastcall__ _xy_split(uint32_t args);





void gray_line();
#line 190 "LIB/headers/nesdoug.h"
void seed_rng();

#line 15 "SAUCE/include.h"
#line 2 "LIB/headers/mapper.h"
void __fastcall__ mmc3_set_prg_bank_0(uint8_t bank);

void __fastcall__ mmc3_set_prg_bank_1(uint8_t bank);

void __fastcall__ mmc3_set_2kb_chr_bank_0(uint8_t bank);

void __fastcall__ mmc3_set_2kb_chr_bank_1(uint8_t bank);

void __fastcall__ mmc3_set_1kb_chr_bank_0(uint8_t bank);

void __fastcall__ mmc3_set_1kb_chr_bank_1(uint8_t bank);

void __fastcall__ mmc3_set_1kb_chr_bank_2(uint8_t bank);

void __fastcall__ mmc3_set_1kb_chr_bank_3(uint8_t bank);
#line 24 "LIB/headers/mapper.h"
extern uint8_t xargs[4];

void _mmc3_set_8kb_chr() {

    mmc3_set_1kb_chr_bank_0(xargs[0]);
    mmc3_set_1kb_chr_bank_1(++xargs[0]);
    mmc3_set_1kb_chr_bank_2(++xargs[0]);
    mmc3_set_1kb_chr_bank_3(++xargs[0]);

 mmc3_set_2kb_chr_bank_0(xargs[0]+2);
    mmc3_set_2kb_chr_bank_1(xargs[0]+4);
}






extern uint8_t irqTable[32];
extern uint8_t irqTableIdx;


void mmc3_disable_irq();




void set_irq_ptr(const uint8_t * address);






uint8_t is_irq_done();





void write_irq_table(const uint8_t * data);


void _edit_irq_table(uint16_t args);
#line 92 "LIB/headers/mapper.h"

#line 16 "SAUCE/include.h"
#line 4 "LIB/headers/nesdash.h"
extern uint8_t xargs[4];
_Pragma ("zpsym(\"xargs\")")
#line 22 "LIB/headers/nesdash.h"
void __fastcall__ _oam_meta_spr_flipped(uint32_t args);
#line 45 "LIB/headers/nesdash.h"
void __fastcall__ _one_vram_buffer_repeat(uint32_t args);
#line 57 "LIB/headers/nesdash.h"
void __fastcall__ _draw_padded_text(uint32_t args);
#line 68 "LIB/headers/nesdash.h"
void __fastcall__ music_play(uint8_t song);
#line 78 "LIB/headers/nesdash.h"
void __fastcall__ _sfx_play(uint16_t args);






void __fastcall__ music_update();
#line 94 "LIB/headers/nesdash.h"
uint16_t calculate_linear_scroll_y(uint16_t nonlinearScroll);




void cap_scroll_y_at_top();




void cap_scroll_y_at_bottom();
#line 114 "LIB/headers/nesdash.h"
void __fastcall__ playPCM(uint8_t sample);
#line 123 "LIB/headers/nesdash.h"
uint16_t __fastcall__ hexToDec (uint16_t input);
#line 135 "LIB/headers/nesdash.h"
void _printDecimal (uint32_t args);






void update_level_completeness();




void increment_attempt_count();
#line 155 "LIB/headers/nesdash.h"
void _display_attempt_counter (uint32_t args);
#line 166 "LIB/headers/nesdash.h"
void __fastcall__ _famistudio_sfx_clear_channel(unsigned int args);





void update_currplayer_table_idx();
#line 187 "LIB/headers/nesdash.h"
extern uint8_t auto_fs_updates;
#line 203 "LIB/headers/nesdash.h"
extern uint8_t PAL_UPDATE;
extern uint8_t* PAL_PTR;
_Pragma ("zpsym(\"PAL_PTR\")")
extern uint8_t PAL_BUF_RAW[32];
extern uint8_t PAL_BUF[32];
_Pragma ("zpsym(\"PAL_UPDATE\")")




#line 284 "LIB/headers/nesdash.h"
extern uint8_t shiftBy4table[16];







#line 18 "SAUCE/include.h"
#line 39 "LIB/headers/famistudio_cc65.h"
void famistudio_music_play(unsigned char song_index);
#line 62 "LIB/headers/famistudio_cc65.h"
void famistudio_music_pause(unsigned char mode);
#line 75 "LIB/headers/famistudio_cc65.h"
void famistudio_music_stop();
#line 88 "LIB/headers/famistudio_cc65.h"
void famistudio_update();
#line 139 "LIB/headers/famistudio_cc65.h"
void famistudio_sfx_sample_play(unsigned char sample_index);



#line 19 "SAUCE/include.h"
#line 39 "MUSIC/EXPORTS/lvlset_A/musicDefines.h"

#line 20 "SAUCE/include.h"
#line 12 "MUSIC/EXPORTS/lvlset_A/sfxDefines.h"

#line 21 "SAUCE/include.h"
#line 53 "LEVELS/include/lvlset_A/level_defines.h"

#line 24 "SAUCE/include.h"
#line 65 "SAUCE/defines/space_defines.h"

#line 25 "SAUCE/include.h"
_Pragma ("rodata-name (push, \"RODATA\")")
#line 6 "SAUCE/defines/physics_defines.h"

#line 27 "SAUCE/include.h"
#line 6 "SAUCE/defines/physics_table_defines.cmp.h"
const uint8_t CUBE_WIDTH[] = {0x0F, 0x08};



const uint8_t CUBE_HEIGHT[] = {0x0F, 0x07};
#line 21 "SAUCE/defines/physics_table_defines.cmp.h"
const uint16_t CUBE_SPEED_50[] = {0x5203, 0xAE02, 0x2104, 0xFE04, 0x2406, 0xB701};
const uint16_t CUBE_SPEED_60[] = {0xC402, 0x3B02, 0x7103, 0x2904, 0x1E05, 0x6E01};


const uint16_t * const CUBE_SPEED[] = {CUBE_SPEED_50, CUBE_SPEED_60};


_Pragma ("rodata-name(\"XCD_BANK_06\")")



const uint16_t sprite_gamemode_adjust_heights_50_mg[] = {0x53F9, 0xD3FA, 0x20FB, 0x93FB, 0x53F9, 0xE6FA, 0x0000, 0xA6FB, 0xB3F6, 0x80FB, 0x13FA, 0x2DFC, 0x93F5, 0x00FA, 0x0000, 0xD3FA, 0x6DFB, 0x9AFD, 0x2DFC, 0x73FD, 0xD3FA, 0x06FC, 0x0000, 0xA0FC, 0xEDF9, 0x13FD, 0xF3FB, 0x3AFD, 0xA0F9, 0x06FC, 0x0000, 0xF3FB, 0x3AF7, 0x06F9, 0xA0F9, 0xEDF9, 0x3AF7, 0x00FA, 0x0000, 0x3AFA, 0x53F9, 0x53F9, 0x06F9, 0x53F9, 0x53F9, 0x53F9, 0x0000, 0x06F9, 0x7A0B, 0x7A0B, 0x530B, 0x7A0B, 0x7A0B, 0x7A0B, 0x0000, 0x530B, 0xB3F9, 0xB3F9, 0xAAFA, 0x60FA, 0x13F7, 0x60FA, 0x0000, 0xAAFA, 0x13F4, 0xA6F8, 0x93F8, 0x33FB, 0xA0F3, 0x20F8, 0x0000, 0x5AF8};
const uint16_t sprite_gamemode_adjust_heights_50_mG[] = {0xAD06, 0x2D05, 0xE004, 0x6D04, 0xAD06, 0x1A05, 0x0000, 0x5A04, 0x4D09, 0x8004, 0xED05, 0xD303, 0x6D0A, 0x0006, 0x0000, 0x2D05, 0x9304, 0x6602, 0xD303, 0x8D02, 0x2D05, 0xFA03, 0x0000, 0x6003, 0x1306, 0xED02, 0x0D04, 0xC602, 0x6006, 0xFA03, 0x0000, 0x0D04, 0xC608, 0xFA06, 0x6006, 0x1306, 0xC608, 0x0006, 0x0000, 0xC605, 0xAD06, 0xAD06, 0xFA06, 0xAD06, 0xAD06, 0xAD06, 0x0000, 0xFA06, 0x86F4, 0x86F4, 0xADF4, 0x86F4, 0x86F4, 0x86F4, 0x0000, 0xADF4, 0x4D06, 0x4D06, 0x5605, 0xA005, 0xED08, 0xA005, 0x0000, 0x5605, 0xED0B, 0x5A07, 0x6D07, 0xCD04, 0x600C, 0xE007, 0x0000, 0xA607};
const uint16_t sprite_gamemode_adjust_heights_50_Mg[] = {0x3AFA, 0x73FA, 0xD3FA, 0x6DFB, 0xADFA, 0x06FC, 0x0000, 0xDAFC, 0x33F8, 0xFAFA, 0x3AFA, 0xA6FB, 0x60F7, 0x33FB, 0x0000, 0x1AFC, 0x06FC, 0xC0FD, 0x06FC, 0xFAFD, 0xE0FB, 0x60FD, 0x0000, 0xADFD, 0x46FB, 0xC0FD, 0xBAFB, 0x6DFE, 0x06FC, 0x06FC, 0x0000, 0x73FD, 0x6DF8, 0x46F8, 0x00FA, 0xA0F9, 0x6DF8, 0xADFA, 0x0000, 0x06FC, 0x53F9, 0x53F9, 0x8DF9, 0x53F9, 0x53F9, 0x53F9, 0x0000, 0x8DF9, 0x7A0B, 0x7A0B, 0x530B, 0x7A0B, 0x7A0B, 0x7A0B, 0x0000, 0x530B, 0xB3F9, 0xB3F9, 0xAAFA, 0x60FA, 0x13F7, 0x60FA, 0x0000, 0xAAFA, 0x2DF6, 0xE6F7, 0x2DF9, 0xA0F9, 0x6DF5, 0xA0F9, 0x0000, 0xA6FB};
const uint16_t sprite_gamemode_adjust_heights_50_MG[] = {0xC605, 0x8D05, 0x2D05, 0x9304, 0x5305, 0xFA03, 0x0000, 0x2603, 0xCD07, 0x0605, 0xC605, 0x5A04, 0xA008, 0xCD04, 0x0000, 0xE603, 0xFA03, 0x4002, 0xFA03, 0x0602, 0x2004, 0xA002, 0x0000, 0x5302, 0xBA04, 0x4002, 0x4604, 0x9301, 0xFA03, 0xFA03, 0x0000, 0x8D02, 0x9307, 0xBA07, 0x0006, 0x6006, 0x9307, 0x5305, 0x0000, 0xFA03, 0xAD06, 0xAD06, 0x7306, 0xAD06, 0xAD06, 0xAD06, 0x0000, 0x7306, 0x86F4, 0x86F4, 0xADF4, 0x86F4, 0x86F4, 0x86F4, 0x0000, 0xADF4, 0x4D06, 0x4D06, 0x5605, 0xA005, 0xED08, 0xA005, 0x0000, 0x5605, 0xD309, 0x1A08, 0xD306, 0x6006, 0x930A, 0x6006, 0x0000, 0x5A04};
const uint16_t sprite_gamemode_adjust_heights_60_mg[] = {0x70FA, 0xB0FB, 0xF0FB, 0x50FC, 0x70FA, 0xC0FB, 0x0000, 0x60FC, 0x40F8, 0x40FC, 0x10FB, 0xD0FC, 0x50F7, 0x00FB, 0x0000, 0xB0FB, 0x30FC, 0x00FE, 0xD0FC, 0xE0FD, 0xB0FB, 0xB0FC, 0x0000, 0x30FD, 0xF0FA, 0x90FD, 0xA0FC, 0xB0FD, 0xB0FA, 0xB0FC, 0x0000, 0xA0FC, 0xB0F8, 0x30FA, 0xB0FA, 0xF0FA, 0xB0F8, 0x00FB, 0x0000, 0x30FB, 0x70FA, 0x70FA, 0x30FA, 0x70FA, 0x70FA, 0x70FA, 0x0000, 0x30FA, 0x9009, 0x9009, 0x7009, 0x9009, 0x9009, 0x9009, 0x0000, 0x7009, 0xC0FA, 0xC0FA, 0x8EFB, 0x50FB, 0x90F8, 0x50FB, 0x0000, 0x8EFB, 0x10F6, 0xE0F9, 0xD0F9, 0x00FC, 0xB0F5, 0x70F9, 0x0000, 0xA0F9};
const uint16_t sprite_gamemode_adjust_heights_60_mG[] = {0x9005, 0x5004, 0x1004, 0xB003, 0x9005, 0x4004, 0x0000, 0xA003, 0xC007, 0xC003, 0xF004, 0x3003, 0xB008, 0x0005, 0x0000, 0x5004, 0xD003, 0x0002, 0x3003, 0x2002, 0x5004, 0x5003, 0x0000, 0xD002, 0x1005, 0x7002, 0x6003, 0x5002, 0x5005, 0x5003, 0x0000, 0x6003, 0x5007, 0xD005, 0x5005, 0x1005, 0x5007, 0x0005, 0x0000, 0xD004, 0x9005, 0x9005, 0xD005, 0x9005, 0x9005, 0x9005, 0x0000, 0xD005, 0x70F6, 0x70F6, 0x90F6, 0x70F6, 0x70F6, 0x70F6, 0x0000, 0x90F6, 0x4005, 0x4005, 0x7204, 0xB004, 0x7007, 0xB004, 0x0000, 0x7204, 0xF009, 0x2006, 0x3006, 0x0004, 0x500A, 0x9006, 0x0000, 0x6006};
const uint16_t sprite_gamemode_adjust_heights_60_Mg[] = {0x30FB, 0x60FB, 0xB0FB, 0x30FC, 0x90FB, 0xB0FC, 0x0000, 0x60FD, 0x80F9, 0xD0FB, 0x30FB, 0x60FC, 0xD0F8, 0x00FC, 0x0000, 0xC0FC, 0xB0FC, 0x20FE, 0xB0FC, 0x50FE, 0x90FC, 0xD0FD, 0x0000, 0x10FE, 0x10FC, 0x20FE, 0x70FC, 0xB0FE, 0xB0FC, 0xB0FC, 0x0000, 0xE0FD, 0xB0F9, 0x90F9, 0x00FB, 0xB0FA, 0xB0F9, 0x90FB, 0x0000, 0xB0FC, 0x70FA, 0x70FA, 0xA0FA, 0x70FA, 0x70FA, 0x70FA, 0x0000, 0xA0FA, 0x9009, 0x9009, 0x7009, 0x9009, 0x9009, 0x9009, 0x0000, 0x7009, 0xC0FA, 0xC0FA, 0x8EFB, 0x50FB, 0x90F8, 0x50FB, 0x0000, 0x8EFB, 0xD0F7, 0x40F9, 0x50FA, 0xB0FA, 0x30F7, 0xB0FA, 0x0000, 0x60FC};
const uint16_t sprite_gamemode_adjust_heights_60_MG[] = {0xD004, 0xA004, 0x5004, 0xD003, 0x7004, 0x5003, 0x0000, 0xA002, 0x8006, 0x3004, 0xD004, 0xA003, 0x3007, 0x0004, 0x0000, 0x4003, 0x5003, 0xE001, 0x5003, 0xB001, 0x7003, 0x3002, 0x0000, 0xF001, 0xF003, 0xE001, 0x9003, 0x5001, 0x5003, 0x5003, 0x0000, 0x2002, 0x5006, 0x7006, 0x0005, 0x5005, 0x5006, 0x7004, 0x0000, 0x5003, 0x9005, 0x9005, 0x6005, 0x9005, 0x9005, 0x9005, 0x0000, 0x6005, 0x70F6, 0x70F6, 0x90F6, 0x70F6, 0x70F6, 0x70F6, 0x0000, 0x90F6, 0x4005, 0x4005, 0x7204, 0xB004, 0x7007, 0xB004, 0x0000, 0x7204, 0x3008, 0xC006, 0xB005, 0x5005, 0xD008, 0x5005, 0x0000, 0xA003};

const uint16_t * const sprite_gamemode_adjust_heights[] = {sprite_gamemode_adjust_heights_50_mg, sprite_gamemode_adjust_heights_50_mG, sprite_gamemode_adjust_heights_50_Mg, sprite_gamemode_adjust_heights_50_MG, sprite_gamemode_adjust_heights_60_mg, sprite_gamemode_adjust_heights_60_mG, sprite_gamemode_adjust_heights_60_Mg, sprite_gamemode_adjust_heights_60_MG};


_Pragma ("rodata-name(\"XCD_BANK_00\")")

const uint8_t PAD_HEIGHT_BLUE_lo[] = {0x5A, 0xA6, 0x5A, 0xA6, 0xA0, 0x60, 0xA0, 0x60};
const uint8_t PAD_HEIGHT_BLUE_hi[] = {0x04, 0xFB, 0x04, 0xFB, 0x03, 0xFC, 0x03, 0xFC};


const uint8_t ORB_BALL_HEIGHT_BLUE_lo[] = {0xF3, 0x0D, 0xF3, 0x0D, 0xA0, 0x60, 0xA0, 0x60};
const uint8_t ORB_BALL_HEIGHT_BLUE_hi[] = {0x01, 0xFE, 0x01, 0xFE, 0x01, 0xFE, 0x01, 0xFE};



const uint8_t POS_DUAL_CAP_CHECK_lo[] = {0xC6, 0x50};
#line 60 "SAUCE/defines/physics_table_defines.cmp.h"
const uint8_t NEG_DUAL_CAP_CHECK_lo[] = {0x3A, 0xB0};
#line 69 "SAUCE/defines/physics_table_defines.cmp.h"
_Pragma ("rodata-name(\"XCD_BANK_01\")")

const uint8_t JUMP_VEL_lo[] = {0x53, 0xAD, 0x3A, 0xC6, 0x70, 0x90, 0x30, 0xD0};
const uint8_t JUMP_VEL_hi[] = {0xF9, 0x06, 0xFA, 0x05, 0xFA, 0x05, 0xFB, 0x04};


const uint8_t BALL_SWITCH_VEL_lo[] = {0x66, 0x9A, 0x5A, 0xA6, 0x00, 0x00, 0x20, 0xE0};
const uint8_t BALL_SWITCH_VEL_hi[] = {0x02, 0xFD, 0x01, 0xFE, 0x02, 0xFE, 0x01, 0xFE};


const uint8_t UFO_JUMP_VEL_lo[] = {0x2D, 0xD3, 0xA0, 0x60, 0xD0, 0x30, 0x30, 0xD0};
const uint8_t UFO_JUMP_VEL_hi[] = {0xFC, 0x03, 0xFC, 0x03, 0xFC, 0x03, 0xFD, 0x02};


const uint8_t ROBOT_JUMP_VEL_lo[] = {0xC6, 0x3A, 0xC6, 0x3A, 0x50, 0xB0, 0x50, 0xB0};
const uint8_t ROBOT_JUMP_VEL_hi[] = {0xFC, 0x03, 0xFC, 0x03, 0xFD, 0x02, 0xFD, 0x02};



const uint8_t ROBOT_JUMP_TIME[] = {0x10, 0x13};


const uint8_t CUBE_MAX_FALLSPEED_lo[] = {0x33, 0xCD, 0x33, 0xCD, 0x00, 0x00, 0x00, 0x00};
const uint8_t CUBE_MAX_FALLSPEED_hi[] = {0x07, 0xF8, 0x07, 0xF8, 0x06, 0xFA, 0x06, 0xFA};


const uint8_t SHIP_MAX_FALLSPEED_lo[] = {0x69, 0x97, 0x03, 0xFD, 0xD7, 0x29, 0x57, 0xA9};
const uint8_t SHIP_MAX_FALLSPEED_hi[] = {0x03, 0xFC, 0x04, 0xFB, 0x02, 0xFD, 0x03, 0xFC};


const uint8_t SHIP_MAX_FALLSPEED_HOLD_lo[] = {0x43, 0xBD, 0x03, 0xFD, 0x8D, 0x73, 0x2D, 0xD3};
const uint8_t SHIP_MAX_FALLSPEED_HOLD_hi[] = {0x04, 0xFB, 0x05, 0xFA, 0x03, 0xFC, 0x04, 0xFB};


const uint8_t BALL_MAX_FALLSPEED_lo[] = {0x33, 0xCD, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const uint8_t BALL_MAX_FALLSPEED_hi[] = {0x07, 0xF8, 0x06, 0xFA, 0x06, 0xFA, 0x05, 0xFB};


const uint8_t UFO_MAX_FALLSPEED_lo[] = {0xC0, 0x40, 0xFA, 0x06, 0x20, 0xE0, 0x50, 0xB0};
const uint8_t UFO_MAX_FALLSPEED_hi[] = {0x03, 0xFC, 0x03, 0xFC, 0x03, 0xFC, 0x03, 0xFC};


const uint8_t SPIDER_MAX_FALLSPEED_lo[] = {0x33, 0xCD, 0x33, 0xCD, 0x00, 0x00, 0x00, 0x00};
const uint8_t SPIDER_MAX_FALLSPEED_hi[] = {0x07, 0xF8, 0x07, 0xF8, 0x06, 0xFA, 0x06, 0xFA};


const uint8_t SWING_MAX_FALLSPEED_lo[] = {0x06, 0xFA, 0x06, 0xFA, 0x30, 0xD0, 0x30, 0xD0};
const uint8_t SWING_MAX_FALLSPEED_hi[] = {0x05, 0xFA, 0x05, 0xFA, 0x04, 0xFB, 0x04, 0xFB};


_Pragma ("rodata-name(\"XCD_BANK_04\")")


const uint8_t SHIP_SCROLL_SPEED_lo[] = {0x66, 0x00};
#line 131 "SAUCE/defines/physics_table_defines.cmp.h"
_Pragma ("rodata-name(\"RODATA\")")

const uint8_t CUBE_GRAVITY_lo[] = {0x9A, 0x66, 0xA0, 0x60, 0x6B, 0x95, 0x6F, 0x91};
const uint8_t CUBE_GRAVITY_hi[] = {0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF};


const uint8_t SHIP_GRAVITY_BASE_lo[] = {0x3C, 0xC4, 0x47, 0xB9, 0x2A, 0xD6, 0x31, 0xCF};
const uint8_t SHIP_GRAVITY_BASE_hi[] = {0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF};


const uint8_t SHIP_GRAVITY_lo[] = {0x30, 0xD0, 0x39, 0xC7, 0x22, 0xDE, 0x27, 0xD9};
const uint8_t SHIP_GRAVITY_hi[] = {0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF};


const uint8_t SHIP_GRAVITY_AFTER_HOLD_lo[] = {0x49, 0xB7, 0x55, 0xAB, 0x32, 0xCE, 0x3B, 0xC5};
const uint8_t SHIP_GRAVITY_AFTER_HOLD_hi[] = {0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF};


const uint8_t SHIP_GRAVITY_HOLD_FALL_lo[] = {0x4C, 0xB4, 0x59, 0xA7, 0x34, 0xCC, 0x3E, 0xC2};
const uint8_t SHIP_GRAVITY_HOLD_FALL_hi[] = {0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF};


const uint8_t BALL_GRAVITY_lo[] = {0x66, 0x9A, 0x7D, 0x83, 0x47, 0xB9, 0x57, 0xA9};
const uint8_t BALL_GRAVITY_hi[] = {0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF};


const uint8_t UFO_GRAVITY_lo[] = {0x48, 0xB8, 0x48, 0xB8, 0x32, 0xCE, 0x32, 0xCE};
const uint8_t UFO_GRAVITY_hi[] = {0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF};


const uint8_t SPIDER_GRAVITY_lo[] = {0x6C, 0x94, 0x6C, 0x94, 0x4B, 0xB5, 0x4B, 0xB5};
const uint8_t SPIDER_GRAVITY_hi[] = {0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF};


const uint8_t SWING_GRAVITY_lo[] = {0x48, 0xB8, 0x51, 0xAF, 0x32, 0xCE, 0x38, 0xC8};
const uint8_t SWING_GRAVITY_hi[] = {0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF};


const uint8_t MAKE_CUBE_JUMP_HIGHER_lo[] = {0x66, 0x9A, 0x66, 0x9A, 0x80, 0x80, 0x80, 0x80};
const uint8_t MAKE_CUBE_JUMP_HIGHER_hi[] = {0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00};


const uint8_t EXIT_SLOPE_BALL_22_lo[] = {0xA0, 0x60, 0xA0, 0x60, 0xB0, 0x50, 0xB0, 0x50};
const uint8_t EXIT_SLOPE_BALL_22_hi[] = {0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00};


const uint8_t EXIT_SLOPE_BALL_66_lo[] = {0x93, 0x6D, 0x93, 0x6D, 0x50, 0xB0, 0x50, 0xB0};
const uint8_t EXIT_SLOPE_BALL_66_hi[] = {0x01, 0xFE, 0x01, 0xFE, 0x01, 0xFE, 0x01, 0xFE};


const uint8_t EXIT_SLOPE_CUBE_22_lo[] = {0xCD, 0x33, 0xCD, 0x33, 0x00, 0x00, 0x00, 0x00};
const uint8_t EXIT_SLOPE_CUBE_22_hi[] = {0xFE, 0x01, 0xFE, 0x01, 0xFF, 0x01, 0xFF, 0x01};


const uint8_t DASH_END_VEL_RESET_lo[] = {0x33, 0xCD, 0x33, 0xCD, 0x00, 0x00, 0x00, 0x00};
const uint8_t DASH_END_VEL_RESET_hi[] = {0x01, 0xFE, 0x01, 0xFE, 0x01, 0xFF, 0x01, 0xFF};

#line 29 "SAUCE/include.h"
_Pragma ("rodata-name (pop)")



_Pragma ("rodata-name (push, \"XCD_BANK_05\")")
#line 145 "LIB/headers/stdint.h"

#line 5 "SAUCE/core.h"
#line 362 "LIB/headers/neslib.h"

#line 6 "SAUCE/core.h"
#line 214 "SAUCE/core.h"
typedef enum { false, true } bool;


#line 5 "SAUCE/mouse.h"

typedef struct mouse_s {
  union {
    uint8_t status_computed;
    struct {
        uint8_t unused : 3;
        uint8_t right_press : 1;
        uint8_t left_press : 1;
        uint8_t right_release : 1;
        uint8_t left_release : 1;
        uint8_t connected : 1;
    };
  };
  union {
    uint8_t status_raw;
    struct {




        uint8_t signature : 4;
        uint8_t unused2 : 2;

        uint8_t left : 1;
        uint8_t right : 1;
    };
  };
  uint8_t y;
  uint8_t x;
} Mouse;

_Static_assert (sizeof (Mouse) == 4, "Mouse struct must be 4 bytes");

extern Mouse mouse;
_Pragma ("zpsym(\"mouse\");")


extern uint8_t mouse_mask;
_Pragma ("zpsym(\"mouse_mask\");")
#line 55 "SAUCE/mouse.h"

#line 35 "SAUCE/include.h"


_Pragma ("rodata-name (pop)")

_Pragma ("rodata-name (push, \"XCD_BANK_06\")")
#line 21 "LEVELS/include/lvlset_A/grounddata.h"
const unsigned char ground0[] = {
0x00,0x88, 0x02,0x89, 0x00,0x88, 0x02,0x89, 0x00,0x88, 0x02,0x89, 0x00,0x88, 0x02,0x89,
0x82, 0x02,0x06, 0x82, 0x02,0x06, 0x82, 0x02,0x06, 0x82, 0x02,0x06,
0x82, 0x02,0x06, 0x82, 0x02,0x06, 0x82, 0x02,0x06, 0x82, 0x02,0x06,
};
#line 41 "SAUCE/include.h"
#line 15 "LEVELS/include/lvlset_A/groundlist.h"
const unsigned char * const ground[] = {ground0};
#line 42 "SAUCE/include.h"
_Pragma ("rodata-name (pop)")
#line 169 "LEVELS/include/lvlset_A/objdefines.h"

#line 49 "SAUCE/include.h"
#line 14 "SAUCE/defines/difficulty.h"

#line 51 "SAUCE/include.h"
#line 4 "LEVELS/include/lvlset_A/levellist.h"
const uint8_t difficulty_list[] = {
 0,
 0,
 1,
 1,
 2,
 2,
 3,
 3,
 3,
 4,
 4,
 4,
 4,
 5,
 4,
 4,
 3,
 5,
 3,
 5,
 4,
 4,
 1,
 2,
 2,
 0,
 1,
 1,
 1,
 2,
 2,
 2,
 3,
 3,
 3,
 3,
 4,
 4,
 4,
 4,
 4,
 5,
 5,
 5,
};

const uint8_t stars_list[] = {
 1,
 2,
 3,
 4,
 5,
 6,
 7,
 8,
 9,
 10,
 11,
 12,
 10,
 14,
 12,
 12,
 10,
 14,
 10,
 15,
 12,
 12,
 5,
 6,
 3,
 2,
 3,
 3,
 3,
 4,
 5,
 5,
 6,
 7,
 7,
 7,
 8,
 8,
 8,
 8,
 9,
 10,
 10,
 10,
};
#line 52 "SAUCE/include.h"
#line 1 "LEVELS/include/lvlset_A/const_levellist.h"
const unsigned char colors_list[] = {
 0x12,
 0x14,
 0x15,
 0x16,
 0x17,
 0x28,
 0x2A,
 0x2C,
 0x11,
};



static const uint8_t iconTable[] = {
 0, 0x02, 0x04, 0x06, 0x08, 0x0A, 0x0C, 0x0E, 0x20, 0x22, 0x24, 0x26, 0x40, 0x42, 0x44, 0x46, 0x48, 0x4A, 0x4C, 0x4E, 0x60, 0x62, 0x64, 0x66, 0x68, 0x6A, 0x6C, 0x6E
};
#line 53 "SAUCE/include.h"
#line 1 "SAUCE/defines/dialogbox.h"
_Pragma ("rodata-name (push, \"XCD_BANK_02\")")
#line 1 "./menus/h/DialogBox.h"
const unsigned char DialogBox[264]={
0x01,0x02,0x01,0x46,0xae,0x02,0x01,0x0f,0xae,0x02,0x01,0x0d,0xaf,0x02,0x01,0x0f,
0xaf,0x02,0x01,0x0a,0x06,0x07,0x04,0x01,0x13,0x06,0x07,0x02,0x01,0x07,0x08,0x09,
0x05,0x01,0x13,0x08,0x09,0x02,0x01,0x07,0x0c,0xff,0x01,0x15,0x0d,0x02,0x01,0x07,
0x0c,0xff,0x01,0x15,0x0d,0x02,0x01,0x07,0x0c,0xff,0x01,0x15,0x0d,0x02,0x01,0x07,
0x0c,0xff,0x01,0x15,0x0d,0x02,0x01,0x07,0x0c,0xff,0x01,0x15,0x0d,0x02,0x01,0x07,
0x0c,0xff,0x01,0x15,0x0d,0x02,0x01,0x07,0x0c,0xff,0x01,0x15,0x0d,0x02,0x01,0x07,
0x0c,0xff,0x01,0x15,0x0d,0x02,0x01,0x07,0x0c,0xff,0x01,0x15,0x0d,0x02,0x01,0x07,
0x0c,0xff,0x01,0x15,0x0d,0x02,0x01,0x07,0x0c,0xff,0x01,0x15,0x0d,0x02,0x01,0x07,
0x0c,0xff,0x01,0x15,0x0d,0x02,0x01,0x07,0x0c,0xff,0x01,0x15,0x0d,0x02,0x01,0x07,
0x0c,0xff,0x01,0x15,0x0d,0x02,0x01,0x07,0x0c,0xff,0x01,0x15,0x0d,0x02,0x01,0x07,
0x0c,0xff,0x01,0x15,0x0d,0x02,0x01,0x07,0x0c,0xff,0x01,0x15,0x0d,0x02,0x01,0x07,
0x0c,0xff,0x01,0x15,0x0d,0x02,0x01,0x07,0x0a,0x0b,0x04,0x01,0x07,0x06,0x0e,0x0e,
0x07,0x04,0x01,0x07,0x0a,0x0b,0x02,0x01,0x09,0x05,0x01,0x07,0x08,0x05,0x05,0x09,
0x05,0x01,0x07,0x02,0x01,0x85,0x00,0x01,0x08,0x17,0x05,0x01,0x03,0x4d,0x00,0x00,
0x11,0x00,0x01,0x03,0x44,0x00,0x00,0x11,0x00,0x01,0x03,0x44,0x00,0x00,0x11,0x00,
0x01,0x03,0x44,0x00,0x00,0x11,0x00,0x01,0x03,0x44,0x00,0x00,0x07,0x05,0x0d,0x07,
0x05,0x0d,0x00,0x01,0x07,0x00,0x01,0x00
};
#line 4 "SAUCE/defines/dialogbox.h"
#line 4 "SAUCE/defines/charmap/dialogbox_charmap.h"
_Pragma ("charmap (0x20, 0xFF)")



_Pragma ("charmap (0x24, 0xFE)")
_Pragma ("charmap (0x25, 0xDA)")
_Pragma ("charmap (0x26, 0xBA)")

_Pragma ("charmap (0x28, 0x7C)")
_Pragma ("charmap (0x29, 0x7D)")
_Pragma ("charmap (0x2A, 0x8E)")

_Pragma ("charmap (0x2C, 0x2C)")


_Pragma ("charmap (0x2F, 0xE0)")
_Pragma ("charmap (0x30, 0xB0)")
_Pragma ("charmap (0x31, 0xB1)")
_Pragma ("charmap (0x32, 0xB2)")
_Pragma ("charmap (0x33, 0xB3)")
_Pragma ("charmap (0x34, 0xB4)")
_Pragma ("charmap (0x35, 0xB5)")
_Pragma ("charmap (0x36, 0xB6)")
_Pragma ("charmap (0x37, 0xB7)")
_Pragma ("charmap (0x38, 0xB8)")
_Pragma ("charmap (0x39, 0xB9)")
_Pragma ("charmap (0x3A, 0x16)")
_Pragma ("charmap (0x3B, 0xFC)")





_Pragma ("charmap (0x41, 0xBB)")
_Pragma ("charmap (0x42, 0xBC)")
_Pragma ("charmap (0x43, 0xBD)")
_Pragma ("charmap (0x44, 0xBE)")
_Pragma ("charmap (0x45, 0xBF)")
_Pragma ("charmap (0x46, 0xC0)")
_Pragma ("charmap (0x47, 0xC1)")
_Pragma ("charmap (0x48, 0xC2)")
_Pragma ("charmap (0x49, 0xC3)")
_Pragma ("charmap (0x4A, 0xC4)")
_Pragma ("charmap (0x4B, 0xC5)")
_Pragma ("charmap (0x4C, 0xC6)")
_Pragma ("charmap (0x4D, 0xC7)")
_Pragma ("charmap (0x4E, 0xC8)")
_Pragma ("charmap (0x4F, 0xC9)")
_Pragma ("charmap (0x50, 0xCA)")
_Pragma ("charmap (0x51, 0xCB)")
_Pragma ("charmap (0x52, 0xCC)")
_Pragma ("charmap (0x53, 0xCD)")
_Pragma ("charmap (0x54, 0xCE)")
_Pragma ("charmap (0x55, 0xCF)")
_Pragma ("charmap (0x56, 0xDB)")
_Pragma ("charmap (0x57, 0xDC)")
_Pragma ("charmap (0x58, 0xDD)")
_Pragma ("charmap (0x59, 0xDE)")
_Pragma ("charmap (0x5A, 0xDF)")
_Pragma ("charmap (0x5B, 0x5C)")
_Pragma ("charmap (0x5C, 0xFB)")
_Pragma ("charmap (0x5D, 0x5D)")



_Pragma ("charmap (0x61, 0xE1)")
_Pragma ("charmap (0x62, 0xE2)")
_Pragma ("charmap (0x63, 0xE3)")
_Pragma ("charmap (0x64, 0xE4)")
_Pragma ("charmap (0x65, 0xE5)")
_Pragma ("charmap (0x66, 0xE6)")
_Pragma ("charmap (0x67, 0xE7)")
_Pragma ("charmap (0x68, 0xE8)")
_Pragma ("charmap (0x69, 0xE9)")
_Pragma ("charmap (0x6A, 0xEA)")
_Pragma ("charmap (0x6B, 0xEB)")
_Pragma ("charmap (0x6C, 0xEC)")
_Pragma ("charmap (0x6D, 0xED)")
_Pragma ("charmap (0x6E, 0xEE)")
_Pragma ("charmap (0x6F, 0xEF)")
_Pragma ("charmap (0x70, 0xF0)")
_Pragma ("charmap (0x71, 0xF1)")
_Pragma ("charmap (0x72, 0xF2)")
_Pragma ("charmap (0x73, 0xF3)")
_Pragma ("charmap (0x74, 0xF4)")
_Pragma ("charmap (0x75, 0xF5)")
_Pragma ("charmap (0x76, 0xF6)")
_Pragma ("charmap (0x77, 0xF7)")
_Pragma ("charmap (0x78, 0xF8)")
_Pragma ("charmap (0x79, 0xF9)")
_Pragma ("charmap (0x7A, 0xFA)")
_Pragma ("charmap (0x7B, 0x6C)")

_Pragma ("charmap (0x7D, 0x6D)")

#line 5 "SAUCE/defines/dialogbox.h"

void draw_dialog_box(const char * data);
#line 39 "SAUCE/defines/dialogbox.h"
const char dialogBox_saveFileSafetyHeader[] = "$$SAVE$$FILE$$SAFETY$$\v\2";
const char dialogBox_pleasePressB[] = "\a please hold  (RESET)\v\2  while powering off\v\2\t\3real nes/famicom \v\2  hardware  to avoid\v\2 save file corruption\v\2\b  [\t\20]  \n  $PRESS$ANY$BUTTON$\n  $$$TO$$CONTINUE$$$\n\b  {\t\20}  ";
const char dialogBox_itIsNowSafe[] = "\a\n  it is now safe to\v\2 turn off your system\v\6\b  [\t\20]  \n  $$$$PRESS$B$TO$$$$\n  $$$$GO$BACK$TO$$$$\n  $THE$TITLE$SCREEN$\n\b  {\t\20}  ";

const char dialogBox_wrongSaveFileVersion[] = " for a\a version";
const char dialogBox_nolder[] = "n older";
const char dialogBox_newer[] = " newer ";
const char dialogBox_saveFileMissingCorrupt[] = "  missing or corrupt";
const char dialogBox_saveIssues[] = "$$INVALID$$SAVE$FILE$$\v\5  your save  file is\v\2\a\v\6 (A;$CREATE$NEW$SAVE)\v\2 (B;$LOAD$ANYWAY$$$$)";
#line 4 "SAUCE/defines/charmap/no_remap_charmap.h"
_Pragma ("charmap (0x20, 0x20)")
_Pragma ("charmap (0x21, 0x21)")
_Pragma ("charmap (0x22, 0x22)")
_Pragma ("charmap (0x23, 0x23)")
_Pragma ("charmap (0x24, 0x24)")
_Pragma ("charmap (0x25, 0x25)")
_Pragma ("charmap (0x26, 0x26)")
_Pragma ("charmap (0x27, 0x27)")
_Pragma ("charmap (0x28, 0x28)")
_Pragma ("charmap (0x29, 0x29)")
_Pragma ("charmap (0x2a, 0x2a)")
_Pragma ("charmap (0x2b, 0x2b)")
_Pragma ("charmap (0x2c, 0x2c)")
_Pragma ("charmap (0x2d, 0x2d)")
_Pragma ("charmap (0x2e, 0x2e)")
_Pragma ("charmap (0x2f, 0x2f)")
_Pragma ("charmap (0x30, 0x30)")
_Pragma ("charmap (0x31, 0x31)")
_Pragma ("charmap (0x32, 0x32)")
_Pragma ("charmap (0x33, 0x33)")
_Pragma ("charmap (0x34, 0x34)")
_Pragma ("charmap (0x35, 0x35)")
_Pragma ("charmap (0x36, 0x36)")
_Pragma ("charmap (0x37, 0x37)")
_Pragma ("charmap (0x38, 0x38)")
_Pragma ("charmap (0x39, 0x39)")
_Pragma ("charmap (0x3a, 0x3a)")
_Pragma ("charmap (0x3b, 0x3b)")
_Pragma ("charmap (0x3c, 0x3c)")
_Pragma ("charmap (0x3d, 0x3d)")
_Pragma ("charmap (0x3e, 0x3e)")
_Pragma ("charmap (0x3f, 0x3f)")
_Pragma ("charmap (0x40, 0x40)")
_Pragma ("charmap (0x41, 0x41)")
_Pragma ("charmap (0x42, 0x42)")
_Pragma ("charmap (0x43, 0x43)")
_Pragma ("charmap (0x44, 0x44)")
_Pragma ("charmap (0x45, 0x45)")
_Pragma ("charmap (0x46, 0x46)")
_Pragma ("charmap (0x47, 0x47)")
_Pragma ("charmap (0x48, 0x48)")
_Pragma ("charmap (0x49, 0x49)")
_Pragma ("charmap (0x4a, 0x4a)")
_Pragma ("charmap (0x4b, 0x4b)")
_Pragma ("charmap (0x4c, 0x4c)")
_Pragma ("charmap (0x4d, 0x4d)")
_Pragma ("charmap (0x4e, 0x4e)")
_Pragma ("charmap (0x4f, 0x4f)")
_Pragma ("charmap (0x50, 0x50)")
_Pragma ("charmap (0x51, 0x51)")
_Pragma ("charmap (0x52, 0x52)")
_Pragma ("charmap (0x53, 0x53)")
_Pragma ("charmap (0x54, 0x54)")
_Pragma ("charmap (0x55, 0x55)")
_Pragma ("charmap (0x56, 0x56)")
_Pragma ("charmap (0x57, 0x57)")
_Pragma ("charmap (0x58, 0x58)")
_Pragma ("charmap (0x59, 0x59)")
_Pragma ("charmap (0x5a, 0x5a)")
_Pragma ("charmap (0x5b, 0x5b)")

_Pragma ("charmap (0x5c, 0x5c)")
_Pragma ("charmap (0x5e, 0x5e)")
_Pragma ("charmap (0x5f, 0x5f)")
_Pragma ("charmap (0x60, 0x60)")
_Pragma ("charmap (0x61, 0x61)")
_Pragma ("charmap (0x62, 0x62)")
_Pragma ("charmap (0x63, 0x63)")
_Pragma ("charmap (0x64, 0x64)")
_Pragma ("charmap (0x65, 0x65)")
_Pragma ("charmap (0x66, 0x66)")
_Pragma ("charmap (0x67, 0x67)")
_Pragma ("charmap (0x68, 0x68)")
_Pragma ("charmap (0x69, 0x69)")
_Pragma ("charmap (0x6a, 0x6a)")
_Pragma ("charmap (0x6b, 0x6b)")
_Pragma ("charmap (0x6c, 0x6c)")
_Pragma ("charmap (0x6d, 0x6d)")
_Pragma ("charmap (0x6e, 0x6e)")
_Pragma ("charmap (0x6f, 0x6f)")
_Pragma ("charmap (0x70, 0x70)")
_Pragma ("charmap (0x71, 0x71)")
_Pragma ("charmap (0x72, 0x72)")
_Pragma ("charmap (0x73, 0x73)")
_Pragma ("charmap (0x74, 0x74)")
_Pragma ("charmap (0x75, 0x75)")
_Pragma ("charmap (0x76, 0x76)")
_Pragma ("charmap (0x77, 0x77)")
_Pragma ("charmap (0x78, 0x78)")
_Pragma ("charmap (0x79, 0x79)")
_Pragma ("charmap (0x7a, 0x7a)")
_Pragma ("charmap (0x7b, 0x7b)")
_Pragma ("charmap (0x7c, 0x7c)")
_Pragma ("charmap (0x7d, 0x7d)")
_Pragma ("charmap (0x7e, 0x7e)")
#line 50 "SAUCE/defines/dialogbox.h"
_Pragma ("rodata-name (pop)")
#line 55 "SAUCE/include.h"
#line 56 "SAUCE/famidash.h"
_Pragma ("bss-name(\"ZEROPAGE\")")

uint8_t tmp1;
uint8_t tmp2;
uint8_t tmp3;
uint8_t tmp4;
uint16_t tmp5;
uint16_t tmp6;
uint8_t tmp7;
uint8_t tmp8;
uint8_t tmp9;
uint16_t tmpA;
uint16_t tmpB;
int16_t tmpfallspeed;
int16_t tmpgravity;
uint8_t iconbank1;
uint8_t iconbank2;
uint8_t iconbank3;
uint8_t* tmpptr1;
uint8_t* tmpptr2;
uint32_t tmplong;
uint8_t selectedbgm;
uint8_t selectedsfx;
int8_t tmpi8;

_Pragma ("zpsym(\"tmpptr1\")")
_Pragma ("zpsym(\"tmpptr2\")")



extern uint8_t cc65_tmp1;
extern uint8_t cc65_tmp2;
extern uint8_t cc65_tmp3;
extern uint8_t cc65_tmp4;
extern uint16_t cc65_ptr1;
extern uint16_t cc65_ptr2;
extern uint16_t cc65_ptr3;
extern uint16_t cc65_ptr4;

extern void * cc65_sp;
extern uint16_t cc65_sreg;

_Pragma ("zpsym(\"cc65_tmp1\")")
_Pragma ("zpsym(\"cc65_tmp2\")")
_Pragma ("zpsym(\"cc65_tmp3\")")
_Pragma ("zpsym(\"cc65_tmp4\")")
_Pragma ("zpsym(\"cc65_ptr1\")")
_Pragma ("zpsym(\"cc65_ptr2\")")
_Pragma ("zpsym(\"cc65_ptr3\")")
_Pragma ("zpsym(\"cc65_ptr4\")")

_Pragma ("zpsym(\"cc65_sp\")")
_Pragma ("zpsym(\"cc65_sreg\")")

extern volatile unsigned char VRAM_UPDATE;
_Pragma ("zpsym (\"VRAM_UPDATE\")")

uint8_t currplayer_mini;
uint16_t currplayer_x;
uint16_t currplayer_y;
int16_t currplayer_vel_x;
int16_t currplayer_vel_y;
uint8_t currplayer_gravity;
uint8_t currplayer_x_small;
uint8_t currplayer_y_small;
int8_t currplayer_vel_y_small;
int8_t currplayer_slope_frames;
uint8_t currplayer_was_on_slope_counter;
uint8_t currplayer_slope_type;
uint8_t currplayer_last_slope_type;
uint8_t currplayer_direction;
uint8_t currplayer_table_idx;

uint8_t gamemode;
uint8_t cube_data[2];
uint16_t cube_rotate[2];

uint8_t collision;
uint8_t collision_L;
uint8_t collision_R;
uint8_t collision_U;
uint8_t collision_D;

uint16_t old_x;
uint16_t old_y;

uint8_t eject_L;
uint8_t eject_R;
uint8_t eject_D;
uint8_t eject_U;

uintptr_t address;
uint8_t x;
uint8_t y;
uint8_t index;
uint8_t temp_x;
uint8_t temp_y;
uint8_t temp_room;
uint8_t dual;
int8_t slope_frames[2];

uint8_t slope_type[2];
uint8_t was_on_slope_counter[2];
uint8_t * sprite_data;
uint8_t * level_data;

_Pragma ("zpsym(\"sprite_data\")")
_Pragma ("zpsym(\"level_data\")")

extern uint8_t framerate;
extern uint8_t cpuRegion;
extern uint8_t fullRegion;

_Pragma ("zpsym (\"framerate\")")
_Pragma ("zpsym (\"cpuRegion\")")
_Pragma ("zpsym (\"fullRegion\")")


_Pragma ("bss-name(\"SRAM\")")
uint8_t SRAM_VALIDATE[4];

uint8_t coin1_obtained[0x80];
uint8_t coin2_obtained[0x80];
uint8_t coin3_obtained[0x80];

uint8_t LEVELCOMPLETE[0x80];
uint8_t level_completeness_normal[0x80*2];

uint8_t achievements[0x20];

uint8_t invisible;
uint8_t twoplayer;
#line 195 "SAUCE/famidash.h"
uint8_t options;
#line 205 "SAUCE/famidash.h"
uint8_t practice_music_sync;

uint8_t icon;
uint8_t icon_colors[3];





uint8_t cursedmusic;
uint8_t discomode;
uint8_t trails;
uint8_t viseffects;
uint8_t retro_mode;
uint8_t palette_cycle_mode;
uint8_t gameboy_mode;
uint8_t invisblocks;
uint8_t cam_seesaw;
uint8_t forced_credits;
extern uint8_t extceil;
uint8_t drawBarFlag;
uint8_t exitPortalTimer;
uint8_t menu_music;

uint8_t auto_practicepoints;
#line 237 "SAUCE/famidash.h"
uint8_t practice_point_count;
uint8_t curr_practice_point;
uint8_t latest_practice_point;


uint8_t practice_player_1_x_lo[8]; uint8_t practice_player_1_x_hi[8];
uint8_t practice_player_1_vel_x_lo[8]; uint8_t practice_player_1_vel_x_hi[8];
uint8_t practice_player_1_y_lo[8]; uint8_t practice_player_1_y_hi[8];
uint8_t practice_player_1_vel_y_lo[8]; uint8_t practice_player_1_vel_y_hi[8];
uint8_t practice_cube_1_rotate_lo[8]; uint8_t practice_cube_1_rotate_hi[8];

uint8_t practice_player_2_x_lo[8]; uint8_t practice_player_2_x_hi[8];
uint8_t practice_player_2_vel_x_lo[8]; uint8_t practice_player_2_vel_x_hi[8];
uint8_t practice_player_2_y_lo[8]; uint8_t practice_player_2_y_hi[8];
uint8_t practice_player_2_vel_y_lo[8]; uint8_t practice_player_2_vel_y_hi[8];
uint8_t practice_cube_2_rotate_lo[8]; uint8_t practice_cube_2_rotate_hi[8];

uint8_t practice_player_1_gravity[8];
uint8_t practice_player_2_gravity[8];
uint8_t practice_player_1_mini[8];
uint8_t practice_player_2_mini[8];
uint8_t practice_player_1_was_on_slope_counter[8];
uint8_t practice_player_2_was_on_slope_counter[8];
int8_t practice_player_1_slope_frames[8];
int8_t practice_player_2_slope_frames[8];
int8_t practice_player_1_slope_type[8];
int8_t practice_player_2_slope_type[8];
int8_t practice_player_1_last_slope_type[8];
int8_t practice_player_2_last_slope_type[8];

uint8_t practice_scroll_x_lo[8]; uint8_t practice_scroll_x_md[8]; uint8_t practice_scroll_x_hi[8]; uint8_t practice_scroll_x_ex[8];
uint8_t practice_scroll_y_lo[8]; uint8_t practice_scroll_y_hi[8];
uint8_t practice_scroll_y_subpx[8];
uint8_t practice_min_scroll_y_lo[8]; uint8_t practice_min_scroll_y_hi[8];
uint8_t practice_seam_scroll_y_lo[8]; uint8_t practice_seam_scroll_y_hi[8];
uint8_t practice_old_draw_scroll_y_lo[8]; uint8_t practice_old_draw_scroll_y_hi[8];
uint8_t practice_target_scroll_y_lo[8]; uint8_t practice_target_scroll_y_hi[8];

uint8_t practice_nocamlockforced[8];
uint8_t practice_disco_sprites[8];
uint8_t practice_slowmode[8];
uint8_t practice_forced_trails[8];
uint8_t practice_gravity_mod[8];
uint8_t practice_player_gamemode[8];
uint8_t practice_dual[8];
uint8_t practice_speed[8];
uint8_t practice_parallax_scroll_x[8];
uint8_t practice_outline_color[8];
uint8_t practice_g_color_type[8];
uint8_t practice_bg_color_type[8];


uint8_t practice_orbactive[8];
uint8_t practice_nullscapes_active[8];
uint8_t practice_nullscapes_orb_type[8];
uint8_t practice_kandoframecnt[8];

uint8_t practice_song[8];
uint8_t practice_player_invis[8];

uint8_t practice_famistudio_state[172 * 8];
uint8_t practice_famistudio_registers[11 * 8];
#line 309 "SAUCE/famidash.h"
_Pragma ("bss-name(\"BSS\")")

extern uint8_t trueFramerate;
extern uint8_t trueCpuRegion;
extern uint8_t trueFullRegion;

uint8_t last_gameState;

uint16_t player_x[2];
uint16_t player_y[2];
int16_t player_vel_x[2];
int16_t player_vel_y[2];
uint8_t player_gravity[2];
uint8_t player_mini[2];
uint8_t orbhitonthisframe[2];
uint8_t chargepower[2];


uint8_t practice_sprite_x_pos;

uint8_t kandokidshack;
uint8_t kandokidshack2;
uint8_t kandokidshack3;
uint8_t kandokidshack4;
uint8_t menuthemechosen;
uint8_t menutheme;
#line 345 "SAUCE/famidash.h"
uint16_t exittimer;
uint16_t jumps;
uint8_t orbed[2];
uint8_t speed;
uint8_t shuffle_offset;
uint8_t count;
uint8_t coins;
uint8_t currplayer;
uint8_t menuMusicCurrentlyPlaying;
uint8_t ball_switched[2];
uint8_t processXMovement;


uint8_t kandoframecnt;



uint8_t spiderframe[2];
uint8_t robotframe[2];
uint8_t ballframe;
uint8_t robotjumpframe[2];
uint8_t robotjumptime[2];
uint8_t hblocked[2];
uint8_t jblocked[2];
uint8_t fblocked[2];
uint8_t ninjajumps[2];
uint8_t slowmode;
uint8_t use_auto_chrswitch;
uint8_t level;
uint8_t level_data_bank;
uint8_t sprite_data_bank;
uint8_t menuselection;
uint8_t settingvalue;
uint8_t mouseframe;
uint8_t hold_timer;
uint8_t titlemode;
uint8_t titlecolor1;
uint8_t titlecolor2;
uint8_t titlecolor3;
uint8_t titleicon;
uint8_t kandodebugmode;

uint8_t all_levels_complete;
uint16_t triggers;
uint16_t top_triggers;

uint8_t current_deco_type;
uint8_t current_spike_set;
uint8_t current_block_set;
uint8_t current_saw_set;

uint8_t nocamlock;
uint8_t nocamlockforced;
uint8_t nestopia;

uint8_t nullscapes_orb_type;
uint8_t nullscapes_active;

uint8_t last_slope_type[2];

uint8_t gameState;

uint8_t teleport_output;

uint8_t normalorcommlevels;
uint8_t mouse_timer;
uint8_t prev_mouse_x;
uint8_t prev_mouse_y;




uint8_t level_resetting_flag;
uint8_t timewarp_done;

extern uint8_t parallax_scroll_column;
extern uint8_t parallax_scroll_column_start;
uint8_t parallax_scroll_x;
uint8_t invincible_counter;
uint32_t scroll_x;
uint16_t scroll_y;
uint8_t scroll_y_subpx;
uint16_t old_trail_scroll_y;
uint16_t target_scroll_y;

uint8_t song;
uint8_t songplaying;
uint8_t tempsong;
uint8_t temptemp6;
uint8_t make_cube_jump_higher;

uint8_t animating;
uint8_t coin1_timer;
uint8_t coin2_timer;
uint8_t coin3_timer;
uint16_t coin1_speed;
uint16_t coin2_speed;
uint16_t coin3_speed;

uint16_t spawn_y_pos;
uint16_t spawn_scroll_y_pos;
uint8_t max_fallspeed;






uint8_t orbactive;
uint8_t trail_sprites_visible[9];

uint8_t ufo_orbed[2];
uint8_t black_orbed[2];

uint8_t dashing[2];

uint8_t wrap_mode;
uint8_t minicoins;


uint16_t auto_practicepoint_timer;


uint8_t cheated;


uint8_t activesprites_x_lo[16]; uint8_t activesprites_x_hi[16];
uint8_t activesprites_y_lo[16]; uint8_t activesprites_y_hi[16];
uint8_t activesprites_type[16];
uint8_t activesprites_anim_frame[16];
int8_t activesprites_anim_frame_count[16];

uint8_t activesprites_realx[16];
uint8_t activesprites_realy[16];
uint8_t activesprites_active[16];
uint8_t activesprites_activated[16];
uint8_t activesprites_animated[16];



uint8_t DEBUG_MODE;
uint8_t lastgcolortype;
uint8_t lastbgcolortype;
uint8_t iconbank;
uint8_t dblocked[2];


uint8_t player_old_posy[9];
uint8_t discorefreshrate;
uint8_t discoframe;
uint8_t no_parallax;
uint8_t force_platformer;
uint8_t outline_color;
uint8_t forced_trails;
uint8_t skipProcessingCubeRotationLogic;

uint8_t attemptCounter[7];
uint8_t triggers_hit[3];
uint8_t pauseStatus;

uint8_t forceNoFadeOut;
#line 526 "SAUCE/famidash.h"
uint16_t target_x_scroll_stop;
uint16_t curr_x_scroll_stop;
uint8_t disco_sprites;
uint8_t gravity_mod;


uint8_t practicebuffer;
uint8_t tempplat;

unsigned char END_LEVEL_TIMER;





uint8_t donotresetrng;

uint8_t player_invis;

extern uint8_t famistudio_song_speed;

extern uint16_t min_scroll_y;
extern uint16_t seam_scroll_y;

extern volatile uint8_t hexToDecOutputBuffer[5];
#line 570 "SAUCE/famidash.h"
struct Base {
 uint8_t x;
 uint8_t y;
 uint8_t width;
 uint8_t height;
};

struct Base Generic;
struct Base Generic2;
#line 58 "SAUCE/include.h"
#line 1 "SAUCE/defines/palette/palettes_PRG.c"
const uint8_t paletteDefault[16] = {
    0x11,0x01,0x0F,0x30,
 0x00,0x01,0x11,0x30,
 0x00,0x01,0x0F,0x2A,
 0x11,0x01,0x0F,0x0F
};

const uint8_t paletteDefaultSP[16]={
 0x00,0x0f,0x2a,0x21,
 0x00,0x0f,0x24,0x28,
 0x00,0x0f,0x16,0x30,
 0x00,0x0f,0x2a,0x2C,
};

const uint8_t paletteMenu[16] = {
 0x17,0x0f,0x10,0x30,
 0x11,0x0f,0x2a,0x3A,
 0x17,0x0f,0x17,0x27,
 0x17,0x0f,0x11,0x21
};

const uint8_t splashMenu[16] = {
    0x11,0x0F,0x27,0x30,
    0x11,0x0f,0x2a,0x3A,
    0x11,0x0F,0x27,0x30,
    0x11,0x0F,0x11,0x30
};
#line 36 "SAUCE/defines/palette/palettes_PRG.c"
const uint8_t oldsplashMenu[16] = {
    0x11,0x0F,0x11,0x30,
    0x11,0x0f,0x2a,0x3A,
    0x11,0x0F,0x27,0x30,
    0x11,0x0F,0x11,0x30
};

const uint8_t splashMenu2[16] = {
    0x11,0x0F,0x14,0x37,
    0x11,0x0f,0x2a,0x3A,
    0x11,0x0F,0x27,0x30,
    0x11,0x0F,0x11,0x30
};

const uint8_t paletteLVLSelectSP[16] = {
 0x11, 0x0f, 0x2a, 0x30,
 0x11, 0x0f, 0x11, 0x30,
 0x11, 0x0f, 0x11, 0x30,
 0x11, 0x0f, 0x30, 0x30,
};
#line 60 "SAUCE/include.h"
#line 67 "./METATILES/metatiles.h"
extern const unsigned char metatiles_top1[];
extern const unsigned char metatiles_top2[];
extern const unsigned char metatiles_bot1[];
extern const unsigned char metatiles_bot2[];
extern const unsigned char metatiles_attr[];
extern const unsigned char is_solid[];
#line 64 "SAUCE/include.h"
#line 1 "SAUCE/defines/sprites.h"
_Pragma ("rodata-name (push, \"XCD_BANK_04\")")




const unsigned char Skull_Trigger_1[]={

   0, 0,0XC9,2,
   8, 0,0xC9,2|0x40,
 0x80
};
const unsigned char Skull_Trigger_2[]={

   0, 0,0XE9,2,
   8, 0,0xE9,2|0x40,
 0x80
};
const unsigned char Skull_Trigger_3[]={

   0, 0,0XED,2,
   8, 0,0xED,2|0x40,
 0x80
};
const unsigned char Skull_Trigger_4[]={

   0, 0,0XF7,2,
   8, 0,0xF7,2|0x40,
 0x80
};



const unsigned char MINICOIN_SPRITE1[]={
   4, -4,0xE9,0,
 0x80
};
const unsigned char MINICOIN_SPRITE2[]={
   4, -4,0xED,0,
 0x80
};
const unsigned char MINICOIN_SPRITE3[]={
   4, -4,0xF7,0,
 0x80
};
const unsigned char MINICOIN_SPRITE4[]={
   4, -4,0xED,0|0x40,
 0x80
};





const unsigned char Explode_1[]={

   0, 0,0x1D,3,
   8, 0,0x1D,3|0x40|0x80,
 0x80
};

const unsigned char Explode_2[]={

   0, 0,0x7D,3,
   8, 0,0x7D,3|0x40|0x80,
 0x80
};

const unsigned char Explode_3[]={

   0, 0,0x1F,3,
   8, 0,0x1F,3|0x40|0x80,
 0x80
};

const unsigned char Explode_4[]={

   0, 0,0x7F,3,
   8, 0,0x7F,3|0x40|0x80,
 0x80
};

const unsigned char Explode_5[]={

   0, 0,0xFF,3,
   8, 0,0xFF,3|0x40|0x80,
 0x80
};

const unsigned char * const Explode_Sprites[] = {Explode_1,Explode_1,Explode_1,Explode_1,Explode_2,Explode_2,Explode_2,Explode_2,Explode_3,Explode_3,Explode_3,Explode_3,Explode_4,Explode_4,Explode_4,Explode_4,Explode_5,Explode_5,Explode_5,Explode_5};

const unsigned char ExplodeR_1[]={

   0, 0,0x1F,3|0x40,
   8, 0,0x1F,3,
 0x80
};
const unsigned char * const ExplodeR_Sprites[] = {ExplodeR_1,ExplodeR_1,ExplodeR_1,ExplodeR_1,ExplodeR_1,ExplodeR_1,ExplodeR_1,ExplodeR_1,ExplodeR_1,ExplodeR_1,ExplodeR_1,ExplodeR_1,ExplodeR_1,ExplodeR_1,ExplodeR_1,ExplodeR_1,ExplodeR_1,ExplodeR_1,ExplodeR_1,ExplodeR_1};


const unsigned char Explode2_1[]={

   0, 0,0x1D,1,
   8, 0,0x1D,1|0x40|0x80,
 0x80
};

const unsigned char Explode2_2[]={

   0, 0,0x7D,1,
   8, 0,0x7D,1|0x40|0x80,
 0x80
};

const unsigned char Explode2_3[]={

   0, 0,0x1F,1,
   8, 0,0x1F,1|0x40|0x80,
 0x80
};

const unsigned char Explode2_4[]={

   0, 0,0x7F,1,
   8, 0,0x7F,1|0x40|0x80,
 0x80
};

const unsigned char Explode2_5[]={

   0, 0,0xFF,1,
   8, 0,0xFF,1|0x40|0x80,
 0x80
};

const unsigned char * const Explode_Sprites2[] = {Explode2_1,Explode2_1,Explode2_1,Explode2_1,Explode2_2,Explode2_2,Explode2_2,Explode2_2,Explode2_3,Explode2_3,Explode2_3,Explode2_3,Explode2_4,Explode2_4,Explode2_4,Explode2_4,Explode2_5,Explode2_5,Explode2_5,Explode2_5};

const unsigned char ExplodeR2_1[]={

   0, 0,0x1F,1|0x40,
   8, 0,0x1F,1,
 0x80
};
const unsigned char * const ExplodeR_Sprites2[] = {ExplodeR2_1,ExplodeR2_1,ExplodeR2_1,ExplodeR2_1,ExplodeR2_1,ExplodeR2_1,ExplodeR2_1,ExplodeR2_1,ExplodeR2_1,ExplodeR2_1,ExplodeR2_1,ExplodeR2_1,ExplodeR2_1,ExplodeR2_1,ExplodeR2_1,ExplodeR2_1,ExplodeR2_1,ExplodeR2_1,ExplodeR2_1,ExplodeR2_1};

const unsigned char Practice_Diamond[]={

   0, 0,0x57,0,
 0x80
};

const unsigned char * const Practice_Sprites[] = {Practice_Diamond};
#line 165 "SAUCE/defines/sprites.h"
_Pragma ("rodata-name (pop)")
_Pragma ("rodata-name (push, \"XCD_BANK_05\")")



const unsigned char Mini_Cube_0[]={

 -4, -4,0x35,3,
 0x80
};

const unsigned char Mini_Cube_1[]={

 -4, -4,0x37,3,
 0x80
};

const unsigned char Mini_Cube_2[]={

 -4, -4,0x39,3,
 0x80
};

const unsigned char Mini_Cube_3[]={

 -4, -4,0x3B,3,
 0x80

};

const unsigned char Mini_Cube_4[]={

 -4, -4,0x3D,3,
 0x80

};




const unsigned char * const MINI_CUBE[] = {Mini_Cube_0, Mini_Cube_1, Mini_Cube_1, Mini_Cube_2, Mini_Cube_2, Mini_Cube_3, Mini_Cube_4, Mini_Cube_4};

const unsigned char Mini_Cube2_0[]={

 -4, -4,0x35,1,
 0x80
};

const unsigned char Mini_Cube2_1[]={

 -4, -4,0x37,1,
 0x80
};

const unsigned char Mini_Cube2_2[]={

 -4, -4,0x39,1,
 0x80
};

const unsigned char Mini_Cube2_3[]={

 -4, -4,0x3B,1,
 0x80

};

const unsigned char Mini_Cube2_4[]={

 -4, -4,0x3D,1,
 0x80
};




const unsigned char * const MINI_CUBE2[] = {Mini_Cube2_0, Mini_Cube2_1, Mini_Cube2_1, Mini_Cube2_2, Mini_Cube2_2, Mini_Cube2_3, Mini_Cube2_4, Mini_Cube2_4};


const unsigned char Mini_Ball[]={

  -4, 4,0x3D,3|0x80,
 0x80
};

const unsigned char Mini_Ball_Alt[]={

  -4, 4,0x3D,3|0x80,
 0x80
};

const unsigned char * const MINI_BALL[]={Mini_Ball, Mini_Ball, Mini_Ball, Mini_Ball, Mini_Ball, Mini_Ball, Mini_Ball, Mini_Ball};
const unsigned char * const MINI_BALL_ALT[]={Mini_Ball_Alt, Mini_Ball_Alt, Mini_Ball_Alt, Mini_Ball_Alt, Mini_Ball_Alt, Mini_Ball_Alt, Mini_Ball_Alt, Mini_Ball_Alt};

const unsigned char WAVE_0[]={

  -8, 0,0x2D,3,
   0, 0,0x2F,3,
 0x80
};

const unsigned char WAVE_1[]={

  -8, 0,0x37,3,
   0, 0,0x39,3,
 0x80
};
const unsigned char WAVE_2[]={

  -8, 0,0x29,3,
   0, 0,0x2B,3,
 0x80
};
const unsigned char WAVE_5[]={

  -8, 0,0x37,3|0x80,
   0, 0,0x39,3|0x80,
 0x80
};

const unsigned char WAVE_6[]={

  -8, 0,0x2D,3|0x80,
   0, 0,0x2F,3|0x80,
 0x80
};



const unsigned char * const WAVE[] = {WAVE_0, WAVE_0, WAVE_1, WAVE_2, WAVE_2, WAVE_5, WAVE_6, WAVE_6};

const unsigned char WAVE2_0[]={

  -8, 0,0x2D,1,
   0, 0,0x2F,1,
 0x80
};

const unsigned char WAVE2_1[]={

  -8, 0,0x37,1,
   0, 0,0x39,1,
 0x80
};
const unsigned char WAVE2_2[]={

  -8, 0,0x29,1,
   0, 0,0x2B,1,
 0x80
};

const unsigned char WAVE2_5[]={

  -8, 0,0x37,1|0x80,
   0, 0,0x39,1|0x80,
 0x80
};

const unsigned char WAVE2_6[]={

  -8, 0,0x2D,1|0x80,
   0, 0,0x2F,1|0x80,
 0x80
};



const unsigned char * const WAVE2[] = {WAVE2_0, WAVE2_0, WAVE2_1, WAVE2_2, WAVE2_2, WAVE2_5, WAVE2_6, WAVE2_6};

const unsigned char MINI_WAVE_0[]={

  -4, 4,0x0F,3|0x80,
 0x80
};
const unsigned char MINI_WAVE_2[]={

  -4, -4,0xB,3,
 0x80
};
const unsigned char MINI_WAVE_6[]={

  -4, -4,0x0F,3,
 0x80
};



const unsigned char * const MINI_WAVE[] = {MINI_WAVE_0, MINI_WAVE_0, MINI_WAVE_0, MINI_WAVE_2, MINI_WAVE_2, MINI_WAVE_6, MINI_WAVE_6, MINI_WAVE_6};



const unsigned char MINI_WAVE2_0[]={

  -4, -6,0x0F,1|0x80,
 0x80
};
const unsigned char MINI_WAVE2_2[]={

  -4, -6,0x0B,1,
 0x80
};
const unsigned char MINI_WAVE2_6[]={

  -4, -6,0x0F,1,
 0x80
};


const unsigned char * const MINI_WAVE2[] = {MINI_WAVE2_0, MINI_WAVE2_0, MINI_WAVE2_0, MINI_WAVE2_2, MINI_WAVE2_2, MINI_WAVE2_6, MINI_WAVE2_6, MINI_WAVE2_6};


const unsigned char SNAKE_0[]={

  -8, 0,0x25,3,
   0, 0,0x27,3,
 0x80
};

const unsigned char SNAKE_2[]={

  -8, 0,0x21,3,
   0, 0,0x23,3,
 0x80
};

const unsigned char SNAKE_6[]={

  -8, 0,0x29,3,
   0, 0,0x2B,3,

 0x80
};



const unsigned char * const SNAKE[] = {SNAKE_0, SNAKE_0, SNAKE_2, SNAKE_2, SNAKE_2, SNAKE_2, SNAKE_6, SNAKE_6};


const unsigned char SNAKE2_0[]={

  -8, 0,0x25,1,
   0, 0,0x27,1,
 0x80
};

const unsigned char SNAKE2_2[]={

  -8, 0,0x21,1,
   0, 0,0x23,1,
 0x80
};

const unsigned char SNAKE2_6[]={

  -8, 0,0x29,1,
   0, 0,0x2B,1,

 0x80
};



const unsigned char * const SNAKE2[] = {SNAKE2_0, SNAKE2_0, SNAKE2_2, SNAKE2_2, SNAKE2_2, SNAKE2_2, SNAKE2_6, SNAKE2_6};




const unsigned char MINI_SNAKE_0[]={

  -4, -4,0x2F,3,
 0x80
};


const unsigned char MINI_SNAKE_2[]={

  -4, -4,0x2D,3,
 0x80
};


const unsigned char MINI_SNAKE_6[]={

  -4, -4,0x31,3,
 0x80
};

const unsigned char * const MINI_SNAKE[] = {MINI_SNAKE_0, MINI_SNAKE_0, MINI_SNAKE_2, MINI_SNAKE_2, MINI_SNAKE_2, MINI_SNAKE_2, MINI_SNAKE_6, MINI_SNAKE_6};


const unsigned char MINI_SNAKE2_0[]={

  -4, -4,0x2F,1,
 0x80
};


const unsigned char MINI_SNAKE2_2[]={

  -4, -4,0x2D,1,
 0x80
};


const unsigned char MINI_SNAKE2_6[]={

  -4, -4,0x31,1,
 0x80
};


const unsigned char * const MINI_SNAKE2[] = {MINI_SNAKE2_0, MINI_SNAKE2_0, MINI_SNAKE2_2, MINI_SNAKE2_2, MINI_SNAKE2_2, MINI_SNAKE2_2, MINI_SNAKE2_6, MINI_SNAKE2_6};


const unsigned char UFO_0[]={

  -8, -1,0x3F,3,
   0, -1,0x3F,3|0x40,
 0x80
};

const unsigned char UFO_U[]={

  -8, -1,0x3F,3,
   0, -1,0x3F,3|0x40,
 0x80
};

const unsigned char UFO_D[]={

  -8, -1,0x3F,3,
   0, -1,0x3F,3|0x40,
 0x80
};



const unsigned char * const UFO[] = {UFO_0, UFO_U, UFO_D};

const unsigned char MINI_UFO_0[]={

  -4, -4,0x19,3,
 0x80
};
const unsigned char MINI_UFO_U[]={

  -4, -4,0x19,3,
 0x80
};
const unsigned char MINI_UFO_D[]={

  -4, -4,0x19,3,
 0x80
};

const unsigned char * const MINI_UFO[] = {MINI_UFO_0, MINI_UFO_U, MINI_UFO_D};

const unsigned char Mini_Ball2[]={

  -4, 4,0x3D,1|0x80,
 0x80
};

const unsigned char * const MINI_BALL2[]={Mini_Ball2, Mini_Ball2, Mini_Ball2, Mini_Ball2, Mini_Ball2, Mini_Ball2, Mini_Ball2, Mini_Ball2};

const unsigned char UFO2_0[]={

  -8, -1,0x3F,1,
   0, -1,0x3F,1|0x40,
 0x80
};

const unsigned char UFO2_U[]={

  -8, -1,0x3F,1,
   0, -1,0x3F,1|0x40,
 0x80
};

const unsigned char UFO2_D[]={

  -8, -1,0x3F,1,
   0, -1,0x3F,1|0x40,
 0x80
};



const unsigned char * const UFO2[] = {UFO2_0, UFO2_U, UFO2_D};

const unsigned char MINI_UFO2_0[]={

  -4, -4,0x19,1,
 0x80
};
const unsigned char MINI_UFO2_U[]={

  -4, -4,0x19,1|0x40,
 0x80
};
const unsigned char MINI_UFO2_D[]={

  -4, -4,0x19,1,
 0x80
};

const unsigned char * const MINI_UFO2[] = {MINI_UFO2_0, MINI_UFO2_U, MINI_UFO2_D};

const unsigned char Cube_0[]={

  -8, 0,0x01,3,
   0, 0,0x03,3,
 0x80
};
const unsigned char Cube_1[]={

  -8, 0,0x05,3,
   0, 0,0x07,3,
 0x80
};
const unsigned char Cube_2[]={

  -8, 0,0x09,3,
   0, 0,0x0B,3,
 0x80
};
const unsigned char Cube_3[]={

  -8, 0,0x0D,3,
   0, 0,0x0F,3,
 0x80
};
const unsigned char Cube_4[]={

  -8, 0,0x11,3,
   0, 0,0x13,3,
 0x80
};
const unsigned char Cube_5[]={

  -8, 0,0x15,3,
   0, 0,0x17,3,
 0x80
};

const unsigned char Cube_6[]={

     -8, 0,0x19,3,
      0, 0,0x1B,3,
    0x80
};

const unsigned char * const CUBE[] = {Cube_0, Cube_1, Cube_2, Cube_3, Cube_4, Cube_5, Cube_6, Cube_6};

const unsigned char Pogo_0[]={

  -8, 0,0x11,3,
   0, 0,0x11,3|0x40,
 0x80
};

const unsigned char Pogo_1[]={

  -8, 0,0x13,3,
   0, 0,0x13,3|0x40,
 0x80
};


const unsigned char * const POGO[] = {Pogo_0, Pogo_1};



const unsigned char Pogo2_0[]={

  -8, 0,0x11,1,
   0, 0,0x11,1|0x40,
 0x80
};
const unsigned char Pogo2_1[]={

  -8, 0,0x13,1,
   0, 0,0x13,1|0x40,
 0x80
};

const unsigned char * const POGO2[] = {Pogo2_0, Pogo2_1};


const unsigned char Mini_Pogo_0[]={

 -4, -4,0x15,3,
 0x80
};

const unsigned char Mini_Pogo_1[]={

 -4, -4,0x17,3,
 0x80
};

const unsigned char * const MINI_POGO[] = {Mini_Pogo_0, Mini_Pogo_1};


const unsigned char Mini_Pogo2_0[]={

 -4, -4,0x15,1,
 0x80
};


const unsigned char Mini_Pogo2_1[]={

 -4, -4,0x17,1,
 0x80
};

const unsigned char * const MINI_POGO2[] = {Mini_Pogo2_0, Mini_Pogo2_1};



const unsigned char Cube2_0[]={

  -8, 0,0x01,1,
   0, 0,0x03,1,
 0x80
};
const unsigned char Cube2_1[]={

  -8, 0,0x05,1,
   0, 0,0x07,1,
 0x80
};
const unsigned char Cube2_2[]={

  -8, 0,0x09,1,
   0, 0,0x0B,1,
 0x80
};
const unsigned char Cube2_3[]={

  -8, 0,0x0D,1,
   0, 0,0x0F,1,
 0x80
};
const unsigned char Cube2_4[]={

  -8, 0,0x11,1,
   0, 0,0x13,1,
 0x80
};
const unsigned char Cube2_5[]={

  -8, 0,0x15,1,
   0, 0,0x17,1,
 0x80
};

const unsigned char Cube2_6[]={

     -8, 0,0x19,1,
      0, 0,0x1B,1,
    0x80
};


const unsigned char * const CUBE2[] = {Cube2_0, Cube2_1, Cube2_2, Cube2_3, Cube2_4, Cube2_5, Cube2_6, Cube2_6};






const unsigned char Ship_0[]={

  -8, 0,0x21,3,
   0, 0,0x23,3,
 0x80
};
const unsigned char Ship_1[]={

  -8, 0,0x25,3,
   0, 0,0x27,3,
 0x80
};
const unsigned char Ship_2[]={

  -8, 0,0x29,3,
   0, 0,0x2B,3,
 0x80
};

const unsigned char Ship_5[]={

  -8, 0,0x2D,3,
   0, 0,0x2F,3,
 0x80
};
const unsigned char Ship_6[]={

  -8, 0,0x31,3,
   0, 0,0x33,3,
 0x80
};


const unsigned char * const SHIP[] = {Ship_0, Ship_0, Ship_1, Ship_2, Ship_2, Ship_5, Ship_6, Ship_6};



const unsigned char Swing_0[]={

  -8, 0,0x39,3|0x80,
   0, 0,0x3B,3|0x80,
 0x80
};
const unsigned char Swing_1[]={

  -8, 0,0x35,3|0x80,
   0, 0,0x37,3|0x80,
 0x80
};
const unsigned char Swing_2[]={

  -8, 0,0x31,3,
   0, 0,0x33,3,
 0x80
};

const unsigned char Swing_5[]={

  -8, 0,0x35,3,
   0, 0,0x37,3,
 0x80
};
const unsigned char Swing_6[]={

  -8, 0,0x39,3,
   0, 0,0x3B,3,
 0x80
};


const unsigned char * const SWING[] = {Swing_0, Swing_0, Swing_1, Swing_2, Swing_2, Swing_5, Swing_6, Swing_6};
const unsigned char Swing2_0[]={

  -8, 0,0x39,1,
   0, 0,0x3B,1,
 0x80
};
const unsigned char Swing2_1[]={

  -8, 0,0x35,1,
   0, 0,0x37,1,
 0x80
};
const unsigned char Swing2_2[]={

  -8, 0,0x31,1,
   0, 0,0x33,1,
 0x80
};

const unsigned char Swing2_5[]={

  -8, 0,0x35,1|0x80,
   0, 0,0x37,1|0x80,
 0x80
};
const unsigned char Swing2_6[]={

  -8, 0,0x39,1|0x80,
   0, 0,0x3B,1|0x80,
 0x80
};


const unsigned char * const SWING2[] = {Swing2_0, Swing2_0, Swing2_1, Swing2_2, Swing2_2, Swing2_5, Swing2_6, Swing2_6};


const unsigned char Mini_Swing_6[]={

  -4, -4,0x1B,3,
 0x80
};

const unsigned char Mini_Swing_5[]={

  -4, -4,0x1B,3,
 0x80
};

const unsigned char Mini_Swing_2[]={

  -4, -4,0x3F,3,
 0x80
};


const unsigned char Mini_Swing_1[]={

  -4, -4,0x3D,3,
 0x80
};

const unsigned char Mini_Swing_0[]={

  -4, -4,0x3D,3,
 0x80
};

const unsigned char * const MINI_SWING[] = {Mini_Swing_0, Mini_Swing_0, Mini_Swing_1, Mini_Swing_2, Mini_Swing_2, Mini_Swing_5, Mini_Swing_6, Mini_Swing_6};

const unsigned char Mini_Swing_6_ALT[]={

  -4, -4,0x1B,3,
 0x80
};

const unsigned char Mini_Swing_5_ALT[]={

  -4, -4,0x1B,3,
 0x80
};

const unsigned char Mini_Swing_2_ALT[]={

  -4, -4,0x3F,3,
 0x80
};


const unsigned char Mini_Swing_1_ALT[]={

  -4, -4,0x3D,3,
 0x80
};

const unsigned char Mini_Swing_0_ALT[]={

  -4, -4,0x3D,3,
 0x80
};

const unsigned char * const MINI_SWING_ALT[] = {Mini_Swing_0_ALT, Mini_Swing_0_ALT, Mini_Swing_1_ALT, Mini_Swing_2_ALT, Mini_Swing_2_ALT, Mini_Swing_5_ALT, Mini_Swing_6_ALT, Mini_Swing_6_ALT};

const unsigned char Mini_Swing2_6[]={

  -4, -4,0x1B,1,
 0x80
};

const unsigned char Mini_Swing2_5[]={

  -4, -4,0x1B,1,
 0x80
};

const unsigned char Mini_Swing2_2[]={

  -4, -4,0x3F,1,
 0x80
};


const unsigned char Mini_Swing2_1[]={

  -4, -4,0x3D,1,
 0x80
};

const unsigned char Mini_Swing2_0[]={

  -4, -4,0x3D,1,
 0x80
};


const unsigned char * const MINI_SWING2[] = {Mini_Swing2_0, Mini_Swing2_0, Mini_Swing_1, Mini_Swing2_2, Mini_Swing2_2, Mini_Swing2_5, Mini_Swing2_6, Mini_Swing2_6};


const unsigned char Mini_Ship_0[]={

  -4, -4,0x01,3,
 0x80
};

const unsigned char Mini_Ship_1[]={

  -4, -4,0x03,3,
 0x80
};

const unsigned char Mini_Ship_2[]={

  -4, -4,0x05,3,
 0x80
};


const unsigned char Mini_Ship_5[]={

  -4, -4,0x07,3,
 0x80
};

const unsigned char Mini_Ship_6[]={

  -4, -4,0x09,3,
 0x80
};


const unsigned char * const MINI_SHIP[] = {Mini_Ship_0, Mini_Ship_0, Mini_Ship_1, Mini_Ship_2, Mini_Ship_2, Mini_Ship_5, Mini_Ship_6, Mini_Ship_6};





const unsigned char Ship2_0[]={

  -8, 0,0x21,1,
   0, 0,0x23,1,
 0x80
};
const unsigned char Ship2_1[]={

  -8, 0,0x25,1,
   0, 0,0x27,1,
 0x80
};
const unsigned char Ship2_2[]={

  -8, 0,0x29,1,
   0, 0,0x2B,1,
 0x80
};

const unsigned char Ship2_5[]={

  -8, 0,0x2D,1,
   0, 0,0x2F,1,
 0x80
};
const unsigned char Ship2_6[]={

  -8, 0,0x31,1,
   0, 0,0x33,1,
 0x80
};


const unsigned char * const SHIP2[] = {Ship2_0, Ship2_0, Ship2_1, Ship2_2, Ship2_2, Ship2_5, Ship2_6, Ship2_6};


const unsigned char Mini_Ship2_0[]={

  -4, -4,0x01,1,
 0x80
};

const unsigned char Mini_Ship2_1[]={

  -4, -4,0x03,1,
 0x80
};

const unsigned char Mini_Ship2_2[]={

  -4, -4,0x05,1,
 0x80
};


const unsigned char Mini_Ship2_5[]={

  -4, -4,0x07,1,
 0x80
};

const unsigned char Mini_Ship2_6[]={

  -4, -4,0x09,1,
 0x80
};


const unsigned char * const MINI_SHIP2[] = {Mini_Ship2_0, Mini_Ship2_0, Mini_Ship2_1, Mini_Ship2_2, Mini_Ship2_2, Mini_Ship2_5, Mini_Ship2_6, Mini_Ship2_6};

_Pragma ("rodata-name (pop)")
_Pragma ("rodata-name (push, \"XCD_BANK_04\")")



const unsigned char COIN_SPRITE[]={

   0, 0,0xAF,1,
   8, 0,0xAF,1|0x40,
 0x80
};
const unsigned char COIN_1_SPRITE[]={

   0, 0,0xB1,1,
   8, 0,0xB3,1,
 0x80
};
const unsigned char COIN_2_SPRITE[]={

   0, 0,0xB5,1,
   8, 0,0xB5,1|0x40,
 0x80
};
const unsigned char COIN_3_SPRITE[]={

   0, 0,0xB3,1|0x40,
   8, 0,0xB1,1|0x40,
 0x80
};


const unsigned char COIN_SPRITE_X[]={

   0, 0,0xC1,1,
   8, 0,0xC1,1|0x40,
 0x80
};
const unsigned char COIN_1_X[]={

   0, 0,0xC3,1,
   8, 0,0xC5,1,
 0x80
};
const unsigned char COIN_2_X[]={

   0, 0,0xC7,1,
   8, 0,0xC7,1|0x40,
 0x80
};
const unsigned char COIN_3_X[]={

   0, 0,0xC5,1|0x40,
   8, 0,0xC3,1|0x40,
 0x80
};

_Pragma ("rodata-name (pop)")
_Pragma ("rodata-name (push, \"XCD_BANK_05\")")

const unsigned char Ball_0[]={

  -8, 0,0x1B,3,
   0, 0,0x1B,3|0x40,
 0x80
};
const unsigned char Ball_1[]={

  -8, 0,0x3F,3,
   0, 0,0x3F,3|0x40,
 0x80
};

const unsigned char * const BALL[]={Ball_0, Ball_0, Ball_0, Ball_0, Ball_1, Ball_1, Ball_1, Ball_1};


const unsigned char Ball2_0[]={

  -8, 0,0x1B,1,
   0, 0,0x1B,1|0x40,
 0x80
};
const unsigned char Ball2_1[]={

  -8, 0,0x3F,1,
   0, 0,0x3F,1|0x40,
 0x80
};

const unsigned char * const BALL2[]={Ball2_0, Ball2_0, Ball2_0, Ball2_0, Ball2_1, Ball2_1, Ball2_1, Ball2_1};


const unsigned char Robot_0[]={

  -12, 1, 0x01,3,
  -4, 1, 0x03,3,
   4, 1, 0x05,3,
 0x80
};

const unsigned char Robot_1[]={

 -12, 1, 0xFF,3,
  -4, 1, 0x07,3,
   4, 1, 0x09,3,
 0x80
};

const unsigned char Robot_2[]={

 -12, 1, 0x01,3,
  -4, 1, 0x0B,3,
   4, 1, 0x05,3,
 0x80
};

const unsigned char Robot_3[]={

 -12, 1, 0xFF,3,
  -4, 1, 0x0D,3,
   4, 1, 0x09,3,
 0x80
};

const unsigned char Robot_Jump_1[]={

 -12, 1, 0xFF,3,
  -4, 1, 0x0F,3,
   4, 1, 0x11,3,
 0x80
};


const unsigned char Robot_0_Alt[]={

 -8, 1, 0x01,3,
  0, 1, 0x03,3,
  8, 1, 0xFF,3,
 0x80
};
const unsigned char Robot_1_Alt[]={

 -8, 1, 0x07,3,
  0, 1, 0x09,3,
  8, 1, 0xFF,3,
 0x80
};
const unsigned char Robot_2_Alt[]={

 -8, 1, 0x0B,3,
  0, 1, 0x0D,3,
  8, 1, 0xFF,3,
 0x80
};

const unsigned char Robot_Jump_1_Alt[]={

 -8, 1, 0x11,3,
  0, 1, 0x13,3,
  8, 1, 0xFF,3,
 0x80
};
const unsigned char * const ROBOT[]={Robot_0, Robot_0, Robot_0, Robot_0, Robot_0, Robot_1, Robot_1, Robot_1, Robot_1, Robot_1, Robot_2, Robot_2, Robot_2, Robot_2, Robot_2, Robot_3, Robot_3, Robot_3, Robot_3, Robot_3,Robot_Jump_1,Robot_Jump_1,Robot_Jump_1,Robot_Jump_1,Robot_Jump_1};
const unsigned char * const ROBOT_ALT[]={Robot_0_Alt, Robot_0_Alt, Robot_0_Alt, Robot_0_Alt, Robot_0_Alt, Robot_1_Alt, Robot_1_Alt, Robot_1_Alt, Robot_1_Alt, Robot_1_Alt, Robot_2_Alt, Robot_2_Alt, Robot_2_Alt, Robot_2_Alt, Robot_2_Alt, Robot_0_Alt, Robot_0_Alt, Robot_0_Alt, Robot_0_Alt, Robot_0_Alt, Robot_Jump_1_Alt, Robot_Jump_1_Alt, Robot_Jump_1_Alt, Robot_Jump_1_Alt, Robot_Jump_1_Alt};
const unsigned char * const ROBOT_JUMP[]={Robot_Jump_1, Robot_Jump_1, Robot_Jump_1, Robot_Jump_1, Robot_Jump_1};




const unsigned char Mini_Robot_0[]={

 -4, -4, 0x37,3,
 0x80
};

const unsigned char Mini_Robot_1[]={

 -4, -4, 0x39,3,
 0x80
};

const unsigned char Mini_Robot_2[]={

 -4, -4, 0x3B,3,
 0x80
};

const unsigned char Mini_Robot_Jump_1[]={

 -4, -4, 0x39,3,
 0x80
};

const unsigned char * const MINI_ROBOT[]={Mini_Robot_0, Mini_Robot_0, Mini_Robot_0, Mini_Robot_0, Mini_Robot_0, Mini_Robot_1, Mini_Robot_1, Mini_Robot_1, Mini_Robot_1, Mini_Robot_1, Mini_Robot_0, Mini_Robot_0, Mini_Robot_0, Mini_Robot_0, Mini_Robot_0, Mini_Robot_2, Mini_Robot_2, Mini_Robot_2, Mini_Robot_2, Mini_Robot_2};
const unsigned char * const MINI_ROBOT_JUMP[]={Mini_Robot_Jump_1, Mini_Robot_Jump_1, Mini_Robot_Jump_1, Mini_Robot_Jump_1, Mini_Robot_Jump_1};

const unsigned char Mini_Robot_ALT_0[]={

 -4, -4, 0x37,3,
 0x80
};

const unsigned char Mini_Robot_ALT_1[]={

 -4, -4, 0x39,3,
 0x80
};

const unsigned char Mini_Robot_ALT_2[]={

 -4, -4, 0x3B,3,
 0x80
};

const unsigned char Mini_Robot_Jump_ALT_1[]={

 -4, -4, 0x39,3,
 0x80
};

const unsigned char * const MINI_ROBOT_ALT[]={Mini_Robot_ALT_0, Mini_Robot_ALT_0, Mini_Robot_ALT_0, Mini_Robot_ALT_0, Mini_Robot_ALT_0, Mini_Robot_ALT_1, Mini_Robot_ALT_1, Mini_Robot_ALT_1, Mini_Robot_ALT_1, Mini_Robot_ALT_1, Mini_Robot_ALT_0, Mini_Robot_ALT_0, Mini_Robot_ALT_0, Mini_Robot_ALT_0, Mini_Robot_ALT_0, Mini_Robot_ALT_2, Mini_Robot_ALT_2, Mini_Robot_ALT_2, Mini_Robot_ALT_2, Mini_Robot_ALT_2};
const unsigned char * const MINI_ROBOT_JUMP_ALT[]={Mini_Robot_Jump_ALT_1, Mini_Robot_Jump_ALT_1, Mini_Robot_Jump_ALT_1, Mini_Robot_Jump_ALT_1, Mini_Robot_Jump_ALT_1};


const unsigned char Robot2_0[]={

 -12, 1, 0x01,1,
  -4, 1, 0x03,1,
   4, 1, 0x05,1,
 0x80
};

const unsigned char Robot2_1[]={

 -12, 1, 0xFF,1,
  -4, 1, 0x07,1,
   4, 1, 0x09,1,
 0x80
};

const unsigned char Robot2_2[]={

 -12, 1, 0x01,1,
  -4, 1, 0x0B,1,
   4, 1, 0x05,1,
 0x80
};
const unsigned char Robot2_3[]={

 -12, 1, 0xFF,1,
  -4, 1, 0x0D,1,
   4, 1, 0x09,1,
 0x80
};

const unsigned char Robot_Jump2_1[]={

 -12, 1, 0xFF,1|0x80,
  -4, 1, 0x0F,1,
   4, 1, 0x11,1,
 0x80
};

const unsigned char Robot_0_Alt2[]={

 -8, 1, 0x01,1,
  0, 1, 0x03,1,
  8, 1, 0xFF,1,
 0x80
};
const unsigned char Robot_1_Alt2[]={

 -8, 1, 0x07,1,
  0, 1, 0x09,1,
  8, 1, 0xFF,1,
 0x80
};
const unsigned char Robot_2_Alt2[]={

 -8, 1, 0x0B,1,
  0, 1, 0x0D,1,
  8, 1, 0xFF,1,
 0x80
};

const unsigned char Robot_Jump_1_Alt2[]={

 -8, 1, 0x11,1,
  0, 1, 0x13,1,
  8, 1, 0xFF,1,
 0x80
};

const unsigned char * const ROBOT2[]={Robot2_0, Robot2_0, Robot2_0, Robot2_0, Robot2_0, Robot2_1, Robot2_1, Robot2_1, Robot2_1, Robot2_1, Robot2_2, Robot2_2, Robot2_2, Robot2_2, Robot2_2, Robot2_3, Robot2_3, Robot2_3, Robot2_3, Robot2_3, Robot_Jump2_1, Robot_Jump2_1, Robot_Jump2_1, Robot_Jump2_1, Robot_Jump2_1};
const unsigned char * const ROBOT_ALT2[]={Robot_0_Alt2, Robot_0_Alt2, Robot_0_Alt2, Robot_0_Alt2, Robot_0_Alt2, Robot_1_Alt2, Robot_1_Alt2, Robot_1_Alt2, Robot_1_Alt2, Robot_1_Alt2, Robot_0_Alt2, Robot_0_Alt2, Robot_0_Alt2, Robot_0_Alt2, Robot_0_Alt2, Robot_2_Alt2, Robot_2_Alt2, Robot_2_Alt2, Robot_2_Alt2, Robot_2_Alt2, Robot_Jump_1_Alt2, Robot_Jump_1_Alt2, Robot_Jump_1_Alt2, Robot_Jump_1_Alt2, Robot_Jump_1_Alt2};
const unsigned char * const ROBOT_JUMP2[]={Robot_Jump2_1, Robot_Jump2_1, Robot_Jump2_1, Robot_Jump2_1, Robot_Jump2_1};


const unsigned char Mini_Robot2_0[]={

 -4, -4, 0x37,1,
 0x80
};

const unsigned char Mini_Robot2_1[]={

 -4, -4, 0x39,1,
 0x80
};

const unsigned char Mini_Robot2_2[]={

 -4, -4, 0x3B,1,
 0x80
};

const unsigned char Mini_Robot_Jump2_1[]={

 -4, -4, 0x39,1,
 0x80
};


const unsigned char * const MINI_ROBOT2[]={Mini_Robot2_0, Mini_Robot2_0, Mini_Robot2_0, Mini_Robot2_0, Mini_Robot2_0, Mini_Robot2_1, Mini_Robot2_1, Mini_Robot2_1, Mini_Robot2_1, Mini_Robot2_1, Mini_Robot2_0, Mini_Robot2_0, Mini_Robot2_0, Mini_Robot2_0, Mini_Robot2_0, Mini_Robot2_2, Mini_Robot2_2, Mini_Robot2_2, Mini_Robot2_2, Mini_Robot2_2};

const unsigned char * const MINI_ROBOT_JUMP2[]={Mini_Robot_Jump2_1, Mini_Robot_Jump2_1, Mini_Robot_Jump2_1, Mini_Robot_Jump2_1, Mini_Robot_Jump2_1};
#line 1386 "SAUCE/defines/sprites.h"
const unsigned char Spider_0[]={

 -12, 0, 0x21,3,
  -4, 0, 0x23,3,
   4, 0, 0x25,3,
 0x80
};

const unsigned char Spider_1[]={

 -12, 0, 0x27,3,
  -4, 0, 0x29,3,
   4, 0, 0x2B,3,
 0x80
};

const unsigned char Spider_2[]={

 -12, 0, 0x2D,3,
  -4, 0, 0x2F,3,
   4, 0, 0x31,3,
 0x80
};
const unsigned char Spider_3[]={

 -12, 0, 0xFF,3,
  -4, 0, 0x33,3,
   4, 0, 0x35,3,
 0x80
};
const unsigned char Spider_Jump[]={

 -12, 0, 0xFF,3,
  -4, 0, 0x13,3,
   4, 0, 0x15,3,
 0x80
};


const unsigned char Spider_0_Alt[]={

 -8, 0, 0x23,3,
  0, 0, 0x25,3,
  8, 0, 0xFF,3,
 0x80
};

const unsigned char Spider_1_Alt[]={

 -8, 0, 0x29,3,
  0, 0, 0x2B,3,
  8, 0, 0xFF,3,
 0x80
};

const unsigned char Spider_2_Alt[]={

 -8, 0, 0x2F,3,
  0, 0, 0x31,3,
  8, 0, 0xFF,3,
 0x80
};
const unsigned char Spider_3_Alt[]={

 -8, 0, 0x33,3,
  0, 0, 0x35,3,
  8, 0, 0xFF,3,
 0x80
};

const unsigned char * const SPIDER[]={Spider_0, Spider_0, Spider_0, Spider_0, Spider_1, Spider_1, Spider_1, Spider_1, Spider_2, Spider_2, Spider_2, Spider_2, Spider_3, Spider_3, Spider_3, Spider_3, Spider_Jump, Spider_Jump, Spider_Jump, Spider_Jump};
const unsigned char * const SPIDER_ALT[]={Spider_0_Alt, Spider_0_Alt, Spider_0_Alt, Spider_0_Alt, Spider_1_Alt, Spider_1_Alt, Spider_1_Alt, Spider_1_Alt, Spider_2_Alt, Spider_2_Alt, Spider_2_Alt, Spider_2_Alt, Spider_3_Alt, Spider_3_Alt, Spider_3_Alt, Spider_3_Alt, Spider_0_Alt, Spider_0_Alt, Spider_0_Alt, Spider_0_Alt};

const unsigned char * const SPIDER_JUMP[]={Spider_3};



const unsigned char Spider_0_Alt2[]={

 -8, 0, 0x23,1,
  0, 0, 0x25,1,
  8, 0, 0xFF,1,
 0x80
};

const unsigned char Spider_1_Alt2[]={

 -8, 0, 0x29,1,
  0, 0, 0x2B,1,
  8, 0, 0xFF,1,
 0x80
};

const unsigned char Spider_2_Alt2[]={

 -8, 0, 0x2F,1,
  0, 0, 0x31,1,
  8, 0, 0xFF,1,
 0x80
};
const unsigned char Spider_3_Alt2[]={

 -8, 0, 0x33,1,
  0, 0, 0x35,1,
  8, 0, 0xFF,1,
 0x80
};

const unsigned char * const SPIDER_ALT2[]={Spider_0_Alt2, Spider_0_Alt2, Spider_0_Alt2, Spider_0_Alt2, Spider_1_Alt2, Spider_1_Alt2, Spider_1_Alt2, Spider_1_Alt2, Spider_2_Alt2, Spider_2_Alt2, Spider_2_Alt2, Spider_2_Alt2, Spider_3_Alt2, Spider_3_Alt2, Spider_3_Alt2, Spider_3_Alt2, Spider_0_Alt2, Spider_0_Alt2, Spider_0_Alt2, Spider_0_Alt2};

const unsigned char Spider2_0[]={

 -12, 0, 0x21,1,
  -4, 0, 0x23,1,
   4, 0, 0x25,1,
 0x80
};

const unsigned char Spider2_1[]={

 -12, 0, 0x27,1,
  -4, 0, 0x29,1,
   4, 0, 0x2B,1,
 0x80
};

const unsigned char Spider2_2[]={

 -12, 0, 0x2D,1,
  -4, 0, 0x2F,1,
   4, 0, 0x31,1,
 0x80
};
const unsigned char Spider2_3[]={

 -12, 0, 0xFF,1,
  -4, 0, 0x33,1,
   4, 0, 0x35,1,
 0x80
};

const unsigned char Spider2_Jump[]={

 -12, 0, 0xFF,1,
  -4, 0, 0x13,1,
   4, 0, 0x15,1,
 0x80
};


const unsigned char * const SPIDER2[]={Spider2_0, Spider2_0, Spider2_0, Spider2_0, Spider2_1, Spider2_1, Spider2_1, Spider2_1, Spider2_2, Spider2_2, Spider2_2, Spider2_2, Spider2_3, Spider2_3, Spider2_3, Spider2_3, Spider2_Jump, Spider2_Jump, Spider2_Jump, Spider2_Jump};

const unsigned char * const SPIDER_JUMP2[]={Spider2_3};



const unsigned char Mini_Spider_0[]={

  -4, -4,0x21,3,
 0x80
};

const unsigned char Mini_Spider_1[]={

  -4, -4,0x23,3,
 0x80
};

const unsigned char Mini_Spider_2[]={

  -4, -4,0x25,3,
 0x80
};

const unsigned char Mini_Spider_3[]={

  -4, -4,0x27,3,
 0x80
};


const unsigned char Mini_Spider_0_ALT[]={

  -4, -4,0x21,3,
 0x80
};

const unsigned char Mini_Spider_1_ALT[]={

  -4, -4,0x23,3,
 0x80
};

const unsigned char Mini_Spider_2_ALT[]={

  -4, -4,0x25,3,
 0x80
};

const unsigned char Mini_Spider_3_ALT[]={

  -4, -4,0x27,3,
 0x80
};
const unsigned char * const MINI_SPIDER[]={Mini_Spider_0, Mini_Spider_0, Mini_Spider_0, Mini_Spider_0, Mini_Spider_1, Mini_Spider_1, Mini_Spider_1, Mini_Spider_1, Mini_Spider_0, Mini_Spider_0, Mini_Spider_0, Mini_Spider_0, Mini_Spider_2, Mini_Spider_2, Mini_Spider_2, Mini_Spider_2, Mini_Spider_3, Mini_Spider_3, Mini_Spider_3, Mini_Spider_3};
const unsigned char * const MINI_SPIDER_ALT[]={Mini_Spider_0_ALT, Mini_Spider_0_ALT, Mini_Spider_0_ALT, Mini_Spider_0_ALT, Mini_Spider_1_ALT, Mini_Spider_1_ALT, Mini_Spider_1_ALT, Mini_Spider_1_ALT, Mini_Spider_2_ALT, Mini_Spider_2_ALT, Mini_Spider_2_ALT, Mini_Spider_2_ALT, Mini_Spider_3_ALT, Mini_Spider_3_ALT, Mini_Spider_3_ALT, Mini_Spider_3_ALT, Mini_Spider_0_ALT, Mini_Spider_0_ALT, Mini_Spider_0_ALT, Mini_Spider_0_ALT};
const unsigned char * const MINI_SPIDER_JUMP[]={Mini_Spider_3};

const unsigned char Mini_Spider2_0[]={

  -4, -4,0x21,1,
 0x80
};

const unsigned char Mini_Spider2_1[]={

  -4, -4,0x23,1,
 0x80
};

const unsigned char Mini_Spider2_2[]={

  -4, -4,0x25,1,
 0x80
};

const unsigned char Mini_Spider2_3[]={

  -4, -4,0x27,1,
 0x80
};

const unsigned char * const MINI_SPIDER2[]={Mini_Spider2_0, Mini_Spider2_0, Mini_Spider2_0, Mini_Spider2_0, Mini_Spider2_1, Mini_Spider2_1, Mini_Spider2_1, Mini_Spider2_1, Mini_Spider2_0, Mini_Spider2_0, Mini_Spider2_0, Mini_Spider2_0, Mini_Spider2_2, Mini_Spider2_2, Mini_Spider2_2, Mini_Spider2_2, Mini_Spider2_3, Mini_Spider2_3, Mini_Spider2_3, Mini_Spider2_3};

const unsigned char * const MINI_SPIDER_JUMP2[]={Mini_Spider2_3};

_Pragma ("rodata-name (pop)")
_Pragma ("rodata-name (push, \"XCD_BANK_04\")")


const unsigned char Speed_SLOW_Portal[]={
   0, 0,0xA1,0|0x80,
   8, 0,0xA1,0|0x40,
   0, 13,0xA1,0,
   8, 13,0xA1,0|0x40|0x80,
 0x80
};
const unsigned char Speed_05_Portal[]={
   0, 0,0xA1,1|0x80,
   8, 0,0xA1,1|0x40,
   0, 13,0xA1,1,
   8, 13,0xA1,1|0x40|0x80,
 0x80
};

const unsigned char Speed_10_Portal[]={
   0, 0,0xA1,0,
   8, 0,0xA1,0|0x40|0x80,
   0, 13,0xA1,0|0x80,
   8, 13,0xA1,0|0x40,
 0x80
};
const unsigned char Speed_20_Portal[]={
   0, 0,0xA9,0,
   5, 0,0xA9,0|0x40|0x80,
   6, 0,0xA9,0,
   11, 0,0xA9,0|0x40|0x80,
   0, 13,0xA9,0|0x80,
   5, 13,0xA9,0|0x40,
   6, 13,0xA9,0|0x80,
   11, 13,0xA9,0|0x40,
 0x80
};
const unsigned char Speed_30_Portal[]={
   0, 0,0xA9,1,
   8, 0,0xAB,1,
   6, 0,0xA9,1,
   14, 0,0xAB,1,
   12, 0,0xA9,1,
   20, 0,0xAB,1,
   0, 13,0xA9,1|0x80,
   8, 13,0xAB,1|0x80,
   6, 13,0xA9,1|0x80,
   14, 13,0xAB,1|0x80,
   12, 13,0xA9,1|0x80,
   20, 13,0xAB,1|0x80,
 0x80
};

const unsigned char Speed_40_Portal[]={
   0, 0,0xAD,2,
   5, 0,0xAD,2,
   10, 0,0xAD,2,
   15, 0,0xAD,2,
   0, 13,0xAD,2|0x80,
   5, 13,0xAD,2|0x80,
   10, 13,0xAD,2|0x80,
   15, 13,0xAD,2|0x80,
 0x80
};

const unsigned char Mini_Portal[]={
   0, 0,0x81,1,
   8, 0,0x83,1,
   -8, 16,0x85,1,
   0, 16,0x87,1,
   8, 16,0x89,1,
   0, 32,0x81,1|0x80,
   8, 32,0x83,1|0x80,
 0x80
};

const unsigned char Growth_Portal[]={
   8, 0,0x81,0,
   16, 0,0x83,0,
   0, 16,0x85,0,
   8, 16,0x87,0,
   16, 16,0x89,0,
   8, 32,0x81,0|0x80,
   16, 32,0x83,0|0x80,
 0x80
};

const unsigned char Gravity_2x_Portal[]={
   8, 0,0xA3,1|0x40,
   0, 0,0xA7,1|0x40,

   8, 16,0x97,1|0x40,
   0, 16,0xB7,1|0x40,
   8, 32,0xA3,1|0x80|0x40,
   0, 32,0xA7,1|0x80|0x40,
 0x80
};

const unsigned char Gravity_12_Portal[]={
   0, 0,0xA3,3,
   8, 0,0xA7,3,
   -8, 16,0xFF,3,
   0, 16,0x97,3,
   8, 16,0xB7,3,
   0, 32,0xA3,3|0x80,
   8, 32,0xA7,3|0x80,
 0x80
};
const unsigned char Gravity_1x_Portal[]={
   8, 0,0xA3,3|0x40,
   0, 0,0xA7,3|0x40,

   8, 16,0x97,3|0x40,
   0, 16,0xB7,3|0x40,
   8, 32,0xA3,3|0x80|0x40,
   0, 32,0xA7,3|0x80|0x40,
 0x80
};

const unsigned char Gravity_23_Portal[]={
   0, 0,0xA3,0,
   8, 0,0xA7,0,
   -8, 16,0xFF,0,
   0, 16,0x97,0,
   8, 16,0xB7,0,
   0, 32,0xA3,0|0x80,
   8, 32,0xA7,0|0x80,
 0x80
};

const unsigned char Gravity_13_Portal[]={
   0, 0,0xA3,1,
   8, 0,0xA7,1,
   -8, 16,0xFF,1,
   0, 16,0x97,1,
   8, 16,0xB7,1,
   0, 32,0xA3,1|0x80,
   8, 32,0xA7,1|0x80,
 0x80
};

const unsigned char Teleport_Portal_Enter[]={

   0, 0,0xD5,0,
   0, 16,0xDB,0,
   0, 32,0xD5,0|0x80,
   8, 0,0xD7,0,

   8, 16,0xDD,0,
   8, 32,0xD7,0|0x80,
  16, 0,0xD9,0,
  16, 16,0xDF,0,

  16, 32,0xD9,0|0x80,
 0x80
};
const unsigned char Teleport_Portal_Exit[]={

  0, 0,0xD9,1|0x40,
  0, 16,0xDF,1|0x40,

  0, 32,0xD9,1|0x40|0x80,
   8, 0,0xD7,1|0x40,

   8, 16,0xDD,1|0x40,
   8, 32,0xD7,1|0x40|0x80,
   16, 0,0xD5,1|0x40,
   16, 16,0xDB,1|0x40,
   16, 32,0xD5,1|0x40|0x80,
 0x80
};

const unsigned char Portal_Gamemode_Cube[]={

   0, 0,0x41,0,
   0, 16,0x47,0,
   0, 32,0x41,0|0x80,
   8, 0,0x43,0,

   8, 16,0x49,0,
   8, 32,0x43,0|0x80,
  16, 0,0x45,0,
  16, 16,0x4B,0,

  16, 32,0x45,0|0x80,
 0x80
};
const unsigned char Portal_Gamemode_Ship[]={

   0, 0,0x41,1,
   0, 16,0x47,1,
   0, 32,0x41,1|0x80,
   8, 0,0x43,1,

   8, 16,0x49,1,
   8, 32,0x43,1|0x80,
  16, 0,0x45,1,
  16, 16,0x4B,1,

  16, 32,0x45,1|0x80,
 0x80
};
const unsigned char Portal_Gamemode_Ball[]={

   0, 0,0x41,2,
   0, 16,0x47,2,
   0, 32,0x41,2|0x80,
   8, 0,0x43,2,

   8, 16,0x49,2,
   8, 32,0x43,2|0x80,
  16, 0,0x45,2,
  16, 16,0x4B,2,

  16, 32,0x45,2|0x80,
 0x80
};
const unsigned char Portal_Gamemode_UFO[]={

   0, 0,0x61,1,
   0, 16,0x67,1,
   0, 32,0x61,1|0x80,
   8, 0,0x63,1,

   8, 16,0x69,1,
   8, 32,0x63,1|0x80,
  16, 0,0x65,1,
  16, 16,0x6B,1,

  16, 32,0x65,1|0x80,
 0x80
};
const unsigned char Portal_Gamemode_Robot[]={

   0, 0,0x61,2,
   0, 16,0x67,2,
   0, 32,0x61,2|0x80,
   8, 0,0x63,2,

   8, 16,0x69,2,
   8, 32,0x63,2|0x80,
  16, 0,0x65,2,
  16, 16,0x6B,2,

  16, 32,0x65,2|0x80,
 0x80
};
const unsigned char Portal_Gamemode_Spider[]={

   0, 0,0x41,1,
   0, 16,0x47,1,
   0, 32,0x41,1|0x80,
   8, 0,0x43,1,

   8, 16,0x9C,1,
   8, 32,0x43,1|0x80,
  16, 0,0x45,1,
  16, 16,0x9E,1,

  16, 32,0x45,1|0x80,
 0x80
};
const unsigned char Portal_Gamemode_Ninja[]={

   0, 0,0x41,0,
   0, 16,0x47,0,
   0, 32,0x41,0|0x80,
   8, 0,0x43,0,

   8, 16,0x9C,0,
   8, 32,0x43,0|0x80,
  16, 0,0x45,0,
  16, 16,0x9E,0,

  16, 32,0x45,0|0x80,
 0x80
};

const unsigned char Portal_Gamemode_Snake[]={

   0, 0,0x41,2,
   0, 16,0x47,2,
   0, 32,0x41,2|0x80,
   8, 0,0x43,2,

   8, 16,0x9C,2,
   8, 32,0x43,2|0x80,
  16, 0,0x45,2,
  16, 16,0x9E,2,

  16, 32,0x45,2|0x80,
 0x80
};
const unsigned char Portal_Gamemode_Swing[]={

   0, 0,0x61,1,
   0, 16,0x67,1,
   0, 32,0x61,1|0x80,
   8, 0,0x63,1,

   8, 16,0x8C,1,
   8, 32,0x63,1|0x80,
  16, 0,0x65,1,
  16, 16,0x8E,1,

  16, 32,0x65,1|0x80,
 0x80
};
const unsigned char Portal_Gamemode_Football[]={

   0, 0,0x61,2,
   0, 16,0x67,2,
   0, 32,0x61,2|0x80,
   8, 0,0x63,2,

   8, 16,0x8C,2,
   8, 32,0x63,2|0x80,
  16, 0,0x65,2,
  16, 16,0x8E,2,

  16, 32,0x65,2|0x80,
 0x80
};
const unsigned char Portal_Gamemode_Pogo[]={

   0, 0,0x61,0,
   0, 16,0x67,0,
   0, 32,0x61,0|0x80,
   8, 0,0x63,0,

   8, 16,0x8C,0,
   8, 32,0x63,0|0x80,
  16, 0,0x65,0,
  16, 16,0x8E,0,

  16, 32,0x65,0|0x80,
 0x80
};
const unsigned char Portal_Gamemode_Wave[]={

   0, 0,0x61,0,
   0, 16,0x67,0,
   0, 32,0x61,0|0x80,
   8, 0,0x63,0,

   8, 16,0x69,0,
   8, 32,0x63,0|0x80,
  16, 0,0x65,0,
  16, 16,0x6B,0,

  16, 32,0x65,0|0x80,
 0x80
};
const unsigned char Portal_Gravity_Down[]={
   0, 0,0x6D,0,
   0, 16,0x73,0,
   0, 32,0x6D,0|0x80,
   8, 0,0x6F,0,

   8, 16,0x75,0,
   8, 32,0x6F,0|0x80,
  16, 0,0x71,0,
  16, 16,0x77,0,

  16, 32,0x71,0|0x80,
 0x80
};
const unsigned char Portal_Gravity_Up[]={

   0, 0,0x6D,1,
   0, 16,0x73,1,
   0, 32,0x6D,1|0x80,
   8, 0,0x6F,1,

   8, 16,0x75,1,
   8, 32,0x6F,1|0x80,
  16, 0,0x71,1,
  16, 16,0x77,1,

  16, 32,0x71,1|0x80,
 0x80
};


const unsigned char Portal_Dual[]={

   0, 0,0x8B,1,
   8, 0,0x8D,1,
   16, 0,0x8F,1,
   0, 16,0x91,1,

  8, 16,0x93,1,
   16, 16,0x95,1,
  0, 32,0x8B,1|0x80,
  8, 32,0x8D,1|0x80,

  16, 32,0x8F,1|0x80,
 0x80
};
const unsigned char Portal_Single[]={

   0, 0,0x8B,0,
   8, 0,0x8D,0,
   16, 0,0x8F,0,
   0, 16,0x91,0,

   8, 16,0x93,0,
   16, 16,0x95,0,
   0, 32,0x8B,0|0x80,
   8, 32,0x8D,0|0x80,

  16, 32,0x8F,0|0x80,
 0x80
};

const unsigned char Teleport_Portal_Horizontal_Upwards_Enter[]={


   0, 0,0xF5,0|0x40,
   8, 0,0xE1,0|0x40,
   16, 0,0xF1,0|0x40,
   24, 0,0xF1,0,

 32, 0,0xE1,0,
 40, 0,0xF5,0,

 8,8,0xE5,0|0x40,
 16,8,0xE3,0|0x40,
 24,8,0xE3,0,
 32,8,0xE5,0,


 0x80
};

const unsigned char Teleport_Portal_Horizontal_Upwards_Exit[]={


   0, 0,0xF5,1|0x40,
   8, 0,0xE1,1|0x40,
   16, 0,0xF1,1|0x40,
   24, 0,0xF1,1,

 32, 0,0xE1,1,
 40,0,0xF5,1,

 8,8,0xE5,1|0x40,
 16,8,0xE3,1|0x40,
 24,8,0xE3,1,
 32,8,0xE5,1,


 0x80
};

const unsigned char Teleport_Portal_Horizontal_Downwards_Enter[]={


   0, 0,0xF5,0|0x40|0x80,
   8, 0,0xE1,0|0x40|0x80,
   16, 0,0xF1,0|0x40|0x80,
   24, 0,0xF1,0|0x80,

 32, 0,0xE1,0|0x80,
 40, 0,0xF5,0|0x80,

 8,-8,0xE5,0|0x40|0x80,
 16,-8,0xE3,0|0x40|0x80,
 24,-8,0xE3,0|0x80,
 32,-8,0xE5,0|0x80,


 0x80
};
const unsigned char Teleport_Portal_Horizontal_Downwards_Exit[]={


   0, 0,0xF5,1|0x40|0x80,
   8, 0,0xE1,1|0x40|0x80,
   16, 0,0xF1,1|0x40|0x80,
   24, 0,0xF1,1|0x80,

 32, 0,0xE1,1|0x80,
 40, 0,0xF5,1|0x80,

 8,-8,0xE5,1|0x40|0x80,
 16,-8,0xE3,1|0x40|0x80,
 24,-8,0xE3,1|0x80,
 32,-8,0xE5,1|0x80,


 0x80
};

const unsigned char Portal_Gravity_Down_Horizontal_Downwards[]={


   0, 0,0x4D,0,
   8, 0,0x4F,0,
   16, 0,0x51,0,
   24, 0,0x51,0|0x40,

   32, 0,0x4F,0|0x40,
  40, 0,0x4D,0|0x40,
     8,-16,0x53,0,
 16,-16,0x55,0,
 24,-16,0x55,0|0x40,
 32,-16,0x53,0|0x40,

 0x80
};
const unsigned char Portal_Gravity_Down_Horizontal_Upwards[]={


   0, 0,0x4D,0|0x80,
   8, 0,0x4F,0|0x80,
   16, 0,0x51,0|0x80,
   24, 0,0x51,0|0x80|0x40,

   32, 0,0x4F,0|0x80|0x40,
  40, 0,0x4D,0|0x80|0x40,

 8,16,0x53,0|0x80,
 16,16,0x55,0|0x80,
 24,16,0x55,0|0x80|0x40,
 32,16,0x53,0|0x80|0x40,
 0x80
};
const unsigned char Portal_Gravity_Up_Horizontal_Downwards[]={


   0, 0,0x4D,1,
   8, 0,0x4F,1,
   16, 0,0x51,1,
   24, 0,0x51,1|0x40,

   32, 0,0x4F,1|0x40,
  40, 0,0x4D,1|0x40,
     8,-16,0x53,1,
 16,-16,0x55,1,
 24,-16,0x55,1|0x40,
 32,-16,0x53,1|0x40,

 0x80
};
const unsigned char Portal_Gravity_Up_Horizontal_Upwards[]={

 8,16,0x53,0|0x80,
 16,16,0x55,0|0x80,
 24,16,0x55,0|0x80|0x40,
 32,16,0x53,0|0x80|0x40,

   0, 0,0x4D,1|0x80,
   8, 0,0x4F,1|0x80,
   16, 0,0x51,1|0x80,
   24, 0,0x51,1|0x80|0x40,

   32, 0,0x4F,1|0x80|0x40,
  40, 0,0x4D,1|0x80|0x40,

 0x80
};






const unsigned char Dash_Orb[]={

   0, 0,0xD1,0,
   8, 0,0xD3,0,
 0x80
};

const unsigned char Black_Orb[]={

   0, 0,0xA5,0,
   8, 0,0xA5,0|0x40,
 0x80
};

const unsigned char Dash_Orb_Upwards[]={

   0, 0,0xCB,0|0x40,
   8, 0,0xCB,0,
 0x80
};
const unsigned char Dash_Gravity_Orb_Upwards[]={

   0, 0,0xCB,1|0x40,
   8, 0,0xCB,1,
 0x80
};

const unsigned char Dash_Orb_Downwards[]={

   0, 0,0xCB,0|0x40|0x80,
   8, 0,0xCB,0|0x80,
 0x80
};
const unsigned char Dash_Gravity_Orb_Downwards[]={

   0, 0,0xCB,1|0x40|0x80,
   8, 0,0xCB,1|0x80,
 0x80
};

const unsigned char Dash_Gravity_Orb[]={

   0, 0,0xD1,1,
   8, 0,0xD3,1,
 0x80
};

const unsigned char Dash_Orb_45Deg_UP[]={

   0, 0,0xCD,0,
   8, 0,0xCF,0,
 0x80
};

const unsigned char Dash_Gravity_Orb_45Deg_UP[]={

   0, 0,0xCD,1,
   8, 0,0xCF,1,
 0x80
};

const unsigned char Spider_Orb_UP[]={

   0, 0,0xEF,1,
   8, 0,0xEF,1|0x40,
 0x80
};

const unsigned char Spider_Orb_DOWN[]={

   0, 0,0xEF,1|0x80,
   8, 0,0xEF,1|0x40|0x80,
 0x80
};
const unsigned char Dash_Orb_45Deg_DOWN[]={

   0, 0,0xCD,0|0x80,
   8, 0,0xCF,0|0x80,
 0x80
};

const unsigned char Dash_Gravity_Orb_45Deg_DOWN[]={

   0, 0,0xCD,1|0x80,
   8, 0,0xCF,1|0x80,
 0x80
};

const unsigned char Yellow_Jump_Orb[]={

   0, 0,0x99,1,
   8, 0,0x9B,1|0x40,
 0x80
};

const unsigned char Yellow_Jump_Orb2[]={

   0, 0,0x9B,1,
   8, 0,0x9D,1|0x40,
 0x80
};
const unsigned char Yellow_Jump_Orb3[]={

   0, 0,0x9D,1,
   8, 0,0x9F,1|0x40,
 0x80
};
const unsigned char Yellow_Jump_Orb4[]={

   0, 0,0x9F,1,
   8, 0,0x99,1|0x40,
 0x80
};



const unsigned char WHITE_ORB1[]={
   0, 0,0x99,2,
   8, 0,0x9B,2|0x40,
 0x80
};

const unsigned char WHITE_ORB2[]={
   0, 0,0x9B,2,
   8, 0,0x9D,2|0x40,
 0x80
};
const unsigned char WHITE_ORB3[]={
   0, 0,0x9D,2,
   8, 0,0x9F,2|0x40,
 0x80
};
const unsigned char WHITE_ORB4[]={
   0, 0,0x9F,2,
   8, 0,0x99,2|0x40,
 0x80
};

const unsigned char Blue_Jump_Orb[]={

   0, 0,0x99,0,
   8, 0,0x9B,0|0x40,
 0x80
};

const unsigned char Blue_Jump_Orb2[]={

   0, 0,0x9B,0,
   8, 0,0x9D,0|0x40,
 0x80
};
const unsigned char Blue_Jump_Orb3[]={

   0, 0,0x9D,0,
   8, 0,0x9F,0|0x40,
 0x80
};
const unsigned char Blue_Jump_Orb4[]={

   0, 0,0x9F,0,
   8, 0,0x99,0|0x40,
 0x80
};
const unsigned char Pink_Jump_Orb[]={

   0, 0,0xB9,1,
   8, 0,0xBB,1|0x40,
 0x80
};
const unsigned char Pink_Jump_Orb2[]={

   0, 0,0xBB,1,
   8, 0,0xBD,1|0x40,
 0x80
};
const unsigned char Pink_Jump_Orb3[]={

   0, 0,0xBD,1,
   8, 0,0xBF,1|0x40,
 0x80
};
const unsigned char Pink_Jump_Orb4[]={

   0, 0,0xBF,1,
   8, 0,0xB9,1|0x40,
 0x80
};
const unsigned char Green_Jump_Orb[]={

   0, 0,0xB9,0,
   8, 0,0xBB,0|0x40,
 0x80
};
const unsigned char Green_Jump_Orb2[]={

   0, 0,0xBB,0,
   8, 0,0xBD,0|0x40,
 0x80
};
const unsigned char Green_Jump_Orb3[]={

   0, 0,0xBD,0,
   8, 0,0xBF,0|0x40,
 0x80
};
const unsigned char Green_Jump_Orb4[]={

   0, 0,0xBF,0,
   8, 0,0xB9,0|0x40,
 0x80
};

const unsigned char Red_Jump_Orb[]={

   0, 0,0xB9,2,
   8, 0,0xBB,2|0x40,
 0x80
};
const unsigned char Red_Jump_Orb2[]={

   0, 0,0xBB,2,
   8, 0,0xBD,2|0x40,
 0x80
};
const unsigned char Red_Jump_Orb3[]={

   0, 0,0xBD,2,
   8, 0,0xBF,2|0x40,
 0x80
};
const unsigned char Red_Jump_Orb4[]={

   0, 0,0xBF,2,
   8, 0,0xB9,2|0x40,
 0x80
};

const unsigned char Yellow_Jump_Pad[]={

   0,-8,0x79,1,
   8,-8,0x7B,1|0x40,
 0x80
};
const unsigned char Yellow_Jump_Pad2[]={

   0,-8,0x7B,1,
   8,-8,0xFB,1|0x40,
 0x80
};
const unsigned char Yellow_Jump_Pad3[]={

   0,-8,0xFB,1,
   8,-8,0xFD,1|0x40,
 0x80
};
const unsigned char Yellow_Jump_Pad4[]={

   0,-8,0xFD,1,
   8,-8,0x79,1|0x40,
 0x80
};

const unsigned char Yellow_Jump_Pad_U[]={

   0,-0,0x79,1|0x80,
   8,-0,0x7B,1|0x40|0x80,
 0x80
};
const unsigned char Yellow_Jump_Pad_U2[]={

   0,-0,0x7B,1|0x80,
   8,-0,0xFB,1|0x40|0x80,
 0x80
};
const unsigned char Yellow_Jump_Pad_U3[]={

   0,-0,0xFB,1|0x80,
   8,-0,0xFD,1|0x40|0x80,
 0x80
};
const unsigned char Yellow_Jump_Pad_U4[]={

   0,-0,0xFD,1|0x80,
   8,-0,0x79,1|0x40|0x80,
 0x80
};
const unsigned char Pink_Jump_Pad[]={

   0,-8,0x59,1,
   8,-8,0x5B,1|0x40,
 0x80
};
const unsigned char Pink_Jump_Pad2[]={

   0,-8,0x5B,1,
   8,-8,0x5D,1|0x40,
 0x80
};
const unsigned char Pink_Jump_Pad3[]={

   0,-8,0x5D,1,
   8,-8,0x5F,1|0x40,
 0x80
};
const unsigned char Pink_Jump_Pad4[]={

   0,-8,0x5F,1,
   8,-8,0x59,1|0x40,
 0x80
};
const unsigned char Green_Jump_Pad[]={

   0,8,0x59,0|0x80,
   8,8,0x5B,0|0x40|0x80,
   0,-8,0x59,0,
   8,-8,0x5B,0|0x40,
 0x80
};
const unsigned char Green_Jump_Pad2[]={

   0,8,0x5B,0|0x80,
   8,8,0x5D,0|0x40|0x80,
   0,-8,0x5B,0,
   8,-8,0x5D,0|0x40,
 0x80
};
const unsigned char Green_Jump_Pad3[]={

   0,8,0x5D,0|0x80,
   8,8,0x5F,0|0x40|0x80,
   0,-8,0x5D,0,
   8,-8,0x5F,0|0x40,

 0x80
};
const unsigned char Green_Jump_Pad4[]={

   0,8,0x5F,0|0x80,
   8,8,0x59,0|0x40|0x80,
   0,-8,0x5F,0,
   8,-8,0x59,0|0x40,

 0x80
};
const unsigned char Red_Jump_Pad[]={

   0,-8,0x59,2,
   8,-8,0x5B,2|0x40,
 0x80
};
const unsigned char Red_Jump_Pad2[]={

   0,-8,0x5B,2,
   8,-8,0x5D,2|0x40,
 0x80
};
const unsigned char Red_Jump_Pad3[]={

   0,-8,0x5D,2,
   8,-8,0x5F,2|0x40,
 0x80
};
const unsigned char Red_Jump_Pad4[]={

   0,-8,0x5F,2,
   8,-8,0x59,2|0x40,
 0x80
};

const unsigned char Pink_Jump_Pad_U[]={

   0,-0,0x59,1|0x80,
   8,-0,0x5B,1|0x40|0x80,
 0x80
};
const unsigned char Pink_Jump_Pad_U2[]={

   0,-0,0x5B,1|0x80,
   8,-0,0x5D,1|0x40|0x80,
 0x80
};
const unsigned char Pink_Jump_Pad_U3[]={

   0,-0,0x5D,1|0x80,
   8,-0,0x5F,1|0x40|0x80,
 0x80
};
const unsigned char Pink_Jump_Pad_U4[]={

   0,-0,0x5F,1|0x80,
   8,-0,0x59,1|0x40|0x80,
 0x80
};

const unsigned char Red_Jump_Pad_U[]={

   0,-0,0x59,2|0x80,
   8,-0,0x5B,2|0x40|0x80,
 0x80
};
const unsigned char Red_Jump_Pad_U2[]={

   0,-0,0x5B,2|0x80,
   8,-0,0x5D,2|0x40|0x80,
 0x80
};
const unsigned char Red_Jump_Pad_U3[]={

   0,-0,0x5D,2|0x80,
   8,-0,0x5F,2|0x40|0x80,
 0x80
};
const unsigned char Red_Jump_Pad_U4[]={

   0,-0,0x5F,2|0x80,
   8,-0,0x59,2|0x40|0x80,
 0x80
};

const unsigned char Gravity_Pad[]={

   0,-8,0x79,4,
   8,-8,0x7B,4|0x40,
 0x80
};
const unsigned char Gravity_Pad2[]={

   0,-8,0x7B,4,
   8,-8,0xFB,4|0x40,
 0x80
};
const unsigned char Gravity_Pad3[]={

   0,-8,0xFB,4,
   8,-8,0xFD,4|0x40,
 0x80
};
const unsigned char Gravity_Pad4[]={

   0,-8,0xFD,4,
   8,-8,0x79,4|0x40,
 0x80
};

const unsigned char Gravity_Pad_U[]={

   0, -0,0x79,4|0x80,
   8, -0,0x7B,4|0x40|0x80,
 0x80
};
const unsigned char Gravity_Pad_U2[]={

   0, -0,0x7B,4|0x80,
   8, -0,0xFB,4|0x40|0x80,
 0x80
};
const unsigned char Gravity_Pad_U3[]={

   0, -0,0xFB,4|0x80,
   8, -0,0xFD,4|0x40|0x80,
 0x80
};
const unsigned char Gravity_Pad_U4[]={

   0, -0,0xFD,4|0x80,
   8, -0,0x79,4|0x40|0x80,
 0x80
};

const unsigned char Teleport_Square_Enter[]={

   0, 0,0xEB,0,
   8, 0,0xEB,0|0x40,
 0x80
};

const unsigned char Teleport_Square_Exit[]={

   0, 0,0xEB,1,
   8, 0,0xEB,1|0x40,
 0x80
};
const unsigned char Spider_Pad_Up[]={

   0, -8,0xF3,1,
   8, -8,0xF3,1|0x40,
 0x80
};


const unsigned char Spider_Pad_Down[]={

   0, -0,0xF3,1|0x80,
   8, -0,0xF3,1|0x40|0x80,
 0x80
};


const unsigned char Short_Light[]={

   4, 0,0xCD,3,
 0x80
};


const unsigned char Short_Light_U[]={

   4, 0,0xCD,3|0x80,
 0x80
};


const unsigned char Medium_Light[]={

   4, 0,0xCF,3,
   4, -16,0xCB,3,
 0x80
};


const unsigned char Medium_Light_U[]={

   4, 0,0xCF,3|0x80,
   4, 16,0xCB,3|0x80,
 0x80
};

const unsigned char Long_Light[]={

   4, 0,0xCF,3,
   4, -16,0xC9,3,
 0x80
};


const unsigned char Long_Light_U[]={

   4, 0,0xCF,3|0x80,
   4, 16,0xC9,3|0x80,
 0x80
};

const unsigned char Short_Light_Left[]={
  0, -4,0xF5,3,
  8, -4,0xF1,3,
 0x80
};

const unsigned char Short_Light_Right[]={
  8, -4,0xF5,3|0x40,
  0, -4,0xF1,3|0x40,
 0x80
};


const unsigned char Medium_Light_Left[]={
  0, -4,0xF5,3,
  8, -4,0xF7,3,
  16, -4,0xF1,3,
 0x80
};

const unsigned char Medium_Light_Right[]={
  0, -4,0xF1,3|0x40,
  8, -4,0xF7,3|0x40,
  16, -4,0xF5,3|0x40,
 0x80
};

const unsigned char Long_Light_Left[]={
   4, 8,0xD5,3,
   4, -8,0xD7,3,
 0x80
};

const unsigned char Long_Light_Right[]={
   20, 8,0xCD,3,
 0x80
};

const unsigned char Chain[]={

   4, 0,0xD5,3,
   4, -16,0xD7,3,
 0x80
};

const unsigned char Chain_U[]={

   4, 16,0xD7,3|0x80,
   4, 0,0xD5,3|0x80,
 0x80
};

const unsigned char BG_Spike_Group1[]={

   0, -4,0xD9,3,
   8, -4,0xDB,3,
 0x80
};
const unsigned char BG_Spike_Group2[]={

   0, 4,0xD9,3|0x80,
   8, 4,0xDB,3|0x80,
 0x80
};
const unsigned char BG_Spike_Group3[]={

   0, -4,0xDD,3,
   8, -4,0xDF,3,
 0x80
};
const unsigned char BG_Spike_Group4[]={

   0, 4,0xDD,3|0x80,
   8, 4,0xDF,3|0x80,
 0x80
};


const unsigned char Big_Diamond[]={

   0, 0,0xE1,3,
   8, 0,0xE1,3|0x40,
 0x80
};
const unsigned char Right_Half_Diamond[]={

   8, 0,0xE1,3|0x40,
 0x80
};


const unsigned char Question_Mark[]={

   4, 0,0xE3,3,
 0x80
};
const unsigned char Exclamation_Mark[]={

   4, 0,0xE5,3,
 0x80
};


const unsigned char Star[]={

   0, 0,0xE7,3,
   8, 0,0xE7,3|0x40,
 0x80
};

const unsigned char Big_X[]={

   0, 0,0xED,3,
   8, 0,0xED,3|0x40,
 0x80
};

const unsigned char Diamond_Shifted_Right[]={

   8, 0,0xE1,3,
   16, 0,0xE1,3|0x40,
 0x80
};

const unsigned char Pulsing_Ball[]={

   4, -4,0xF9,3,
 0x80
};

const unsigned char Music_Note[]={

   0, 0,0xE9,3,
   8, 0,0xEB,3,
 0x80
};
#line 2884 "SAUCE/defines/sprites.h"
struct SpriteFrame {
 uint8_t frame_count;
 const uint8_t* ptr;
};


const struct SpriteFrame Skull_Open_Sprites[]={
 {1, Skull_Trigger_1},
 {4, Skull_Trigger_2},
 {4, Skull_Trigger_3},
 {1, Skull_Trigger_4},
};



const struct SpriteFrame COIN_SPRITES[]={
 {5, COIN_SPRITE},
 {5, COIN_1_SPRITE},
 {5, COIN_2_SPRITE},
 {5, COIN_3_SPRITE},
};
const struct SpriteFrame COIN_SPRITES_X[]={
 {5, COIN_SPRITE_X},
 {5, COIN_1_X},
 {5, COIN_2_X},
 {5, COIN_3_X},
};

const struct SpriteFrame YELLOW_PAD_SPRITES[]={
 {5, Yellow_Jump_Pad},
 {5, Yellow_Jump_Pad2},
 {5, Yellow_Jump_Pad3},
 {5, Yellow_Jump_Pad4},
};

const struct SpriteFrame YELLOW_PAD_U_SPRITES[]={
 {5, Yellow_Jump_Pad_U},
 {5, Yellow_Jump_Pad_U2},
 {5, Yellow_Jump_Pad_U3},
 {5, Yellow_Jump_Pad_U4},
};
const struct SpriteFrame PINK_PAD_SPRITES[]={
 {5, Pink_Jump_Pad},
 {5, Pink_Jump_Pad2},
 {5, Pink_Jump_Pad3},
 {5, Pink_Jump_Pad4},
};
const struct SpriteFrame RED_PAD_SPRITES[]={
 {5, Red_Jump_Pad},
 {5, Red_Jump_Pad2},
 {5, Red_Jump_Pad3},
 {5, Red_Jump_Pad4},
};
const struct SpriteFrame RED_PAD_U_SPRITES[]={
 {5, Red_Jump_Pad_U},
 {5, Red_Jump_Pad_U2},
 {5, Red_Jump_Pad_U3},
 {5, Red_Jump_Pad_U4},
};

const struct SpriteFrame PINK_PAD_U_SPRITES[]={
 {5, Pink_Jump_Pad_U},
 {5, Pink_Jump_Pad_U2},
 {5, Pink_Jump_Pad_U3},
 {5, Pink_Jump_Pad_U4},
};

const struct SpriteFrame GREEN_PAD_SPRITES[]={
 {5, Green_Jump_Pad},
 {5, Green_Jump_Pad2},
 {5, Green_Jump_Pad3},
 {5, Green_Jump_Pad4},
};

const struct SpriteFrame GRAVITY_PAD_SPRITES[]={
 {5, Gravity_Pad},
 {5, Gravity_Pad2},
 {5, Gravity_Pad3},
 {5, Gravity_Pad4},
};

const struct SpriteFrame GRAVITY_PAD_U_SPRITES[]={
 {5, Gravity_Pad_U},
 {5, Gravity_Pad_U2},
 {5, Gravity_Pad_U3},
 {5, Gravity_Pad_U4},
};
const struct SpriteFrame YELLOW_ORB_SPRITES[]={
 {5, Yellow_Jump_Orb},
 {5, Yellow_Jump_Orb2},
 {5, Yellow_Jump_Orb3},
 {5, Yellow_Jump_Orb4},
};
const struct SpriteFrame WHITE_ORB_SPRITES[]={
 {5, WHITE_ORB1},
 {5, WHITE_ORB2},
 {5, WHITE_ORB3},
 {5, WHITE_ORB4},
};
const struct SpriteFrame BLUE_ORB_SPRITES[]={
 {5, Blue_Jump_Orb},
 {5, Blue_Jump_Orb2},
 {5, Blue_Jump_Orb3},
 {5, Blue_Jump_Orb4},
};
const struct SpriteFrame PINK_ORB_SPRITES[]={
 {5, Pink_Jump_Orb},
 {5, Pink_Jump_Orb2},
 {5, Pink_Jump_Orb3},
 {5, Pink_Jump_Orb4},
};

const struct SpriteFrame GREEN_ORB_SPRITES[]={
 {5, Green_Jump_Orb},
 {5, Green_Jump_Orb2},
 {5, Green_Jump_Orb3},
 {5, Green_Jump_Orb4},
};

const struct SpriteFrame RED_ORB_SPRITES[]={
 {5, Red_Jump_Orb},
 {5, Red_Jump_Orb2},
 {5, Red_Jump_Orb3},
 {5, Red_Jump_Orb4},
};

const struct SpriteFrame RANDOM_GAMEMODE_PORTAL[]={
 {10, Portal_Gamemode_Cube},
 {10, Portal_Gamemode_Ship},
 {10, Portal_Gamemode_Ball},
 {10, Portal_Gamemode_UFO},
 {10, Portal_Gamemode_Robot},
 {10, Portal_Gamemode_Spider},
 {10, Portal_Gamemode_Wave},
 {10, Portal_Gamemode_Swing},
};

const struct SpriteFrame SUPER_RANDOM_GAMEMODE_PORTAL[]={
 {10, Portal_Gamemode_Cube},
 {10, Portal_Gamemode_Ship},
 {10, Portal_Gamemode_Ball},
 {10, Portal_Gamemode_UFO},
 {10, Portal_Gamemode_Robot},
 {10, Portal_Gamemode_Spider},
 {10, Portal_Gamemode_Wave},
 {10, Portal_Gamemode_Swing},
 {10, Portal_Gamemode_Ninja},
 {10, Portal_Gamemode_Pogo},
 {10, Portal_Gamemode_Snake},
 {10, Portal_Gamemode_Football},
};

const struct SpriteFrame MINI_COIN_SPRITES[]={
 {5, MINICOIN_SPRITE1},
 {5, MINICOIN_SPRITE2},
 {5, MINICOIN_SPRITE3},
 {5, MINICOIN_SPRITE4},
};

const unsigned char nometa[] = {0x80};

const unsigned char Menu_0[] = {
 0, 0, 0x81, 2,
 0x80
};

const unsigned char Menu_1[] = {
 0, 0, 0x83, 2,
 0x80
};

const unsigned char Menu_2[] = {
 0, 0, 0x85, 2,
 0x80
};

const unsigned char Menu_3[] = {
 0, 0, 0x87, 2,
 0x80
};

const unsigned char Menu_4[] = {
 0, 0, 0x89, 2,
 0x80
};

const unsigned char Menu_5[] = {
 0, 0, 0x8b, 2,
 0x80
};

const unsigned char Menu_6[] = {
 0, 0, 0x8d, 2,
 0x80
};

const unsigned char Menu_7[] = {
 0, 0, 0x8f, 2,
 0x80
};

const unsigned char Menu_8[] = {
 0, 0, 0x91, 2,
 0x80
};

const unsigned char Menu_9[] = {
 0, 0, 0x93, 2,
 0x80
};

const unsigned char Menu_Percentage[] = {
 0, 0, 0x95, 2,
 0x80
};

const unsigned char Menu_0_Pal3[] = {
 0, 0, 0x81, 3,
 0x80
};

const unsigned char Menu_1_Pal3[] = {
 0, 0, 0x83, 3,
 0x80
};

const unsigned char Menu_2_Pal3[] = {
 0, 0, 0x85, 3,
 0x80
};

const unsigned char Menu_3_Pal3[] = {
 0, 0, 0x87, 3,
 0x80
};

const unsigned char Menu_4_Pal3[] = {
 0, 0, 0x89, 3,
 0x80
};

const unsigned char Menu_5_Pal3[] = {
 0, 0, 0x8b, 3,
 0x80
};

const unsigned char Menu_6_Pal3[] = {
 0, 0, 0x8d, 3,
 0x80
};

const unsigned char Menu_7_Pal3[] = {
 0, 0, 0x8f, 3,
 0x80
};

const unsigned char Menu_8_Pal3[] = {
 0, 0, 0x91, 3,
 0x80
};

const unsigned char Menu_9_Pal3[] = {
 0, 0, 0x93, 3,
 0x80
};

const unsigned char Menu_Percentage_Pal3[] = {
 0, 0, 0x95, 3,
 0x80
};


const unsigned char Menu_Percentage_Mask[] = {
 0, 0, 0x97, 3,
 0x80
};


const unsigned char Menu_Percentage_Coarse[] = {
 0, 0, 0x99, 0x0,
 0x80
};


const unsigned char Menu_Percentage_Coarse_Pal1[] = {
 0, 0, 0x99, 0x1,
 0x80
};

const unsigned char Menu_Percentage_Hidder[] = {
 0, 0, 0x9B, 0x1,
 0x80
};

const unsigned char Menu_Percentage_Hidder_Flipped[] = {
 0, 0, 0x9B, 0x40 | 0x1,
 0x80
};


const unsigned char Progress_0[] = {
 0, 0, 0x81, 2,
 0x80
};

const unsigned char Progress_1[] = {
 0, 0, 0x83, 2,
 0x80
};

const unsigned char Progress_2[] = {
 0, 0, 0x85, 2,
 0x80
};

const unsigned char Progress_3[] = {
 0, 0, 0x87, 2,
 0x80
};

const unsigned char Progress_4[] = {
 0, 0, 0x89, 2,
 0x80
};

const unsigned char Progress_5[] = {
 0, 0, 0x8b, 2,
 0x80
};

const unsigned char Progress_6[] = {
 0, 0, 0x8d, 2,
 0x80
};

const unsigned char Progress_7[] = {
 0, 0, 0x8f, 2,
 0x80
};

const unsigned char Progress_8[] = {
 0, 0, 0x91, 2,
 0x80
};

const unsigned char Progress_9[] = {
 0, 0, 0x93, 2,
 0x80
};

const unsigned char Progress_Percentage[] = {
 0, 0, 0x95, 2,
 0x80
};

const unsigned char * const Number_Sprites[] = {
 Menu_0,
 Menu_1,
 Menu_2,
 Menu_3,
 Menu_4,
 Menu_5,
 Menu_6,
 Menu_7,
 Menu_8,
 Menu_9,
 Menu_Percentage,
 Menu_0_Pal3,
 Menu_1_Pal3,
 Menu_2_Pal3,
 Menu_3_Pal3,
 Menu_4_Pal3,
 Menu_5_Pal3,
 Menu_6_Pal3,
 Menu_7_Pal3,
 Menu_8_Pal3,
 Menu_9_Pal3,
 Menu_Percentage_Pal3,

 Menu_Percentage_Mask,
 Menu_Percentage_Coarse,
 Menu_Percentage_Coarse_Pal1,
 Menu_Percentage_Hidder,
 Menu_Percentage_Hidder_Flipped,

 Progress_0,
 Progress_1,
 Progress_2,
 Progress_3,
 Progress_4,
 Progress_5,
 Progress_6,
 Progress_7,
 Progress_8,
 Progress_9,
 Progress_Percentage,
};

const unsigned char * const Metasprites[]={
 Portal_Gamemode_Cube,
 Portal_Gamemode_Ship,
 Portal_Gamemode_Ball,
 Portal_Gamemode_UFO,
 Portal_Gamemode_Robot,
 Blue_Jump_Orb,
 Pink_Jump_Orb,
 COIN_SPRITE,
 Portal_Gravity_Down,
 Portal_Gravity_Up,
 Yellow_Jump_Pad,
 Yellow_Jump_Orb,
 Yellow_Jump_Pad_U,
 Gravity_Pad,
 Gravity_Pad_U,
 nometa,

 Portal_Gravity_Down_Horizontal_Downwards,
 Portal_Gravity_Down_Horizontal_Upwards,
 Portal_Gravity_Up_Horizontal_Downwards,
 Portal_Gravity_Up_Horizontal_Upwards,
 Speed_05_Portal,
 Speed_10_Portal,
 Speed_20_Portal,
 Portal_Gamemode_Spider,
 Mini_Portal,
 Growth_Portal,
 COIN_SPRITE,
 COIN_SPRITE,
 COIN_SPRITE_X,
 COIN_SPRITE_X,
 COIN_SPRITE_X,
 Yellow_Jump_Orb,

 Speed_30_Portal,
 Speed_40_Portal,
 Portal_Dual,
 Portal_Single,
 Portal_Gamemode_Wave,
 Pink_Jump_Pad,
 Pink_Jump_Pad_U,
 Green_Jump_Orb,
 Red_Jump_Orb,
 Yellow_Jump_Orb,
 Long_Light,
 Medium_Light,
 Short_Light,
 Chain,
 BG_Spike_Group1,
 BG_Spike_Group2,

 BG_Spike_Group3,
 BG_Spike_Group4,
 Big_Diamond,
 Right_Half_Diamond,
 Question_Mark,
 Exclamation_Mark,
 Star,
 Big_X,
 Short_Light_Right,
 Short_Light_Left,
 Long_Light_U,
 Medium_Light_U,
 Short_Light_U,
 Chain_U,
 Medium_Light_Right,
 Medium_Light_Left,

 nometa,
 nometa,
 nometa,
 nometa,
 Black_Orb,
 Dash_Orb,
 Dash_Gravity_Orb,
 nometa,
 nometa,
 Pulsing_Ball,
 Music_Note,
 Portal_Gamemode_Swing,
 Dash_Orb_45Deg_UP,
 Dash_Gravity_Orb_45Deg_UP,
 Teleport_Portal_Enter,
 Teleport_Portal_Exit,
 Dash_Orb_45Deg_DOWN,
 Dash_Gravity_Orb_45Deg_DOWN,
 Red_Jump_Pad,
 Red_Jump_Pad_U,
 Spider_Orb_UP,
 Spider_Orb_DOWN,
 Spider_Pad_Up,
 Spider_Pad_Down,
 Portal_Gamemode_Ninja,
 Teleport_Square_Enter,
 Teleport_Square_Exit,
 Dash_Orb_Upwards,
 Dash_Gravity_Orb_Upwards,
 Dash_Orb_Downwards,
 Dash_Gravity_Orb_Downwards,
 Gravity_13_Portal,
 Gravity_12_Portal,
 Gravity_23_Portal,
 Gravity_2x_Portal,
 Gravity_1x_Portal,
 Portal_Gamemode_Cube,
 Green_Jump_Pad,
 Teleport_Portal_Horizontal_Upwards_Enter,
 Teleport_Portal_Horizontal_Downwards_Exit,
 Teleport_Portal_Horizontal_Downwards_Enter,
 Teleport_Portal_Horizontal_Upwards_Exit,
 Portal_Gamemode_Pogo,
 Portal_Gamemode_Snake,
 Portal_Gamemode_Football,
 Speed_SLOW_Portal,
 MINICOIN_SPRITE1,
 nometa,
 nometa,
 nometa,
 nometa,
 nometa,
 nometa,
 nometa,
 nometa,
 nometa,
 nometa,
 Skull_Trigger_1,
 WHITE_ORB1,
 Blue_Jump_Orb,
 Green_Jump_Orb,
 nometa,
 Portal_Gamemode_Cube
 };



const void* const animation_frame_list[] = {
 ((void *) 0),
 ((void *) 0),
 ((void *) 0),
 ((void *) 0),
 ((void *) 0),
 BLUE_ORB_SPRITES,
 PINK_ORB_SPRITES,
 COIN_SPRITES,
 ((void *) 0),
 ((void *) 0),
 YELLOW_PAD_SPRITES,
 YELLOW_ORB_SPRITES,
 YELLOW_PAD_U_SPRITES,
 GRAVITY_PAD_SPRITES,
 GRAVITY_PAD_U_SPRITES,
 ((void *) 0),

 ((void *) 0),
 ((void *) 0),
 ((void *) 0),
 ((void *) 0),
 ((void *) 0),
 ((void *) 0),
 ((void *) 0),
 ((void *) 0),
 ((void *) 0),
 ((void *) 0),
 COIN_SPRITES,
 COIN_SPRITES,
 COIN_SPRITES_X,
 COIN_SPRITES_X,
 COIN_SPRITES_X,
 YELLOW_ORB_SPRITES,

 ((void *) 0),
 ((void *) 0),
 ((void *) 0),
 ((void *) 0),
 ((void *) 0),
 PINK_PAD_SPRITES,
 PINK_PAD_U_SPRITES,
 GREEN_ORB_SPRITES,
 RED_ORB_SPRITES,
 YELLOW_ORB_SPRITES,
 ((void *) 0),
 ((void *) 0),
 ((void *) 0),
 ((void *) 0),
 ((void *) 0),
 ((void *) 0),

 ((void *) 0),
 ((void *) 0),
 ((void *) 0),
 ((void *) 0),
 ((void *) 0),
 ((void *) 0),
 ((void *) 0),
 ((void *) 0),
 ((void *) 0),
 ((void *) 0),
 ((void *) 0),
 ((void *) 0),
 ((void *) 0),
 ((void *) 0),
 ((void *) 0),
 ((void *) 0),

 ((void *) 0),
 ((void *) 0),
 ((void *) 0),
 ((void *) 0),
 ((void *) 0),
 ((void *) 0),
 ((void *) 0),
 ((void *) 0),
 ((void *) 0),
 ((void *) 0),
 ((void *) 0),
 ((void *) 0),
 ((void *) 0),
 ((void *) 0),
 ((void *) 0),
 ((void *) 0),
 ((void *) 0),
 ((void *) 0),
 RED_PAD_SPRITES,
 RED_PAD_U_SPRITES,
 ((void *) 0),
 ((void *) 0),
 ((void *) 0),
 ((void *) 0),
 ((void *) 0),
 ((void *) 0),
 ((void *) 0),
 ((void *) 0),
 ((void *) 0),
 ((void *) 0),
 ((void *) 0),
 ((void *) 0),
 ((void *) 0),
 ((void *) 0),
 ((void *) 0),
 ((void *) 0),
 RANDOM_GAMEMODE_PORTAL,
 GREEN_PAD_SPRITES,
 ((void *) 0),
 ((void *) 0),
 ((void *) 0),
 ((void *) 0),
 ((void *) 0),
 ((void *) 0),
 ((void *) 0),
 ((void *) 0),
 MINI_COIN_SPRITES,
 ((void *) 0),
 ((void *) 0),
 ((void *) 0),
 ((void *) 0),
 ((void *) 0),
 ((void *) 0),
 ((void *) 0),
 ((void *) 0),
 ((void *) 0),
 ((void *) 0),
 Skull_Open_Sprites,
 WHITE_ORB_SPRITES,
 BLUE_ORB_SPRITES,
 GREEN_ORB_SPRITES,
 ((void *) 0),
 SUPER_RANDOM_GAMEMODE_PORTAL,
};


const unsigned char animation_frame_length[] = {
 0,
 0,
 0,
 0,
 0,
 sizeof(BLUE_ORB_SPRITES) / sizeof(struct SpriteFrame),
 sizeof(PINK_ORB_SPRITES) / sizeof(struct SpriteFrame),
 sizeof(COIN_SPRITES) / sizeof(struct SpriteFrame),
 0,
 0,
 sizeof(YELLOW_PAD_SPRITES) / sizeof(struct SpriteFrame),
 sizeof(YELLOW_ORB_SPRITES) / sizeof(struct SpriteFrame),
 sizeof(YELLOW_PAD_U_SPRITES) / sizeof(struct SpriteFrame),
 sizeof(GRAVITY_PAD_SPRITES) / sizeof(struct SpriteFrame),
 sizeof(GRAVITY_PAD_U_SPRITES) / sizeof(struct SpriteFrame),
 0,

 0,
 0,
 0,
 0,
 0,
 0,
 0,
 0,
 0,
 0,
 sizeof(COIN_SPRITES) / sizeof(struct SpriteFrame),
 sizeof(COIN_SPRITES) / sizeof(struct SpriteFrame),
 sizeof(COIN_SPRITES_X) / sizeof(struct SpriteFrame),
 sizeof(COIN_SPRITES_X) / sizeof(struct SpriteFrame),
 sizeof(COIN_SPRITES_X) / sizeof(struct SpriteFrame),
 sizeof(YELLOW_ORB_SPRITES) / sizeof(struct SpriteFrame),

 0,
 0,
 0,
 0,
 0,
 sizeof(PINK_PAD_SPRITES) / sizeof(struct SpriteFrame),
 sizeof(PINK_PAD_U_SPRITES) / sizeof(struct SpriteFrame),
 sizeof(GREEN_ORB_SPRITES) / sizeof(struct SpriteFrame),
 sizeof(RED_ORB_SPRITES) / sizeof(struct SpriteFrame),
 sizeof(YELLOW_ORB_SPRITES) / sizeof(struct SpriteFrame),
 0,
 0,
 0,
 0,
 0,
 0,

 0,
 0,
 0,
 0,
 0,
 0,
 0,
 0,
 0,
 0,
 0,
 0,
 0,
 0,
 0,
 0,

 0,
 0,
 0,
 0,
 0,
 0,
 0,
 0,
 0,
 0,
 0,
 0,
 0,
 0,
 0,
 0,
 0,
 0,
 sizeof(RED_PAD_SPRITES) / sizeof(struct SpriteFrame),
 sizeof(RED_PAD_U_SPRITES) / sizeof(struct SpriteFrame),
 0,
 0,
 0,
 0,
 0,
 0,
 0,
 0,
 0,
 0,
 0,
 0,
 0,
 0,
 0,
 0,
 sizeof(RANDOM_GAMEMODE_PORTAL) / sizeof(struct SpriteFrame),
 sizeof(GREEN_PAD_SPRITES) / sizeof(struct SpriteFrame),
 0,
 0,
 0,
 0,
 0,
 0,
 0,
 0,
 sizeof(MINI_COIN_SPRITES) / sizeof(struct SpriteFrame),
 0,
 0,
 0,
 0,
 0,
 0,
 0,
 0,
 0,
 0,
 sizeof(Skull_Open_Sprites) / sizeof(struct SpriteFrame),
 sizeof(WHITE_ORB_SPRITES) / sizeof(struct SpriteFrame),
 sizeof(BLUE_ORB_SPRITES) / sizeof(struct SpriteFrame),
 sizeof(GREEN_ORB_SPRITES) / sizeof(struct SpriteFrame),
 0,
 sizeof(SUPER_RANDOM_GAMEMODE_PORTAL) / sizeof(struct SpriteFrame),
};

_Pragma ("rodata-name (pop)")
#line 65 "SAUCE/include.h"
#line 1 "SAUCE/functions/sprite_loading.h"
_Pragma ("data-name(push, \"XCD_BANK_00\")")
_Pragma ("rodata-name(push, \"XCD_BANK_00\")")
_Pragma ("code-name(push, \"XCD_BANK_00\")")

extern void load_next_sprite(uint8_t slot);
extern void check_spr_objects();
void init_sprites();

void dual_cap_check();
void spider_up_wait();
void spider_down_wait();
extern char bg_coll_U();
extern char bg_coll_D();
void clearrobotjumpframes();
void settrailstuff();

const unsigned char OUTLINES[]={
  0x30,
  0x11,
  0x12,
  0x13,
  0x14,
  0x15,
  0x16,
  0x27,
  0x28,
  0x29,
  0x2A,
  0x2B,
  0x2C,
  0x21,
  0x17,
  0x0F
};
#line 48 "SAUCE/functions/sprite_loading.h"
uint8_t sprite_heights[]={
 0x34, 0x34, 0x34, 0x34, 0x34, 0x12, 0x12, 0xFF,
 0x28, 0x28, 0x03, 0x12, 0x03, 0x03, 0x03, 0xFF,
 0x0e, 0x0e, 0x0e, 0x0e, 0x24, 0x24, 0x24, 0x34,
 0x34, 0x34, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x12,
 0x24, 0x24, 0x34, 0x34, 0x34, 0x03, 0x03, 0x12,
 0x12, 0x12, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE,
 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE,
 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE,
 0xFE, 0xFE, 0xFE, 0xFE, 0x12, 0x12, 0x12, 0x28,
 0x28, 0xFE, 0xFE, 0x34, 0x12, 0x12, 0x30, 0xFF,
 0x12, 0x12, 0x03, 0x03, 0x12, 0x12, 0x03, 0x03,
 0x34, 0x10, 0xFF, 0x12, 0x12, 0x12, 0x12, 0x34,
 0x34, 0x34, 0x34, 0x34, 0x34, 0x02, 0x10, 0xFF,
 0x10, 0xFF, 0x34, 0x34, 0x34, 0x20, 0x08, 0xFF,
 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x10, 0xFF, 0x10,
 0xFF, 0x12, 0x12, 0x12, 0x12, 0xFF, 0xFF, 0xFF,
 0xFD, 0xFD, 0xFD, 0xFD, 0xFD, 0xFD, 0xFD, 0xFD,
 0xFD, 0xFD, 0xFD, 0xFD, 0xFD, 0x00, 0xFF, 0xFD,
 0xFD, 0xFD, 0xFD, 0xFD, 0xFD, 0xFD, 0xFD, 0xFD,
 0xFD, 0xFD, 0xFD, 0xFD, 0xFD, 0x00, 0xFF, 0xFD,
 0xFD, 0xFD, 0xFD, 0xFD, 0xFD, 0xFD, 0xFD, 0xFD,
 0xFD, 0xFD, 0xFD, 0xFD, 0xFD, 0x00, 0xFD, 0xFC,
 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC,
 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC,
 0xFD, 0xFD, 0xFD, 0xFD, 0xFD, 0xFD, 0xFD, 0xFD,
 0xFD, 0xFD, 0xFD, 0xFD, 0xFD, 0x00, 0x00, 0xFD,
 0xFD, 0xFD, 0xFD, 0xFD, 0xFD, 0xFD, 0xFD, 0xFD,
 0xFD, 0xFD, 0xFD, 0xFD, 0xFD, 0xFF, 0xFF, 0xFF,
 0xFD, 0xFD, 0xFD, 0xFD, 0xFD, 0xFD, 0xFD, 0xFD,
 0xFD, 0xFD, 0xFD, 0xFD, 0xFD, 0xFF, 0xFF, 0xFF,
 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x10, 0x10,
 0x10, 0x10, 0x1F, 0x10, 0x10, 0x03, 0x03, 0x00,
};

uint8_t sprite_widths[]={
 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10,
 0x0e, 0x0e, 0x0F, 0x10, 0x0F, 0x0F, 0x0F, 0x10,
 0x28, 0x28, 0x28, 0x28, 0x10, 0x10, 0x10, 0x10,
 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10,
 0x10, 0x10, 0x10, 0x10, 0x10, 0x0F, 0x0F, 0x10,
 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10,
 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10,
 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10,
 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x0e,
 0x0e, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10,
 0x10, 0x10, 0x0F, 0x0F, 0x10, 0x10, 0x0F, 0x0F,
 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10,
 0x10, 0x10, 0x10, 0x10, 0x10, 0x0E, 0x30, 0x30,
 0x30, 0x30, 0x10, 0x10, 0x10, 0x10, 0x08, 0x10,
 0x10, 0x10, 0x10, 0x10, 0x10, 0x30, 0x30, 0x30,
 0x30, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10,
 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10,
 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10,
 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10,
 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10,
 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10,
 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10,
 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10,
 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10,
 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10,
 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10,
 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10,
 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10,
 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10,
 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10,
 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10,
 0x10, 0x08, 0x1B, 0x10, 0x10, 0x0E, 0x0E, 0x10,
};



int8_t sprite_x_offset[]={
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x04, 0x04, 0x04, 0x04, 0x00, 0x00, 0x00, 0x00,
 0x08, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x08, -0x07, 0x00, 0x00, 0x00, 0x00, 0x00,
};

int8_t sprite_y_offset[]={
 -0x02, -0x02, -0x02, -0x02, -0x02, -0x01, -0x01, 0x00,
 0x04, 0x04, 0x05, -0x01, 0x00, 0x05, 0x00, 0x00,
 0x01, 0x01, 0x01, 0x01, -0x02, -0x02, -0x02, -0x02,
 -0x02, -0x02, 0x00, 0x00, 0x00, 0x00, 0x00, -0x01,
 -0x02, -0x02, -0x02, -0x02, -0x02, 0x05, 0x00, -0x01,
 -0x01, -0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, -0x01, -0x01, -0x01, 0x04,
 0x04, 0x00, 0x00, -0x02, 0x00, -0x01, -0x01, 0x00,
 -0x01, -0x01, 0x05, 0x00, -0x01, -0x01, 0x05, 0x00,
 -0x02, 0x00, 0x00, -0x01, -0x01, -0x01, -0x01, -0x02,
 -0x02, -0x02, -0x02, -0x02, -0x02, 0x00, 0x00, 0x00,
 0x00, 0x00, -0x02, -0x02, -0x02, 0x00, 0x04, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, -0x01, -0x01, -0x01, -0x01, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, -0x07, 0x00, 0x00, 0x05, 0x02, 0x00,
};

void animate_coin_1();

void animate_coin_2();

void animate_coin_3();

void clear_slope_stuff() {
 currplayer_was_on_slope_counter = 0;
 currplayer_slope_frames = 0;
 currplayer_slope_type = 0;
 currplayer_last_slope_type = 0;
}



char sprite_load_special_behavior(){





 switch(tmp4) {

   case 0xDF:
    if ((newrand() & 63) == (newrand() & 63)) {
     ( __A__ = currplayer, __asm__("tay"), __A__ = cube_data[currplayer] | 1, __asm__("sta %v, y", cube_data));
    }
    triggers_hit[0]++;
    if (triggers_hit[0] == 10) { triggers_hit[0] = 0; triggers_hit[1]++; }
    if (triggers_hit[1] == 10) { triggers_hit[1] = 0; triggers_hit[2]++; }
    triggers++;
    activesprites_type[index] = 0xFF; return 0;
   case 0xEE:
    disco_sprites = 1;
    activesprites_type[index] = 0xFF; return 0;
   case 0xEF:
    disco_sprites = 0;
    activesprites_type[index] = 0xFF; return 0;
   case 0x6F:
    player_invis = 1;
    activesprites_type[index] = 0xFF; return 0;
   case 0x7F:
    player_invis = 0;
    activesprites_type[index] = 0xFF; return 0;
   case 0x8E:
    wrap_mode = 1;
    activesprites_type[index] = 0xFF; return 0;
   case 0x9E:
    wrap_mode = 0;
    activesprites_type[index] = 0xFF; return 0;
   case 0x70:
    gravity_mod = 1;
    activesprites_type[index] = 0xFF; return 0;
   case 0x71:
    gravity_mod = 2;
    activesprites_type[index] = 0xFF; return 0;
   case 0x72:
    gravity_mod = 3;
    activesprites_type[index] = 0xFF; return 0;
   case 0x73:
    gravity_mod = 4;
    activesprites_type[index] = 0xFF; return 0;
   case 0x74:
    gravity_mod = 0;
    activesprites_type[index] = 0xFF; return 0;
   case 0x7D:
    nullscapes_active++;
    if (nullscapes_active == 3) nullscapes_active = 0;
    activesprites_type[index] = 0xFF; return 0;

  case 0xDD:
   nocamlockforced = 1;
   activesprites_type[index] = 0xFF; return 0;
  case 0xED:
   nocamlockforced = 0;
   activesprites_type[index] = 0xFF; return 0;
  case 0xDE:
   if (!cam_seesaw) {
    target_x_scroll_stop = (activesprites_realy[index] & 0xF0) << 8;
    activesprites_type[index] = 0xFF; return 0;
   }
   return 0;

  case 0xF4:
   if (!level_resetting_flag) slowmode = 1;
   else if (level_resetting_flag && !timewarp_done) { slowmode = 1; timewarp_done = 1; }
   activesprites_type[index] = 0xFF; return 0;
  case 0xF5:
   if (!level_resetting_flag) slowmode = 0;
   else if (level_resetting_flag && !timewarp_done) { slowmode = 0; timewarp_done = 1; }
   activesprites_type[index] = 0xFF; return 0;

  case 0xF0:
   forced_trails = 1;
   activesprites_type[index] = 0xFF; return 0;
  case 0xF1:
  case 0xF3:
   forced_trails = 0;
   activesprites_type[index] = 0xFF; return 0;
  case 0xF2:
   forced_trails = 2;
   activesprites_type[index] = 0xFF; return 0;

  case 0x5A:
   teleport_output = activesprites_realy[index];
   return 0x0f;

  case 0x76:
  case 0x78:
  case 0x67:
  case 0x69:
   teleport_output = activesprites_realy[index] + 0x10;
   return 0x10;

  case 0x4F:
   teleport_output = activesprites_realy[index] + 0x10;
   return 0x30;

  case 0x07:
   if (coin1_obtained[level]) {
    activesprites_type[index] = 0x1C;
   }
  case 0x1C:
   if (coin1_timer) {
    animate_coin_1();
   }
   return 0x10;

  case 0x1A:
   if (coin2_obtained[level]) {
    activesprites_type[index] = 0x1D;
   }

  case 0x1D:
   if (coin2_timer) {
    animate_coin_2();
   }
   return 0x10;

  case 0x1B:
   if (coin3_obtained[level]) {
    activesprites_type[index] = 0x1E;
   }

  case 0x1E:

    if (level == 20 && minicoins != 10) {
     activesprites_type[index] = 0xFF;
     return 0x10;
    }

   if (coin3_timer) {
    animate_coin_3();
   }
   return 0x10;

  case 0x0F:
   gameState = 0x03; kandokidshack4 = 0;

 }
 return 0;




}

void animate_coin_1() {
    ( __A__ = index, __asm__("tay"), __A__ = activesprites_y_lo[index] - *((uint8_t*)&coin1_speed+1), __asm__("sta %v, y", activesprites_y_lo));
    coin1_speed -= 0x0040;
    coin1_timer++;

    if (coin1_timer == 40) {
        activesprites_type[index] = 0xFF;
        animating = 0;
    }
}


void animate_coin_2() {
    ( __A__ = index, __asm__("tay"), __A__ = activesprites_y_lo[index] - *((uint8_t*)&coin2_speed+1), __asm__("sta %v, y", activesprites_y_lo));
    coin2_speed -= 0x0040;
    coin2_timer++;

    if (coin2_timer == 40) {
        activesprites_type[index] = 0xFF;
        animating = 0;
    }
}


void animate_coin_3() {
    ( __A__ = index, __asm__("tay"), __A__ = activesprites_y_lo[index] - *((uint8_t*)&coin3_speed+1), __asm__("sta %v, y", activesprites_y_lo));
    coin3_speed -= 0x0040;
    coin3_timer++;

    if (coin3_timer == 40) {
        activesprites_type[index] = 0xFF;
        animating = 0;
    }
}

void common_dash_orb_routine() {




 (currplayer_gravity ^= 0xFF);
 update_currplayer_table_idx();
}
#line 414 "SAUCE/functions/sprite_loading.h"
_Pragma ("data-name(push, \"XCD_BANK_06\")")
_Pragma ("rodata-name(push, \"XCD_BANK_06\")")
_Pragma ("code-name(push, \"XCD_BANK_06\")")


static uint16_t _sprite_gamemode_y_adjust() {
 return ( __AX__ = (uintptr_t)sprite_gamemode_adjust_heights[currplayer_table_idx & 0x7F], __asm__("sta ptr1 \n stx ptr1+1"), __A__ = (((retro_mode && gamemode == 0x04) || gamemode == 0x08) ? tmp3 : gamemode | tmp3) << 1, __asm__("tay"), __asm__("lda (ptr1), y \n tax"), __asm__("iny"), __asm__("lda (ptr1), y"), __AX__);
}

_Pragma ("code-name(pop)")
_Pragma ("rodata-name(pop)")
_Pragma ("data-name(pop)")

static uint16_t sprite_gamemode_y_adjust() {
 if (gamemode == 0x09) {
  gamemode = 0x07;
  tmpA = (__asm__("lda #<%v \n ldx #>%v \n ldy #<.bank(%v) \n jsr crossPRGBankJump ", _sprite_gamemode_y_adjust, _sprite_gamemode_y_adjust, _sprite_gamemode_y_adjust), __asm__("lda ptr3 \n ldx ptr3+1"), __AX__);
  gamemode = 0x09;
  return tmpA;
 }
 if (gamemode == 0x0A) {
  gamemode = 0x06;
  tmpA = (__asm__("lda #<%v \n ldx #>%v \n ldy #<.bank(%v) \n jsr crossPRGBankJump ", _sprite_gamemode_y_adjust, _sprite_gamemode_y_adjust, _sprite_gamemode_y_adjust), __asm__("lda ptr3 \n ldx ptr3+1"), __AX__);
  gamemode = 0x0A;
  return tmpA;
 }
 if (gamemode == 0x0B) {
  gamemode = 0x00;
  tmpA = (__asm__("lda #<%v \n ldx #>%v \n ldy #<.bank(%v) \n jsr crossPRGBankJump ", _sprite_gamemode_y_adjust, _sprite_gamemode_y_adjust, _sprite_gamemode_y_adjust), __asm__("lda ptr3 \n ldx ptr3+1"), __AX__);
  gamemode = 0x0B;
  return tmpA;
 }
 return (__asm__("lda #<%v \n ldx #>%v \n ldy #<.bank(%v) \n jsr crossPRGBankJump ", _sprite_gamemode_y_adjust, _sprite_gamemode_y_adjust, _sprite_gamemode_y_adjust), __asm__("lda ptr3 \n ldx ptr3+1"), __AX__);
}

void gamemode_stuff() {
  clearrobotjumpframes();
  if (!dual || twoplayer) target_scroll_y = (( __A__ = index, __asm__("tay"), __asm__("lda %v, y \n ldx %v, y", activesprites_y_lo, activesprites_y_hi), __AX__) - 0x3A);
}

void pad_stuff() {
  clear_slope_stuff();
  settrailstuff();
  currplayer_vel_y = sprite_gamemode_y_adjust();
  orbhitonthisframe[currplayer] = 1;
}

static void sprite_gamemode_main() {
 if (controllingplayer->hold & (0x80 | 0x08)) {
  if (gamemode == 0x02) ball_switched[currplayer] = 1;
  if ((cube_data[currplayer] & 2) || controllingplayer->press & (0x80 | 0x08)) {
   if (gamemode == 0x05 && tmp4 == 0x44) black_orbed[currplayer] = 1;
   if (gamemode == 0x04) orbed[currplayer] = 1;
   ( __A__ = currplayer, __asm__("tay"), __A__ = cube_data[currplayer] & 1, __asm__("sta %v, y", cube_data));
   settrailstuff();
   clear_slope_stuff();

   switch (tmp4) {
   case 0x7B:
   case 0x05:
    if (!activesprites_activated[index]) {
     (currplayer_gravity ^= 0xFF); (player_gravity[0] ^= 0xFF); (player_gravity[1] ^= 0xFF);
     update_currplayer_table_idx();
     dual_cap_check();
     if (gamemode != 0x02) {
      currplayer_vel_y = (( __A__ = currplayer_table_idx, __asm__("tay"), __asm__("lda %v, y \n ldx %v, y", PAD_HEIGHT_BLUE_lo, PAD_HEIGHT_BLUE_hi), __AX__));
     } else {
      currplayer_vel_y = (( __A__ = currplayer_table_idx, __asm__("tay"), __asm__("lda %v, y \n ldx %v, y", ORB_BALL_HEIGHT_BLUE_lo, ORB_BALL_HEIGHT_BLUE_hi), __AX__));
     }
    }
    break;
   case 0x7C:
   case 0x27:
    if (!activesprites_activated[index]) {
     (currplayer_gravity ^= 0xFF); (player_gravity[0] ^= 0xFF); (player_gravity[1] ^= 0xFF);
     update_currplayer_table_idx();
     dual_cap_check();
     currplayer_vel_y = sprite_gamemode_y_adjust();
    }
    break;
   case 0x46:
    if (!dashing[currplayer]) {
     common_dash_orb_routine();
    }

   case 0x45:
    currplayer_vel_y = 0;
    dashing[currplayer] = 1;
    break;
   case 0x4D:
    if (!dashing[currplayer]) {
     common_dash_orb_routine();
    }

   case 0x4C:
    currplayer_vel_y = -currplayer_vel_x;
    dashing[currplayer] = 2;
    break;
   case 0x51:
    if (!dashing[currplayer]) {
     common_dash_orb_routine();
    }

   case 0x50:
    currplayer_vel_y = currplayer_vel_x;
    dashing[currplayer] = 3;
    break;
   case 0x5C:
    if (!dashing[currplayer]) {
     common_dash_orb_routine();
    }

   case 0x5B:
    currplayer_vel_y = currplayer_vel_x * 4;

    dashing[currplayer] = 4;
    break;
   case 0x5E:
    if (!dashing[currplayer]) {
     common_dash_orb_routine();
    }

   case 0x5D:
    currplayer_vel_y = -currplayer_vel_x * 4;

    dashing[currplayer] = 5;
    break;
   default:
    currplayer_vel_y = sprite_gamemode_y_adjust();

   };
 if (
  activesprites_type[index] != 0x7B &&
  activesprites_type[index] != 0x7C
 )
  ( __AX__ = index << 8, __asm__("inc %v,x", activesprites_activated), __asm__("lda %v,x", activesprites_activated), __A__);
  orbhitonthisframe[currplayer] = 1;
  }
 }
}

static void sprite_gamemode_controller_check() {
 if (controllingplayer->press & (0x80 | 0x08)) {
  ( __A__ = currplayer, __asm__("tay"), __A__ = cube_data[currplayer] & 0x01, __asm__("sta %v, y", cube_data));
  settrailstuff();
  switch (tmp4) {
  case 0x7B:
  case 0x05:
   if (!activesprites_activated[index]) {
    (currplayer_gravity ^= 0xFF); (player_gravity[0] ^= 0xFF); (player_gravity[1] ^= 0xFF);
    update_currplayer_table_idx();
    dual_cap_check();

    if (gamemode != 0x02) {
     currplayer_vel_y = (( __A__ = currplayer_table_idx, __asm__("tay"), __asm__("lda %v, y \n ldx %v, y", PAD_HEIGHT_BLUE_lo, PAD_HEIGHT_BLUE_hi), __AX__));
    } else {
     currplayer_vel_y = (( __A__ = currplayer_table_idx, __asm__("tay"), __asm__("lda %v, y \n ldx %v, y", ORB_BALL_HEIGHT_BLUE_lo, ORB_BALL_HEIGHT_BLUE_hi), __AX__));
    }
   }
   break;
  case 0x7C:
  case 0x27:
   if (!activesprites_activated[index]) {
   (currplayer_gravity ^= 0xFF); (player_gravity[0] ^= 0xFF); (player_gravity[1] ^= 0xFF);
   update_currplayer_table_idx();
   dual_cap_check();


   currplayer_vel_y = sprite_gamemode_y_adjust();
   }
   break;
  case 0x46:
   if (!dashing[currplayer]) {
    common_dash_orb_routine();
   }

  case 0x45:
   currplayer_vel_y = 0;
   dashing[currplayer] = 1;
   break;
  case 0x4D:
   if (!dashing[currplayer]) {
    common_dash_orb_routine();
   }

  case 0x4C:
   currplayer_vel_y = -currplayer_vel_x;
   dashing[currplayer] = 2;
   break;
  case 0x51:
   if (!dashing[currplayer]) {
    common_dash_orb_routine();
   }

  case 0x50:
   currplayer_vel_y = currplayer_vel_x;
   dashing[currplayer] = 3;
   break;
  case 0x5C:
   if (!dashing[currplayer]) {
    common_dash_orb_routine();
   }

  case 0x5B:
   currplayer_vel_y = currplayer_vel_x;
   currplayer_vel_x = 0;
   dashing[currplayer] = 4;
   break;
  case 0x5E:
   if (!dashing[currplayer]) {
    common_dash_orb_routine();
   }

  case 0x5D:
   currplayer_vel_y = -currplayer_vel_x;
   currplayer_vel_x = 0;
   dashing[currplayer] = 5;
   break;
  default:
   currplayer_vel_y = sprite_gamemode_y_adjust();

  };
 if (
  activesprites_type[index] != 0x7B &&
  activesprites_type[index] != 0x7C
 )
  ( __AX__ = index << 8, __asm__("inc %v,x", activesprites_activated), __asm__("lda %v,x", activesprites_activated), __A__);
 }
}



void sprite_collide_lookup() {

 static void * const sprite_collide_jump_table_0[] = {
  &&spcl_cube, &&spcl_shipufo, &&spcl_ball, &&spcl_shipufo,
  &&spcl_robot, &&spcl_orb_cmn, &&spcl_pinkorb, &&spcl_coin_1,
  &&spcl_gvdn_pt, &&spcl_gvup_pt, &&spcl_ylw_pad, &&spcl_ylw_orb,
  &&spcl_ylw_pad, &&spcl_gvdn_pd, &&spcl_gvup_pd, &&spcl_default,
  &&spcl_gvdn_pt, &&spcl_gvdn_pt, &&spcl_gvup_pt, &&spcl_gvup_pt,
  &&spcl_spd_05, &&spcl_spd_10, &&spcl_spd_20, &&spcl_spider,
  &&spcl_mini_pt, &&spcl_grow_pt, &&spcl_coin_2, &&spcl_coin_3,
  &&spcl_coin_1, &&spcl_coin_2, &&spcl_coin_3, &&spcl_ylw_big,
  &&spcl_spd_30, &&spcl_spd_40, &&spcl_dual_pt, &&spcl_sngl_pt,
  &&spcl_wave, &&spcl_pinkpad, &&spcl_pinkpad, &&spcl_grn_orb,
  &&spcl_red_orb, &&spcl_ylw_sml, &&spcl_default, &&spcl_default,
  &&spcl_default, &&spcl_default, &&spcl_default, &&spcl_default,
  &&spcl_default, &&spcl_default, &&spcl_default, &&spcl_default,
  &&spcl_default, &&spcl_default, &&spcl_default, &&spcl_default,
  &&spcl_default, &&spcl_default, &&spcl_default, &&spcl_default,
  &&spcl_default, &&spcl_default, &&spcl_default, &&spcl_default,
  &&spcl_default, &&spcl_default, &&spcl_default, &&spcl_default,
  &&spcl_blckorb, &&spcl_orb_cmn, &&spcl_orb_cmn, &&spcl_gvdn_pt,
  &&spcl_gvup_pt, &&spcl_default, &&spcl_default, &&spcl_swing,
  &&spcl_orb_cmn, &&spcl_orb_cmn, &&spcl_tlpt_pt, &&spcl_default,
  &&spcl_orb_cmn, &&spcl_orb_cmn, &&spcl_red_pad, &&spcl_red_pad,
  &&spcl_sporbup, &&spcl_sporbdn, &&spcl_sppadup, &&spcl_sppaddn,
  &&spcl_ninja, &&spcl_tlpt_sq, &&spcl_default, &&spcl_orb_cmn,
  &&spcl_orb_cmn, &&spcl_orb_cmn, &&spcl_orb_cmn, &&spcl_gv13_pt,
  &&spcl_gv12_pt, &&spcl_gv23_pt, &&spcl_gv2x_pt, &&spcl_gv1x_pt,
  &&spcl_rndmode, &&spcl_grn_pad, &&spcl_tlpt_pt, &&spcl_default,
  &&spcl_tlpt_pt, &&spcl_default, &&spcl_pogo, &&spcl_snake,
  &&spcl_footb, &&spcl_spdslow, &&spcl_minicoi, &&spcl_default,
  &&spcl_default, &&spcl_default, &&spcl_default, &&spcl_default,
  &&spcl_default, &&spcl_tlpt_pt, &&spcl_default, &&spcl_tlpt_pt,
  &&spcl_default, &&spcl_skl_orb, &&spcl_wht_orb, &&spcl_orb_cmn,
  &&spcl_orb_cmn, &&spcl_suprrnd, &&spcl_default
 };
 static void * const sprite_collide_jump_table_1[] = {
  &&spcl_default, &&spcl_default, &&spcl_default, &&spcl_default,
  &&spcl_default, &&spcl_default, &&spcl_default, &&spcl_default,
  &&spcl_default, &&spcl_default, &&spcl_default, &&spcl_default,
  &&spcl_default, &&spcl_default, &&spcl_default, &&spcl_default,
  &&spcl_default, &&spcl_default, &&spcl_default, &&spcl_default,
  &&spcl_default, &&spcl_default, &&spcl_default, &&spcl_default,
  &&spcl_default, &&spcl_default, &&spcl_default, &&spcl_default,
  &&spcl_default, &&spcl_default, &&spcl_default, &&spcl_default,
  &&spcl_default, &&spcl_default, &&spcl_default, &&spcl_default,
  &&spcl_default, &&spcl_default, &&spcl_default, &&spcl_default,
  &&spcl_default, &&spcl_default, &&spcl_default, &&spcl_default,
  &&spcl_default, &&spcl_default, &&spcl_default, &&spcl_default,
  &&spcl_default, &&spcl_default, &&spcl_default, &&spcl_default,
  &&spcl_default, &&spcl_default, &&spcl_default, &&spcl_default,
  &&spcl_default, &&spcl_default, &&spcl_default, &&spcl_default,
  &&spcl_default, &&spcl_default, &&spcl_default, &&spcl_default,
  &&spcl_default, &&spcl_default, &&spcl_default, &&spcl_default,
  &&spcl_default, &&spcl_default, &&spcl_default, &&spcl_default,
  &&spcl_default, &&spcl_default, &&spcl_default, &&spcl_default,
  &&spcl_default, &&spcl_default, &&spcl_default, &&spcl_default,
  &&spcl_default, &&spcl_default, &&spcl_default, &&spcl_default,
  &&spcl_default, &&spcl_default, &&spcl_default, &&spcl_default,
  &&spcl_default, &&spcl_default, &&spcl_default, &&spcl_default,
  &&spcl_default, &&spcl_default, &&spcl_default, &&spcl_default,
  &&spcl_default, &&spcl_default, &&spcl_default, &&spcl_default,
  &&spcl_default, &&spcl_default, &&spcl_default, &&spcl_default,
  &&spcl_default, &&spcl_default, &&spcl_default, &&spcl_default,
  &&spcl_default, &&spcl_tlpt_pt, &&spcl_default, &&spcl_default,
  &&spcl_default, &&spcl_default, &&spcl_default, &&spcl_default,
  &&spcl_default, &&spcl_default, &&spcl_f_block, &&spcl_j_block,
  &&spcl_h_block, &&spcl_s_block, &&spcl_d_block, &&spcl_gvup_pt,
  &&spcl_gvdn_pt, &&spcl_gvdn_pd, &&spcl_gvup_pd
 };
 if (activesprites_activated[index] && !dual && !(options & 0x04) && !force_platformer)
  return;


 if (tmp4 < 0x7F)
  goto *sprite_collide_jump_table_0[tmp4];
 else if (tmp4 == 0x7F) return;
 else if (tmp4 >= 0x80)
  ( __A__ = tmp4 << 1, __asm__("tay \n lda %v-%w, y \n ldx %v-%w+1, y \n jsr callax ", sprite_collide_jump_table_1, (0 * 2), sprite_collide_jump_table_1, (0 * 2)));

 spcl_default:
  return;



 spcl_skl_orb:
  activesprites_animated[index] = 1;
  if ((gamemode == 0x00 || gamemode == 0x09 ||gamemode == 0x02 || gamemode == 0x04 || gamemode == 0x08 || gamemode == 0x05 || gamemode >= 0x07) && cube_data[currplayer] & 0x02) {
   if (controllingplayer->hold & (0x80 | 0x08)) {
    ( __A__ = currplayer, __asm__("tay"), __A__ = cube_data[currplayer] | 0x01, __asm__("sta %v, y", cube_data));
    activesprites_animated[index] = 0;
   }
  } else {
   if (controllingplayer->press & (0x80 | 0x08)) {
    ( __A__ = currplayer, __asm__("tay"), __A__ = cube_data[currplayer] | 0x01, __asm__("sta %v, y", cube_data));
    activesprites_animated[index] = 0;
   }
  }
  return;

 spcl_wht_orb:
  if ((gamemode == 0x00 || gamemode == 0x09 || gamemode == 0x02 || gamemode == 0x04 || gamemode == 0x08 || gamemode == 0x05 || gamemode >= 0x07) && cube_data[currplayer] & 0x02) {
   if (controllingplayer->hold & (0x80 | 0x08)) {
    currplayer_vel_y = 0;
    activesprites_activated[index] = 1;
   }
  } else {
   if (controllingplayer->press & (0x80 | 0x08)) {
    currplayer_vel_y = 0;
    activesprites_activated[index] = 1;
   }
  }

  return;

 spcl_cube:
  orbactive = 0;
  robotjumpframe[0] = 0;
  robotjumpframe[1] = 0;
  exitPortalTimer = 10;
  if (gamemode == 0x06 || gamemode == 0x0A) currplayer_vel_y = 0;
  if (retro_mode) gamemode = 0x04;
  else gamemode = 0x00;
  clearrobotjumpframes();
  return;

 spcl_shipufo:
  settrailstuff();

 spcl_ball:
  if (gamemode != tmp4) currplayer_vel_y /= 2;
  gamemode = tmp4;
  activesprites_activated[index] = 1;
  gamemode_stuff();
  return;

 spcl_robot:
  exitPortalTimer = 10;
  if (gamemode == 0x06 || gamemode == 0x0A) currplayer_vel_y /= 2;
  gamemode = 0x04;
  clearrobotjumpframes();
  return;

 spcl_spider:
  if (gamemode == 0x06 || gamemode == 0x0A) currplayer_vel_y = 0;
  gamemode = 0x05;
  gamemode_stuff();
  return;

 spcl_wave:
  settrailstuff();
  gamemode = 0x06;
  gamemode_stuff();
  return;

 spcl_snake:
  settrailstuff();
  gamemode = 0x0A;
  gamemode_stuff();
  return;

 spcl_footb:
  gamemode = 0x0B;
  gamemode_stuff();
  return;

 spcl_pogo:
  settrailstuff();
  if (gamemode == 0x06 || gamemode == 0x0A) currplayer_vel_y = 0;
  gamemode = 0x09;
  gamemode_stuff();
  return;

 spcl_swing:
  settrailstuff();
  if (gamemode == 0x06 || gamemode == 0x0A) currplayer_vel_y = 0;
  gamemode = 0x07;
  gamemode_stuff();
  return;

 spcl_ninja:

   if (gamemode == 0x06 || gamemode == 0x0A) currplayer_vel_y = 0;
   gamemode = 0x08;
   clearrobotjumpframes();

  return;

 spcl_rndmode:

   if (gamemode == 0x06 || gamemode == 0x0A) currplayer_vel_y = 0;
   gamemode = newrand() & 7;
   ( __AX__ = index << 8, __asm__("inc %v,x", activesprites_activated), __asm__("lda %v,x", activesprites_activated), __A__);
   gamemode_stuff();

  return;

 spcl_suprrnd:

   if (gamemode == 0x06 || gamemode == 0x0A) currplayer_vel_y = 0;
   do {
    gamemode = newrand() & 15;
   } while (gamemode > 0x0B);
   ( __AX__ = index << 8, __asm__("inc %v,x", activesprites_activated), __asm__("lda %v,x", activesprites_activated), __A__);
   gamemode_stuff();

  return;

 spcl_minicoi:
  minicoins++;
  activesprites_type[index] = 0xFF;
  return;



 spcl_gvdn_pt:
  if (!currplayer_gravity)
   return;
  currplayer_gravity = 0x00;
  goto spcl_gvity_portal_common;

 spcl_gvup_pt:
  if (currplayer_gravity)
   return;
  currplayer_gravity = 0xFF;

 spcl_gvity_portal_common:
  settrailstuff();
  currplayer_vel_y /= 2;
  robotjumptime[currplayer] = 0;
  ( __AX__ = index << 8, __asm__("inc %v,x", activesprites_activated), __asm__("lda %v,x", activesprites_activated), __A__);
  update_currplayer_table_idx();
  return;


 spcl_spd_05: speed = 1; return;
 spcl_spd_10: speed = 0; return;
 spcl_spd_20: speed = 2; return;
 spcl_spd_30: speed = 3; return;
 spcl_spd_40: speed = 4; return;
 spcl_spdslow: speed = 5; return;


 spcl_gv1x_pt:

   gravity_mod = 0;

  return;

 spcl_gv13_pt:

   gravity_mod = 1;

  return;

 spcl_gv12_pt:

   gravity_mod = 2;

  return;

 spcl_gv23_pt:

   gravity_mod = 3;

  return;

 spcl_gv2x_pt:

   gravity_mod = 4;

  return;


 spcl_mini_pt:
  currplayer_mini = 1;
  player_mini[0] = 1;
  player_mini[1] = 1;
  update_currplayer_table_idx();
  return;

 spcl_grow_pt:
  currplayer_mini = 0;
  player_mini[0] = 0;
  player_mini[1] = 0;
  update_currplayer_table_idx();
  return;





 spcl_dual_pt:
  if (!activesprites_activated[index]) {
   dual = 1;
   target_scroll_y = (( __A__ = index, __asm__("tay"), __asm__("lda %v, y \n ldx %v, y", activesprites_y_lo, activesprites_y_hi), __AX__) - 0x3A);
   if (twoplayer) { player_gravity[1] = player_gravity[0] ^ 0xFF; }
   else {
    player_x[1] = player_x[0]; player_y[1] = currplayer_y;
    player_gravity[1] = currplayer_gravity ^ 0xFF;
    player_vel_y[1] = -currplayer_vel_y; player_mini[1] = player_mini[0];
   }

   activesprites_activated[index] = 1;
  }
  return;

 spcl_sngl_pt:
  if (!activesprites_activated[index]) {
   if (!twoplayer) { dual = 0; player_y[0] = currplayer_y; player_gravity[0] = currplayer_gravity; player_vel_y[0] = currplayer_vel_y; }
   else { player_gravity[1] = player_gravity[0]; }
   activesprites_activated[index] = 1;


   exitPortalTimer = 10;
  }
  return;


 spcl_tlpt_sq:
  if ((cube_data[currplayer] & 2) || (controllingplayer->press & (0x80 | 0x08))) {
   currplayer_vel_y = 0;
   orbed[currplayer] = 1;
   ( __A__ = currplayer, __asm__("tay"), __A__ = cube_data[currplayer] & 1, __asm__("sta %v, y", cube_data));
 spcl_tlpt_pt:
   *((uint8_t*)&currplayer_y+1) = teleport_output;
  }
  return;


 spcl_s_block:
  if (dashing[currplayer]){
   dashing[currplayer] = 0; orbed[currplayer] = 1; currplayer_vel_y = 0;
  }
  return;
 spcl_h_block: hblocked[currplayer] = 1; return;
 spcl_j_block: jblocked[currplayer] = 1; orbed[currplayer] = 1; return;
 spcl_d_block: dblocked[currplayer] = 1; return;
 spcl_f_block: fblocked[currplayer] = 1; return;


 spcl_coin_1:
  if (practice_point_count) return;
  if (coin1_timer) return;
  coins |= 0x01;
  coin1_timer = 1;
  coin1_speed = 0x0200;
  goto spcl_coin_common;

 spcl_coin_2:
  if (practice_point_count) return;
  if (coin2_timer) return;
  coins |= 0x02;
  coin2_timer = 1;
  coin2_speed = 0x0200;
  goto spcl_coin_common;

 spcl_coin_3:
  if (practice_point_count) return;
  if (coin3_timer) return;
  coins |= 0x04;
  coin3_timer = 1;
  coin3_speed = 0x0200;

 spcl_coin_common:
  (__AX__ = (uint16_t)((((0)&0xFF)))<<8|3, _sfx_play(__AX__));
  animating = 1;
  return;



 spcl_ylw_pad:
  tmp3 = 0x01 << 3;
  pad_stuff();
  return;
 spcl_pinkpad:
  tmp3 = 0x03 << 3;
  pad_stuff();
  return;
 spcl_red_pad:
  tmp3 = 0x08 << 3;
  pad_stuff();
  return;

 spcl_grn_pad:

  (currplayer_gravity ^= 0xFF); (player_gravity[0] ^= 0xFF); (player_gravity[1] ^= 0xFF);
  update_currplayer_table_idx();
  tmp3 = 0x00 << 3;
  pad_stuff();
  ( __AX__ = index << 8, __asm__("inc %v,x", activesprites_activated), __asm__("lda %v,x", activesprites_activated), __A__);

  return;

 spcl_gvdn_pd:
  clear_slope_stuff();
  if (!currplayer_gravity) {
   settrailstuff();
   currplayer_gravity = 0xFF;
   update_currplayer_table_idx();
   currplayer_vel_y = (( __A__ = currplayer_table_idx, __asm__("tay"), __asm__("lda %v, y \n ldx %v, y", PAD_HEIGHT_BLUE_lo, PAD_HEIGHT_BLUE_hi), __AX__));
   orbhitonthisframe[currplayer] = 1;
  }
  ( __AX__ = index << 8, __asm__("inc %v,x", activesprites_activated), __asm__("lda %v,x", activesprites_activated), __A__);
  return;

 spcl_gvup_pd:
  clear_slope_stuff();
  if (currplayer_gravity) {
   settrailstuff();
   currplayer_gravity = 0x00;
   update_currplayer_table_idx();
   currplayer_vel_y = (( __A__ = currplayer_table_idx, __asm__("tay"), __asm__("lda %v, y \n ldx %v, y", PAD_HEIGHT_BLUE_lo, PAD_HEIGHT_BLUE_hi), __AX__));
   orbhitonthisframe[currplayer] = 1;

  }
  ( __AX__ = index << 8, __asm__("inc %v,x", activesprites_activated), __asm__("lda %v,x", activesprites_activated), __A__);
  return;


 spcl_sporbup:
  if ((cube_data[currplayer] & 2) || (controllingplayer->press & (0x80 | 0x08))) {
   ( __A__ = currplayer, __asm__("tay"), __A__ = cube_data[currplayer] & 1, __asm__("sta %v, y", cube_data));
 spcl_sppadup:
   *((uint8_t*)&currplayer_y+1) -= eject_D;
   currplayer_vel_y = 0;
   currplayer_gravity = 0xFF;
   update_currplayer_table_idx();
   (__asm__("lda #<%v \n ldx #>%v \n ldy #<.bank(%v) \n jsr crossPRGBankJump ", spider_up_wait, spider_up_wait, spider_up_wait), __asm__("lda ptr3 \n ldx ptr3+1"), __AX__);
   *((uint8_t*)&currplayer_y+1) -= eject_U;
   currplayer_vel_y = 0;
   orbed[currplayer] = 1;
   ( __AX__ = index << 8, __asm__("inc %v,x", activesprites_activated), __asm__("lda %v,x", activesprites_activated), __A__);
  }
  return;
 spcl_sporbdn:
  if ((cube_data[currplayer] & 2) || (controllingplayer->press & (0x80 | 0x08))) {
   ( __A__ = currplayer, __asm__("tay"), __A__ = cube_data[currplayer] & 1, __asm__("sta %v, y", cube_data));
 spcl_sppaddn:
   *((uint8_t*)&currplayer_y+1) -= eject_U + 1;
   currplayer_vel_y = 0;
   currplayer_gravity = 0x00;
   update_currplayer_table_idx();
   (__asm__("lda #<%v \n ldx #>%v \n ldy #<.bank(%v) \n jsr crossPRGBankJump ", spider_down_wait, spider_down_wait, spider_down_wait), __asm__("lda ptr3 \n ldx ptr3+1"), __AX__);
   *((uint8_t*)&currplayer_y+1) -= eject_D;
   currplayer_vel_y = 0;
   orbed[currplayer] = 1;
   ( __AX__ = index << 8, __asm__("inc %v,x", activesprites_activated), __asm__("lda %v,x", activesprites_activated), __A__);
  }
  return;

 spcl_ylw_orb:
  tmp3 = 0x00 << 3;

  goto spcl_orb_cmn;
 spcl_grn_orb:

  tmp3 = 0x00 << 3;
  goto spcl_orb_cmn;




 spcl_ylw_big:
  tmp3 = 0x05 << 3;
  goto spcl_orb_cmn;

 spcl_ylw_sml:
  tmp3 = 0x07 << 3;
  goto spcl_orb_cmn;

 spcl_pinkorb:
  tmp3 = 0x02 << 3;
  goto spcl_orb_cmn;

 spcl_blckorb:
  tmp3 = 0x06 << 3;
  goto spcl_orb_cmn;

 spcl_red_orb:
  tmp3 = 0x04 << 3;


 spcl_orb_cmn:
  ufo_orbed[currplayer] = 1;
  if (gamemode == 0x00 || gamemode == 0x09 || gamemode == 0x02 || gamemode == 0x04 || gamemode == 0x08 || gamemode == 0x05 || gamemode >= 0x07) {
   sprite_gamemode_main();
  } else {
   sprite_gamemode_controller_check();
  }
  update_currplayer_table_idx();
  return;
}




void sprite_collide(){
 if (gamemode != 0x06) {
  Generic.width = CUBE_WIDTH[currplayer_mini];
  Generic.height = CUBE_HEIGHT[currplayer_mini];
 } else {
  Generic.width = 0x08;
  Generic.height = 0x08;
 }

 Generic.x = *((uint8_t*)&currplayer_x+1) + 1;
 Generic.y = *((uint8_t*)&currplayer_y+1) + ((((0x10 - Generic.height)&0xFF)) >> 1);

 index = 0;

 do {
  tmp3 = activesprites_active[index];
  if (tmp3){
   tmp4 = activesprites_type[index];

   tmp2 = sprite_heights[tmp4];
   tmp9 = sprite_widths[tmp4];
   switch (tmp2) {

    case 0xFE:
     if (twoplayer || !viseffects) activesprites_type[index] = 0xFF;
     continue;

    case 0xFD:
     if (discomode) {
      activesprites_type[index] = 0xFF; continue;
     }
     tmp2 = (tmp4 & 0x3F);

     if (tmp2 == 0x20) tmp2 = 0x30;

     if (tmp4 == 0x9F) {
      ( PAL_BUF_RAW[0&0x1F] = (icon_colors[0]), __A__ = (icon_colors[0]), __asm__("tay"), __asm__("lda (%v), y", PAL_PTR), PAL_BUF[0&0x1F] = __A__);
      ( PAL_BUF_RAW[1&0x1F] = ((__A__ = icon_colors[0], __asm__("tay"), __asm__("lda palBrightTable%s, y", 3), __A__)), __A__ = ((__A__ = icon_colors[0], __asm__("tay"), __asm__("lda palBrightTable%s, y", 3), __A__)), __asm__("tay"), __asm__("lda (%v), y", PAL_PTR), PAL_BUF[1&0x1F] = __A__);
      ( PAL_BUF_RAW[9&0x1F] = ((__A__ = icon_colors[0], __asm__("tay"), __asm__("lda palBrightTable%s, y", 3), __A__)), __A__ = ((__A__ = icon_colors[0], __asm__("tay"), __asm__("lda palBrightTable%s, y", 3), __A__)), __asm__("tay"), __asm__("lda (%v), y", PAL_PTR), PAL_BUF[9&0x1F] = __A__);
      lastbgcolortype = tmp4;
     }

     else if (tmp4 == 0xAE) {
      ( PAL_BUF_RAW[6&0x1F] = (icon_colors[1]), __A__ = (icon_colors[1]), __asm__("tay"), __asm__("lda (%v), y", PAL_PTR), PAL_BUF[6&0x1F] = __A__);
      ( PAL_BUF_RAW[5&0x1F] = ((__A__ = icon_colors[1], __asm__("tay"), __asm__("lda palBrightTable%s, y", 3), __A__)), __A__ = ((__A__ = icon_colors[1], __asm__("tay"), __asm__("lda palBrightTable%s, y", 3), __A__)), __asm__("tay"), __asm__("lda (%v), y", PAL_PTR), PAL_BUF[5&0x1F] = __A__);
      lastgcolortype = tmp4;
     }
     else if (tmp4 >= 0xC0){
      ( PAL_BUF_RAW[6&0x1F] = (tmp2), __A__ = (tmp2), __asm__("tay"), __asm__("lda (%v), y", PAL_PTR), PAL_BUF[6&0x1F] = __A__);
      ( PAL_BUF_RAW[5&0x1F] = ((__A__ = tmp2, __asm__("tay"), __asm__("lda palBrightTable%s, y", 3), __A__)), __A__ = ((__A__ = tmp2, __asm__("tay"), __asm__("lda palBrightTable%s, y", 3), __A__)), __asm__("tay"), __asm__("lda (%v), y", PAL_PTR), PAL_BUF[5&0x1F] = __A__);
      lastgcolortype = tmp4;
     } else {
      ( PAL_BUF_RAW[0&0x1F] = (tmp2), __A__ = (tmp2), __asm__("tay"), __asm__("lda (%v), y", PAL_PTR), PAL_BUF[0&0x1F] = __A__);
      ( PAL_BUF_RAW[1&0x1F] = ((__A__ = tmp2, __asm__("tay"), __asm__("lda palBrightTable%s, y", 3), __A__)), __A__ = ((__A__ = tmp2, __asm__("tay"), __asm__("lda palBrightTable%s, y", 3), __A__)), __asm__("tay"), __asm__("lda (%v), y", PAL_PTR), PAL_BUF[1&0x1F] = __A__);
      ( PAL_BUF_RAW[9&0x1F] = ((__A__ = tmp2, __asm__("tay"), __asm__("lda palBrightTable%s, y", 3), __A__)), __A__ = ((__A__ = tmp2, __asm__("tay"), __asm__("lda palBrightTable%s, y", 3), __A__)), __asm__("tay"), __asm__("lda (%v), y", PAL_PTR), PAL_BUF[9&0x1F] = __A__);
      ( PAL_BUF_RAW[0x0D&0x1F] = ((__A__ = tmp2, __asm__("tay"), __asm__("lda palBrightTable%s, y", 3), __A__)), __A__ = ((__A__ = tmp2, __asm__("tay"), __asm__("lda palBrightTable%s, y", 3), __A__)), __asm__("tay"), __asm__("lda (%v), y", PAL_PTR), PAL_BUF[0x0D&0x1F] = __A__);
      lastbgcolortype = tmp4;
     }
     ++PAL_UPDATE;;
     activesprites_type[index] = 0xFF;

    case 0:
     continue;

    case 0xFC:

     if (tmp4 == 0xAF) outline_color = icon_colors[0];
     else outline_color = ( __A__ = tmp4 & 0x0F, __asm__("tay"), __asm__("ldx #0 \n lda %v, y", OUTLINES), __A__);
     activesprites_type[index] = 0xFF;
     continue;

    case 0xFF:
     if ((tmp2 = sprite_load_special_behavior()) == 0) continue;
   }
   Generic2.height = tmp2;
   Generic2.width = tmp9;

   {__AX__ = 0; __A__ = ( __A__ = tmp4, __asm__("tay"), __asm__("ldx #0 \n lda %v, y", sprite_x_offset), __A__); do { __asm__("j" "pl" " %s", 1220); do {__asm__("dex");} while(0); __asm__("%s:", 1220); } while(0);};
   cc65_ptr2 = __AX__ + activesprites_realx[index];
   if (*((uint8_t*)&cc65_ptr2+1) != 0)
    Generic2.x = (*((uint8_t*)&cc65_ptr2+1) >= 0x80 ? 0x00 : 0xFF);
   else
    Generic2.x = *((uint8_t*)&cc65_ptr2);

   {__AX__ = 0; __A__ = ( __A__ = tmp4, __asm__("tay"), __asm__("ldx #0 \n lda %v, y", sprite_y_offset), __A__); do { __asm__("j" "pl" " %s", 1227); do {__asm__("dex");} while(0); __asm__("%s:", 1227); } while(0);};
   cc65_ptr2 = __AX__ + activesprites_realy[index];
   if (*((uint8_t*)&cc65_ptr2+1) != 0)
    Generic2.y = (*((uint8_t*)&cc65_ptr2+1) >= 0x80 ? 0x00 : 0xFF);
   else
    Generic2.y = *((uint8_t*)&cc65_ptr2);

   if (check_collision()) {
    sprite_collide_lookup();
   }

   else if (activesprites_type[index] == 0x79 && activesprites_animated[index] == 1) activesprites_animated[index] = 2;
  }
 } while (++index < 16);
 if (gamemode != 0x06) {
  Generic.width = CUBE_WIDTH[currplayer_mini];
 } else {
  Generic.width = 0x08;
 }
 Generic.height = CUBE_HEIGHT[currplayer_mini];
}


void settrailstuff() {
 if (forced_trails != 2 && !orbactive) {
  orbactive = 1;
 }
}

void clearrobotjumpframes() {
 robotjumpframe[0] = 0;
 robotjumpframe[1] = 0;
}

void dual_cap_check() {
 if (dual && !twoplayer) {

  __AX__ = player_vel_y[(currplayer^1)&0x7F] / 2;

  __asm__("sta %v, y \n txa \n sta %v+1, y", player_vel_y, player_vel_y);
 }
}

_Pragma ("code-name(pop)")
_Pragma ("data-name(pop)")
_Pragma ("rodata-name(pop)")
#line 66 "SAUCE/include.h"
#line 1 "SAUCE/functions/practice_state.h"
_Pragma ("code-name(push, \"XCD_BANK_04\" )") _Pragma ("data-name(push, \"XCD_BANK_04\" )") _Pragma ("rodata-name(push, \"XCD_BANK_04\" )")


const uint8_t multBufLookup[] = {0, 11, 22, 33, 44, 55, 66, 77};

const uint8_t multStateLookup_lo[] = {
 (((((0*172)&0xFF)))), (((((1*172)&0xFF)))), (((((2*172)&0xFF)))), (((((3*172)&0xFF)))),
 (((((4*172)&0xFF)))), (((((5*172)&0xFF)))), (((((6*172)&0xFF)))), (((((7*172)&0xFF)))),
};
const uint8_t multStateLookup_hi[] = {
 (((((0*172>>8)&0xFF)))), (((((1*172>>8)&0xFF)))), (((((2*172>>8)&0xFF)))), (((((3*172>>8)&0xFF)))),
 (((((4*172>>8)&0xFF)))), (((((5*172>>8)&0xFF)))), (((((6*172>>8)&0xFF)))), (((((7*172>>8)&0xFF)))),
};

extern uint16_t old_draw_scroll_y;

extern uint8_t famistudio_state[172];
extern uint8_t famistudio_output_buf[11];


void store_practice_state(){

 if (!practice_point_count) {
  if (!practice_music_sync)
   music_play(3);
  latest_practice_point = 0;
 } else {
  latest_practice_point++;
  latest_practice_point &= 7;
 }

 if (practice_point_count < 8)
  practice_point_count++;

 tmp1 = latest_practice_point;

 curr_practice_point = latest_practice_point;
 ( __A__ = tmp1, __asm__("tay"), __AX__ = player_x[0], __asm__("sta %v, y \n txa \n sta %v, y", practice_player_1_x_lo, practice_player_1_x_hi), __AX__);
 ( __A__ = (__asm__("tya"), __A__), __asm__("tay"), __AX__ = player_x[1], __asm__("sta %v, y \n txa \n sta %v, y", practice_player_2_x_lo, practice_player_2_x_hi), __AX__);
 ( __A__ = (__asm__("tya"), __A__), __asm__("tay"), __AX__ = player_y[0], __asm__("sta %v, y \n txa \n sta %v, y", practice_player_1_y_lo, practice_player_1_y_hi), __AX__);
 ( __A__ = (__asm__("tya"), __A__), __asm__("tay"), __AX__ = player_y[1], __asm__("sta %v, y \n txa \n sta %v, y", practice_player_2_y_lo, practice_player_2_y_hi), __AX__);
 ( __A__ = (__asm__("tya"), __A__), __asm__("tay"), __AX__ = player_vel_x[0], __asm__("sta %v, y \n txa \n sta %v, y", practice_player_1_vel_x_lo, practice_player_1_vel_x_hi), __AX__);
 ( __A__ = (__asm__("tya"), __A__), __asm__("tay"), __AX__ = player_vel_x[1], __asm__("sta %v, y \n txa \n sta %v, y", practice_player_2_vel_x_lo, practice_player_2_vel_x_hi), __AX__);
 ( __A__ = (__asm__("tya"), __A__), __asm__("tay"), __AX__ = player_vel_y[0], __asm__("sta %v, y \n txa \n sta %v, y", practice_player_1_vel_y_lo, practice_player_1_vel_y_hi), __AX__);
 ( __A__ = (__asm__("tya"), __A__), __asm__("tay"), __AX__ = player_vel_y[1], __asm__("sta %v, y \n txa \n sta %v, y", practice_player_2_vel_y_lo, practice_player_2_vel_y_hi), __AX__);
 ( __A__ = (__asm__("tya"), __A__), __asm__("tay"), __AX__ = cube_rotate[0], __asm__("sta %v, y \n txa \n sta %v, y", practice_cube_1_rotate_lo, practice_cube_1_rotate_hi), __AX__);
 ( __A__ = (__asm__("tya"), __A__), __asm__("tay"), __AX__ = cube_rotate[1], __asm__("sta %v, y \n txa \n sta %v, y", practice_cube_2_rotate_lo, practice_cube_2_rotate_hi), __AX__);

 ( __A__ = (__asm__("tya"), __A__), __asm__("tay"), __A__ = nocamlockforced, __asm__("sta %v, y", practice_nocamlockforced));
 ( __A__ = (__asm__("tya"), __A__), __asm__("tay"), __A__ = song, __asm__("sta %v, y", practice_song));
 ( __A__ = (__asm__("tya"), __A__), __asm__("tay"), __A__ = player_gravity[0], __asm__("sta %v, y", practice_player_1_gravity));
 ( __A__ = (__asm__("tya"), __A__), __asm__("tay"), __A__ = player_gravity[1], __asm__("sta %v, y", practice_player_2_gravity));
 ( __A__ = (__asm__("tya"), __A__), __asm__("tay"), __A__ = player_mini[0], __asm__("sta %v, y", practice_player_1_mini));
 ( __A__ = (__asm__("tya"), __A__), __asm__("tay"), __A__ = player_mini[1], __asm__("sta %v, y", practice_player_2_mini));
 ( __A__ = (__asm__("tya"), __A__), __asm__("tay"), __A__ = slope_frames[0], __asm__("sta %v, y", practice_player_1_slope_frames));
 ( __A__ = (__asm__("tya"), __A__), __asm__("tay"), __A__ = slope_frames[1], __asm__("sta %v, y", practice_player_2_slope_frames));
 ( __A__ = (__asm__("tya"), __A__), __asm__("tay"), __A__ = was_on_slope_counter[0], __asm__("sta %v, y", practice_player_1_was_on_slope_counter));
 ( __A__ = (__asm__("tya"), __A__), __asm__("tay"), __A__ = was_on_slope_counter[1], __asm__("sta %v, y", practice_player_2_was_on_slope_counter));
 ( __A__ = (__asm__("tya"), __A__), __asm__("tay"), __A__ = slope_type[0], __asm__("sta %v, y", practice_player_1_slope_type));
 ( __A__ = (__asm__("tya"), __A__), __asm__("tay"), __A__ = slope_type[1], __asm__("sta %v, y", practice_player_2_slope_type));
 ( __A__ = (__asm__("tya"), __A__), __asm__("tay"), __A__ = last_slope_type[0], __asm__("sta %v, y", practice_player_1_last_slope_type));
 ( __A__ = (__asm__("tya"), __A__), __asm__("tay"), __A__ = last_slope_type[1], __asm__("sta %v, y", practice_player_2_last_slope_type));

 ( __A__ = (__asm__("tya"), __A__), __asm__("tay"), __AX__ = *((uint16_t*)&scroll_x), __asm__("sta %v, y \n txa \n sta %v, y", practice_scroll_x_lo, practice_scroll_x_md), __AX__ = *((uint16_t*)&scroll_x+1), __asm__("sta %v, y \n txa \n sta %v, y", practice_scroll_x_hi, practice_scroll_x_ex) );
 ( __A__ = (__asm__("tya"), __A__), __asm__("tay"), __AX__ = scroll_y, __asm__("sta %v, y \n txa \n sta %v, y", practice_scroll_y_lo, practice_scroll_y_hi), __AX__);
 ( __A__ = (__asm__("tya"), __A__), __asm__("tay"), __A__ = scroll_y_subpx, __asm__("sta %v, y", practice_scroll_y_subpx));
 ( __A__ = (__asm__("tya"), __A__), __asm__("tay"), __AX__ = seam_scroll_y, __asm__("sta %v, y \n txa \n sta %v, y", practice_seam_scroll_y_lo, practice_seam_scroll_y_hi), __AX__);
 ( __A__ = (__asm__("tya"), __A__), __asm__("tay"), __AX__ = old_draw_scroll_y, __asm__("sta %v, y \n txa \n sta %v, y", practice_old_draw_scroll_y_lo, practice_old_draw_scroll_y_hi), __AX__);
 ( __A__ = (__asm__("tya"), __A__), __asm__("tay"), __AX__ = target_scroll_y, __asm__("sta %v, y \n txa \n sta %v, y", practice_target_scroll_y_lo, practice_target_scroll_y_hi), __AX__);
 ( __A__ = (__asm__("tya"), __A__), __asm__("tay"), __AX__ = min_scroll_y, __asm__("sta %v, y \n txa \n sta %v, y", practice_min_scroll_y_lo, practice_min_scroll_y_hi), __AX__);

 ( __A__ = (__asm__("tya"), __A__), __asm__("tay"), __A__ = player_invis, __asm__("sta %v, y", practice_player_invis));
 ( __A__ = (__asm__("tya"), __A__), __asm__("tay"), __A__ = gamemode, __asm__("sta %v, y", practice_player_gamemode));
 ( __A__ = (__asm__("tya"), __A__), __asm__("tay"), __A__ = dual, __asm__("sta %v, y", practice_dual));
 ( __A__ = (__asm__("tya"), __A__), __asm__("tay"), __A__ = speed, __asm__("sta %v, y", practice_speed));
 ( __A__ = (__asm__("tya"), __A__), __asm__("tay"), __A__ = parallax_scroll_x, __asm__("sta %v, y", practice_parallax_scroll_x));
 ( __A__ = (__asm__("tya"), __A__), __asm__("tay"), __A__ = lastbgcolortype, __asm__("sta %v, y", practice_bg_color_type));
 ( __A__ = (__asm__("tya"), __A__), __asm__("tay"), __A__ = lastgcolortype, __asm__("sta %v, y", practice_g_color_type));
 ( __A__ = (__asm__("tya"), __A__), __asm__("tay"), __A__ = outline_color, __asm__("sta %v, y", practice_outline_color));
 ( __A__ = (__asm__("tya"), __A__), __asm__("tay"), __A__ = orbactive, __asm__("sta %v, y", practice_orbactive));
 ( __A__ = (__asm__("tya"), __A__), __asm__("tay"), __A__ = nullscapes_active, __asm__("sta %v, y", practice_nullscapes_active));
 ( __A__ = (__asm__("tya"), __A__), __asm__("tay"), __A__ = nullscapes_orb_type, __asm__("sta %v, y", practice_nullscapes_orb_type));
 ( __A__ = (__asm__("tya"), __A__), __asm__("tay"), __A__ = disco_sprites, __asm__("sta %v, y", practice_disco_sprites));
 ( __A__ = (__asm__("tya"), __A__), __asm__("tay"), __A__ = slowmode, __asm__("sta %v, y", practice_slowmode));
 ( __A__ = (__asm__("tya"), __A__), __asm__("tay"), __A__ = forced_trails, __asm__("sta %v, y", practice_forced_trails));
 ( __A__ = (__asm__("tya"), __A__), __asm__("tay"), __A__ = gravity_mod, __asm__("sta %v, y", practice_gravity_mod));
 ( __A__ = (__asm__("tya"), __A__), __asm__("tay"), __A__ = kandoframecnt, __asm__("sta %v, y", practice_kandoframecnt));

 if (practice_music_sync) {
  (((const void ** const)xargs)[0] = practice_famistudio_state + ( __A__ = tmp1, __asm__("tay"), __asm__("lda %v, y \n ldx %v, y", multStateLookup_lo, multStateLookup_hi), __AX__), (__AX__ = (uintptr_t)famistudio_state, __EAX__<<=16), __AX__ = 172, _memcpy(__EAX__));
  (((const void ** const)xargs)[0] = practice_famistudio_registers + multBufLookup[tmp1], (__AX__ = (uintptr_t)famistudio_output_buf, __EAX__<<=16), __AX__ = 11, _memcpy(__EAX__));
    }
 practice_sprite_x_pos = *((uint8_t*)&player_x[0]+1);
 auto_practicepoint_timer = 200;

}


void load_practice_state() {

 tmp2 = curr_practice_point;
 player_x[0] = ( __A__ = tmp2, __asm__("tay"), __asm__("lda %v, y \n ldx %v, y", practice_player_1_x_lo, practice_player_1_x_hi), __AX__);
 player_x[1] = ( __A__ = (__asm__("tya"), __A__), __asm__("tay"), __asm__("lda %v, y \n ldx %v, y", practice_player_2_x_lo, practice_player_2_x_hi), __AX__);
 player_y[0] = ( __A__ = (__asm__("tya"), __A__), __asm__("tay"), __asm__("lda %v, y \n ldx %v, y", practice_player_1_y_lo, practice_player_1_y_hi), __AX__);
 player_y[1] = ( __A__ = (__asm__("tya"), __A__), __asm__("tay"), __asm__("lda %v, y \n ldx %v, y", practice_player_2_y_lo, practice_player_2_y_hi), __AX__);
 player_vel_x[0] = ( __A__ = (__asm__("tya"), __A__), __asm__("tay"), __asm__("lda %v, y \n ldx %v, y", practice_player_1_vel_x_lo, practice_player_1_vel_x_hi), __AX__);
 player_vel_x[1] = ( __A__ = (__asm__("tya"), __A__), __asm__("tay"), __asm__("lda %v, y \n ldx %v, y", practice_player_2_vel_x_lo, practice_player_2_vel_x_hi), __AX__);
 player_vel_y[0] = ( __A__ = (__asm__("tya"), __A__), __asm__("tay"), __asm__("lda %v, y \n ldx %v, y", practice_player_1_vel_y_lo, practice_player_1_vel_y_hi), __AX__);
 player_vel_y[1] = ( __A__ = (__asm__("tya"), __A__), __asm__("tay"), __asm__("lda %v, y \n ldx %v, y", practice_player_2_vel_y_lo, practice_player_2_vel_y_hi), __AX__);
 cube_rotate[0] = ( __A__ = (__asm__("tya"), __A__), __asm__("tay"), __asm__("lda %v, y \n ldx %v, y", practice_cube_1_rotate_lo, practice_cube_1_rotate_hi), __AX__);
 cube_rotate[1] = ( __A__ = (__asm__("tya"), __A__), __asm__("tay"), __asm__("lda %v, y \n ldx %v, y", practice_cube_2_rotate_lo, practice_cube_2_rotate_hi), __AX__);


 currplayer_gravity = player_gravity[0] = ( __A__ = (__asm__("tya"), __A__), __asm__("tay"), __asm__("ldx #0 \n lda %v, y", practice_player_1_gravity), __A__);
 player_gravity[1] = ( __A__ = (__asm__("tya"), __A__), __asm__("tay"), __asm__("ldx #0 \n lda %v, y", practice_player_2_gravity), __A__);

 currplayer_mini = player_mini[0] = ( __A__ = (__asm__("tya"), __A__), __asm__("tay"), __asm__("ldx #0 \n lda %v, y", practice_player_1_mini), __A__);
 player_mini[1] = ( __A__ = (__asm__("tya"), __A__), __asm__("tay"), __asm__("ldx #0 \n lda %v, y", practice_player_2_mini), __A__);

 currplayer_slope_frames = slope_frames[0] = ( __A__ = (__asm__("tya"), __A__), __asm__("tay"), __asm__("ldx #0 \n lda %v, y", practice_player_1_slope_frames), __A__);
 slope_frames[1] = ( __A__ = (__asm__("tya"), __A__), __asm__("tay"), __asm__("ldx #0 \n lda %v, y", practice_player_2_slope_frames), __A__);


 currplayer_was_on_slope_counter = was_on_slope_counter[0] = ( __A__ = (__asm__("tya"), __A__), __asm__("tay"), __asm__("ldx #0 \n lda %v, y", practice_player_1_was_on_slope_counter), __A__);
 was_on_slope_counter[1] = ( __A__ = (__asm__("tya"), __A__), __asm__("tay"), __asm__("ldx #0 \n lda %v, y", practice_player_2_was_on_slope_counter), __A__);


 currplayer_slope_type = slope_type[0] = ( __A__ = (__asm__("tya"), __A__), __asm__("tay"), __asm__("ldx #0 \n lda %v, y", practice_player_1_slope_type), __A__);
 slope_type[1] = ( __A__ = (__asm__("tya"), __A__), __asm__("tay"), __asm__("ldx #0 \n lda %v, y", practice_player_2_slope_type), __A__);

 nocamlockforced = ( __A__ = (__asm__("tya"), __A__), __asm__("tay"), __asm__("ldx #0 \n lda %v, y", practice_nocamlockforced), __A__);
 song = ( __A__ = (__asm__("tya"), __A__), __asm__("tay"), __asm__("ldx #0 \n lda %v, y", practice_song), __A__);
 disco_sprites = ( __A__ = (__asm__("tya"), __A__), __asm__("tay"), __asm__("ldx #0 \n lda %v, y", practice_disco_sprites), __A__);
 slowmode = ( __A__ = (__asm__("tya"), __A__), __asm__("tay"), __asm__("ldx #0 \n lda %v, y", practice_slowmode), __A__);
 forced_trails = ( __A__ = (__asm__("tya"), __A__), __asm__("tay"), __asm__("ldx #0 \n lda %v, y", practice_forced_trails), __A__);
 gravity_mod = ( __A__ = (__asm__("tya"), __A__), __asm__("tay"), __asm__("ldx #0 \n lda %v, y", practice_gravity_mod), __A__);
 kandoframecnt = ( __A__ = (__asm__("tya"), __A__), __asm__("tay"), __asm__("ldx #0 \n lda %v, y", practice_kandoframecnt), __A__);


 currplayer_last_slope_type = last_slope_type[0] = ( __A__ = (__asm__("tya"), __A__), __asm__("tay"), __asm__("ldx #0 \n lda %v, y", practice_player_1_last_slope_type), __A__);
 last_slope_type[1] = ( __A__ = (__asm__("tya"), __A__), __asm__("tay"), __asm__("ldx #0 \n lda %v, y", practice_player_2_last_slope_type), __A__);

 ( __A__ = (__asm__("tya"), __A__), __asm__("tay"), __asm__("lda %v, y \n ldx %v, y", practice_scroll_x_lo, practice_scroll_x_md), *((uint16_t*)&scroll_x) = __AX__, __asm__("lda %v, y \n ldx %v, y", practice_scroll_x_hi, practice_scroll_x_ex), *((uint16_t*)&scroll_x+1) = __AX__);
 old_trail_scroll_y = scroll_y = ( __A__ = (__asm__("tya"), __A__), __asm__("tay"), __asm__("lda %v, y \n ldx %v, y", practice_scroll_y_lo, practice_scroll_y_hi), __AX__);
 scroll_y_subpx = ( __A__ = (__asm__("tya"), __A__), __asm__("tay"), __asm__("ldx #0 \n lda %v, y", practice_scroll_y_subpx), __A__);
 old_draw_scroll_y = ( __A__ = (__asm__("tya"), __A__), __asm__("tay"), __asm__("lda %v, y \n ldx %v, y", practice_old_draw_scroll_y_lo, practice_old_draw_scroll_y_hi), __AX__);
 seam_scroll_y = ( __A__ = (__asm__("tya"), __A__), __asm__("tay"), __asm__("lda %v, y \n ldx %v, y", practice_seam_scroll_y_lo, practice_seam_scroll_y_hi), __AX__);
 target_scroll_y = ( __A__ = (__asm__("tya"), __A__), __asm__("tay"), __asm__("lda %v, y \n ldx %v, y", practice_target_scroll_y_lo, practice_target_scroll_y_hi), __AX__);
 min_scroll_y = ( __A__ = (__asm__("tya"), __A__), __asm__("tay"), __asm__("lda %v, y \n ldx %v, y", practice_min_scroll_y_lo, practice_min_scroll_y_hi), __AX__);

 player_invis = ( __A__ = (__asm__("tya"), __A__), __asm__("tay"), __asm__("ldx #0 \n lda %v, y", practice_player_invis), __A__);
 gamemode = ( __A__ = (__asm__("tya"), __A__), __asm__("tay"), __asm__("ldx #0 \n lda %v, y", practice_player_gamemode), __A__);
 dual = ( __A__ = (__asm__("tya"), __A__), __asm__("tay"), __asm__("ldx #0 \n lda %v, y", practice_dual), __A__);
 speed = ( __A__ = (__asm__("tya"), __A__), __asm__("tay"), __asm__("ldx #0 \n lda %v, y", practice_speed), __A__);
 parallax_scroll_x = ( __A__ = (__asm__("tya"), __A__), __asm__("tay"), __asm__("ldx #0 \n lda %v, y", practice_parallax_scroll_x), __A__);





 nullscapes_active = ( __A__ = (__asm__("tya"), __A__), __asm__("tay"), __asm__("ldx #0 \n lda %v, y", practice_nullscapes_active), __A__);
 nullscapes_orb_type = ( __A__ = (__asm__("tya"), __A__), __asm__("tay"), __asm__("ldx #0 \n lda %v, y", practice_nullscapes_orb_type), __A__);
 practice_sprite_x_pos = ( __A__ = (__asm__("tya"), __A__), __asm__("tay"), __asm__("ldx #0 \n lda %v, y", practice_player_1_x_hi), __A__);

 outline_color = ( __A__ = (__asm__("tya"), __A__), __asm__("tay"), __asm__("ldx #0 \n lda %v, y", practice_outline_color), __A__);

 lastgcolortype = ( __A__ = (__asm__("tya"), __A__), __asm__("tay"), __asm__("ldx #0 \n lda %v, y", practice_g_color_type), __A__);
 lastbgcolortype = ( __A__ = (__asm__("tya"), __A__), __asm__("tay"), __asm__("ldx #0 \n lda %v, y", practice_bg_color_type), __A__);

 scroll_x -= (256 + 16);

 tmp3 = (lastbgcolortype & 0x3F);
 ( PAL_BUF_RAW[0&0x1F] = (tmp3), __A__ = (tmp3), __asm__("tay"), __asm__("lda (%v), y", PAL_PTR), PAL_BUF[0&0x1F] = __A__);
 ( PAL_BUF_RAW[0x0D&0x1F] = (tmp3), __A__ = (tmp3), __asm__("tay"), __asm__("lda (%v), y", PAL_PTR), PAL_BUF[0x0D&0x1F] = __A__);
 tmp3 = (__A__ = tmp3, __asm__("tay"), __asm__("lda palBrightTable%s, y", 3), __A__);
 ( PAL_BUF_RAW[1&0x1F] = (tmp3), __A__ = (tmp3), __asm__("tay"), __asm__("lda (%v), y", PAL_PTR), PAL_BUF[1&0x1F] = __A__);
 ( PAL_BUF_RAW[9&0x1F] = (tmp3), __A__ = (tmp3), __asm__("tay"), __asm__("lda (%v), y", PAL_PTR), PAL_BUF[9&0x1F] = __A__);
 ( PAL_BUF_RAW[13&0x1F] = (tmp3), __A__ = (tmp3), __asm__("tay"), __asm__("lda (%v), y", PAL_PTR), PAL_BUF[13&0x1F] = __A__);

 tmp3 = (lastgcolortype & 0x3F);
 ( PAL_BUF_RAW[6&0x1F] = (tmp3), __A__ = (tmp3), __asm__("tay"), __asm__("lda (%v), y", PAL_PTR), PAL_BUF[6&0x1F] = __A__);
 ( PAL_BUF_RAW[5&0x1F] = ((__A__ = tmp3, __asm__("tay"), __asm__("lda palBrightTable%s, y", 3), __A__)), __A__ = ((__A__ = tmp3, __asm__("tay"), __asm__("lda palBrightTable%s, y", 3), __A__)), __asm__("tay"), __asm__("lda (%v), y", PAL_PTR), PAL_BUF[5&0x1F] = __A__);

 tmp3 = (outline_color & 0x3F);
 ( PAL_BUF_RAW[3&0x1F] = (tmp3), __A__ = (tmp3), __asm__("tay"), __asm__("lda (%v), y", PAL_PTR), PAL_BUF[3&0x1F] = __A__);
 ( PAL_BUF_RAW[7&0x1F] = (tmp3), __A__ = (tmp3), __asm__("tay"), __asm__("lda (%v), y", PAL_PTR), PAL_BUF[7&0x1F] = __A__);

 ++PAL_UPDATE;;

 __A__ = currplayer<<1;
 __asm__("tay");


 __asm__("lda %v,y\n sta %v\n lda %v+1,y\n sta %v+1", player_x, currplayer_x, player_x, currplayer_x);
 __asm__("lda %v,y\n sta %v\n lda %v+1,y\n sta %v+1", player_y, currplayer_y, player_y, currplayer_y);
 __asm__("lda %v,y\n sta %v\n lda %v+1,y\n sta %v+1", player_vel_x, currplayer_vel_x, player_vel_x, currplayer_vel_x);
 __asm__("lda %v,y\n sta %v\n lda %v+1,y\n sta %v+1", player_vel_y, currplayer_vel_y, player_vel_y, currplayer_vel_y);


 currplayer_gravity = player_gravity[currplayer];
 auto_practicepoint_timer = 200;
 update_currplayer_table_idx();


}

void music_restore() {

  famistudio_music_stop();


  (((const void ** const)xargs)[0] = famistudio_state, (__AX__ = (uintptr_t)practice_famistudio_state + ( __A__ = tmp2, __asm__("tay"), __asm__("lda %v, y \n ldx %v, y", multStateLookup_lo, multStateLookup_hi), __AX__), __EAX__<<=16), __AX__ = 172, _memcpy(__EAX__));


  (((const void ** const)xargs)[0] = famistudio_output_buf, (__AX__ = (uintptr_t)practice_famistudio_registers + multBufLookup[tmp2], __EAX__<<=16), __AX__ = 11, _memcpy(__EAX__));


  (__A__ = 0, __AX__ <<= 8, _famistudio_sfx_clear_channel(__AX__));





  (*(uint8_t*) (0x4000) = (famistudio_output_buf[0]));
  (*(uint8_t*) (0x4001) = (0x08));
  (*(uint8_t*) (0x4002) = (famistudio_output_buf[1]));
  (*(uint8_t*) (0x4003) = (famistudio_output_buf[2]));
  (*(uint8_t*) (0x4004) = (famistudio_output_buf[3]));
  (*(uint8_t*) (0x4005) = (0x08));
  (*(uint8_t*) (0x4006) = (famistudio_output_buf[4]));
  (*(uint8_t*) (0x4007) = (famistudio_output_buf[5]));
  (*(uint8_t*) (0x4008) = (famistudio_output_buf[6]));
  (*(uint8_t*) (0x400a) = (famistudio_output_buf[7]));
  (*(uint8_t*) (0x400b) = (famistudio_output_buf[8]));
  (*(uint8_t*) (0x400c) = (famistudio_output_buf[9]));
  (*(uint8_t*) (0x400e) = (famistudio_output_buf[10]));

}

_Pragma ("code-name(pop)") _Pragma ("data-name(pop)") _Pragma ("rodata-name(pop)")
#line 69 "SAUCE/include.h"
#line 1 "SAUCE/functions/draw_sprites.h"
_Pragma ("code-name(push, \"XCD_BANK_04\" )") _Pragma ("data-name(push, \"XCD_BANK_04\" )") _Pragma ("rodata-name(push, \"XCD_BANK_04\" )")

void reset_level();
void minus15y();
void minus15x();
void plus15y();
void plus15x();
void trail_loop();




void drawplayerone();
void drawplayertwo();

void draw_sprites(){




 if (!invisible) {
  if (dual) {
   if (kandoframecnt & 1 && !player_invis) { (__asm__("lda #<%v \n ldx #>%v \n ldy #<.bank(%v) \n jsr crossPRGBankJump ", drawplayertwo, drawplayertwo, drawplayertwo), __asm__("lda ptr3 \n ldx ptr3+1"), __AX__); (__asm__("lda #<%v \n ldx #>%v \n ldy #<.bank(%v) \n jsr crossPRGBankJump ", drawplayerone, drawplayerone, drawplayerone), __asm__("lda ptr3 \n ldx ptr3+1"), __AX__); }
   else if (!player_invis) { (__asm__("lda #<%v \n ldx #>%v \n ldy #<.bank(%v) \n jsr crossPRGBankJump ", drawplayerone, drawplayerone, drawplayerone), __asm__("lda ptr3 \n ldx ptr3+1"), __AX__); (__asm__("lda #<%v \n ldx #>%v \n ldy #<.bank(%v) \n jsr crossPRGBankJump ", drawplayertwo, drawplayertwo, drawplayertwo), __asm__("lda ptr3 \n ldx ptr3+1"), __AX__); }
  }
  else if (!player_invis) (__asm__("lda #<%v \n ldx #>%v \n ldy #<.bank(%v) \n jsr crossPRGBankJump ", drawplayerone, drawplayerone, drawplayerone), __asm__("lda ptr3 \n ldx ptr3+1"), __AX__);
 }




 if (invisblocks) return;

 if (practice_point_count) {
  tmp3 = practice_player_1_y_hi[curr_practice_point];
  if (practice_sprite_x_pos > 10) {
   practice_sprite_x_pos -= 3;
   ((__AX__ = ((((tmp3 - 1)&0xFF))<<8)|(((practice_sprite_x_pos)&0xFF)), __EAX__<<=16), __AX__ = (uintptr_t)((void *)Practice_Sprites[0]), _oam_meta_spr(__EAX__));
  }

 }




 shuffle_offset = (shuffle_offset + 11) & 0x0F;

 count = 0;
 do {

  shuffle_offset = (shuffle_offset + 9) & 0x0F;
  index = shuffle_offset;

  if ((int8_t)(( __A__ = index, __asm__("tay"), __asm__("ldx #0 \n lda %v, y", activesprites_type), __A__)) < 0) continue;
  if (!activesprites_active[index]) continue;

  temp_x = activesprites_realx[index];
  if (temp_x > 0xf0) continue;
  if (temp_x == 0) temp_x = 1;

  temp_y = activesprites_realy[index];
  if (temp_y > 0xf0) continue;
#line 72 "SAUCE/functions/draw_sprites.h"
  if (nullscapes_active) {
   if (activesprites_type[index] == 0x0B ||
   activesprites_type[index] == 0x28 ||
   activesprites_type[index] == 0x44 ||
   activesprites_type[index] == 0x7B ||
   activesprites_type[index] == 0x06 ||
   activesprites_type[index] == 0x27 ||
   activesprites_type[index] == 0x7C ||
   activesprites_type[index] == 0x05) {

    switch (nullscapes_orb_type) {
     case 0:
       activesprites_type[index] = 0x28;
       break;
     case 1:
       activesprites_type[index] = 0x7B;
       break;
     case 2:
       activesprites_type[index] = 0x0B;
       break;
     case 3:
       activesprites_type[index] = 0x44;
       break;
     case 4:
       activesprites_type[index] = 0x7C;
       break;
     case 5:
       activesprites_type[index] = 0x06;
       break;
    };
    activesprites_activated[index] = 0;
   }
  }



  tmp4 = 0;
  tmp3 = activesprites_type[index];
  tmpptr1 = (unsigned char *)animation_frame_list[tmp3 & 0x7F];

  if (*((uint8_t*)&tmpptr1+1)) {


   tmp1 = ( __AX__ = index << 8, __asm__("dec %v,x", activesprites_anim_frame_count), __asm__("lda %v,x", activesprites_anim_frame_count), __A__);
   if ((int8_t)tmp1 < 0) {

    if ((activesprites_type[index] == 0x79 && activesprites_animated[index] == 1) || activesprites_type[index] != 0x79) {
     tmp2 = ( __AX__ = index << 8, __asm__("inc %v,x", activesprites_anim_frame), __asm__("lda %v,x", activesprites_anim_frame), __A__);
    }

    else if (activesprites_type[index] == 0x79 && activesprites_animated[index] == 2) { if (activesprites_anim_frame[index]) { tmp2 = ( __AX__ = index << 8, __asm__("dec %v,x", activesprites_anim_frame), __asm__("lda %v,x", activesprites_anim_frame), __A__); } else { tmp2 = activesprites_anim_frame[index]; } }

    else { tmp2 = activesprites_anim_frame[index]; }


    if (tmp2 >= animation_frame_length[tmp3]) {

     if (activesprites_type[index] != 0x79) {
      activesprites_anim_frame[index] = 0;
      tmp2 = 0;
     } else {
      ( __AX__ = index << 8, __asm__("dec %v,x", activesprites_anim_frame), __asm__("lda %v,x", activesprites_anim_frame), __A__);
      tmp2--;
     }
    }

    tmp4 = 1;
   } else {
     tmp2 = activesprites_anim_frame[index];
   }




   __AX__ = tmp2 << 1;
   __AX__ += tmp2;
   tmpptr1 += __AX__;

   __asm__ ("ldy #2 \n lda (%v), y \n sta %v+1 \n dey \n lda (%v), y \n sta %v", tmpptr1, tmpptr2, tmpptr1, tmpptr2);

   if (tmp4) {
    __A__ = *(uint8_t*)tmpptr1;
    __asm__ ("ldy %v \n sta %v, y", index, activesprites_anim_frame_count);
   }


  } else {
   tmpptr2 = (unsigned char*)Metasprites[tmp3 & 0x7F];
  }
  if (!disco_sprites) ((__AX__ = ((((temp_y)&0xFF))<<8)|(((temp_x)&0xFF)), __EAX__<<=16), __AX__ = (uintptr_t)((void *)tmpptr2), _oam_meta_spr(__EAX__));
  else ((__AX__ = ((((temp_y)&0xFF))<<8)|(((temp_x)&0xFF)), __EAX__<<=16), __AX__ = (uintptr_t)tmpptr2, _oam_meta_spr_disco(__EAX__));

 } while (++count < 16);
 if (!dual) {
 if (kandoframecnt & 1) {

  tmp2 = sizeof(trail_sprites_visible) - 1;
  do {
   __A__ = ( __A__ = tmp2 - 1, __asm__("tay"), __asm__("ldx #0 \n lda %v, y", trail_sprites_visible), __A__); __asm__("pha");
   ( __A__ = tmp2, __asm__("tay"), __A__ = (__asm__("pla"), __A__), __asm__("sta %v, y", trail_sprites_visible));
  } while (--tmp2 != 0);

  trail_sprites_visible[0] = (trails == 1 || orbactive);
 }
 if (viseffects) {
  if ((trails == 1) || (trails != 2 && forced_trails != 2 && !invisible)) {
   trail_loop();
  }
  else if ((forced_trails == 2 || trails == 2) && !(kandoframecnt & 1)) {
   skipProcessingCubeRotationLogic++;
   tmp6 = currplayer_vel_x << 1;

   tmpA = player_x[0];
   tmpB = player_y[0];

   *((uint8_t*)&player_x[0]+1) -= *((uint8_t*)&tmp6+1);
   *((uint8_t*)&player_y[0]+1) = player_old_posy[0];

   (__asm__("lda #<%v \n ldx #>%v \n ldy #<.bank(%v) \n jsr crossPRGBankJump ", drawplayerone, drawplayerone, drawplayerone), __asm__("lda ptr3 \n ldx ptr3+1"), __AX__);

   *((uint8_t*)&player_x[0]+1) -= *((uint8_t*)&tmp6+1);
   *((uint8_t*)&player_y[0]+1) = player_old_posy[1];

   (__asm__("lda #<%v \n ldx #>%v \n ldy #<.bank(%v) \n jsr crossPRGBankJump ", drawplayerone, drawplayerone, drawplayerone), __asm__("lda ptr3 \n ldx ptr3+1"), __AX__);

   *((uint8_t*)&player_x[0]+1) -= *((uint8_t*)&tmp6+1);
   *((uint8_t*)&player_y[0]+1) = player_old_posy[2];

   if (gamemode == 0x00) {
    tmp9 = currplayer_mini;
    currplayer_mini = 1;
   }

   (__asm__("lda #<%v \n ldx #>%v \n ldy #<.bank(%v) \n jsr crossPRGBankJump ", drawplayerone, drawplayerone, drawplayerone), __asm__("lda ptr3 \n ldx ptr3+1"), __AX__);

   if (gamemode == 0x00) {
    currplayer_mini = tmp9;
   }

   player_x[0] = tmpA;
   player_y[0] = tmpB;
   skipProcessingCubeRotationLogic--;
  }
 }
 }


}

void trail_loop() {
 if (kandoframecnt & 1) {
  tmp6 = currplayer_vel_x << 1;
  tmp1 = 1;
  tmp5 = currplayer_x - tmp6;
  do {
   if (trail_sprites_visible[tmp1]) {
    ((__AX__ = ((((player_old_posy[tmp1] + (-4))&0xFF))<<8)|(((*((uint8_t*)&tmp5+1) + (0))&0xFF)), __EAX__<<=16), __A__ = (0xF9), __AX__ <<= 8, __A__ |= (3), _oam_spr(__EAX__))


                                     ;
   }

   tmp5 = tmp5 - tmp6;
   tmp1++;
  } while (tmp1 < 8);
 } else {
  tmp1 = 7;

  tmp5 = currplayer_vel_x << 4;
  tmp5 = (currplayer_vel_x << 1) + currplayer_x - tmp5;
  do {
   if (trail_sprites_visible[tmp1]) {
    ((__AX__ = ((((player_old_posy[tmp1] + (-4))&0xFF))<<8)|(((*((uint8_t*)&tmp5+1) + (0))&0xFF)), __EAX__<<=16), __A__ = (0xF9), __AX__ <<= 8, __A__ |= (3), _oam_spr(__EAX__))


                                     ;
   }

   tmp5 = tmp5 + tmp6;
   tmp1--;
  } while (tmp1 > 0);
 }
}

void put_progress_bar_sprite() {
 ((__AX__ = ((((tmp2)&0xFF))<<8)|(((tmp1)&0xFF)), __EAX__<<=16), __AX__ = (uintptr_t)((void *)(Number_Sprites+22)[tmp3 & 0x7F]), _oam_meta_spr(__EAX__));
}

void put_number() {
 ((__AX__ = ((((tmp2)&0xFF))<<8)|(((tmp1)&0xFF)), __EAX__<<=16), __AX__ = (uintptr_t)((void *)Number_Sprites[(*((uint8_t*)&tmp6+1) + tmp3) & 0x7F]), _oam_meta_spr(__EAX__));
}

void minus15y() {
 *((uint8_t*)&player_y[0]+1) -= 15;
}

void minus15x() {
 *((uint8_t*)&player_x[0]+1) -= 15;
}

void plus15y() {
 *((uint8_t*)&player_y[0]+1) += 15;
}

void plus15x() {
 *((uint8_t*)&player_x[0]+1) += 15;
}




_Pragma ("code-name(pop)") _Pragma ("data-name(pop)") _Pragma ("rodata-name(pop)")
#line 70 "SAUCE/include.h"
#line 5 "SAUCE/functions/level_loading.h"
void init_sprites();
#line 4 "SAUCE/defines/charmap/bg_charmap.h"
_Pragma ("charmap (0x20, 0xFF)")



_Pragma ("charmap (0x24, 0xFE)")
_Pragma ("charmap (0x25, 0xDA)")




_Pragma ("charmap (0x2A, 0x8E)")




_Pragma ("charmap (0x2F, 0xE0)")
_Pragma ("charmap (0x30, 0xD0)")
_Pragma ("charmap (0x31, 0xD1)")
_Pragma ("charmap (0x32, 0xD2)")
_Pragma ("charmap (0x33, 0xD3)")
_Pragma ("charmap (0x34, 0xD4)")
_Pragma ("charmap (0x35, 0xD5)")
_Pragma ("charmap (0x36, 0xD6)")
_Pragma ("charmap (0x37, 0xD7)")
_Pragma ("charmap (0x38, 0xD8)")
_Pragma ("charmap (0x39, 0xD9)")
_Pragma ("charmap (0x3A, 0xFC)")






_Pragma ("charmap (0x41, 0xE1)")
_Pragma ("charmap (0x42, 0xE2)")
_Pragma ("charmap (0x43, 0xE3)")
_Pragma ("charmap (0x44, 0xE4)")
_Pragma ("charmap (0x45, 0xE5)")
_Pragma ("charmap (0x46, 0xE6)")
_Pragma ("charmap (0x47, 0xE7)")
_Pragma ("charmap (0x48, 0xE8)")
_Pragma ("charmap (0x49, 0xE9)")
_Pragma ("charmap (0x4A, 0xEA)")
_Pragma ("charmap (0x4B, 0xEB)")
_Pragma ("charmap (0x4C, 0xEC)")
_Pragma ("charmap (0x4D, 0xED)")
_Pragma ("charmap (0x4E, 0xEE)")
_Pragma ("charmap (0x4F, 0xEF)")
_Pragma ("charmap (0x50, 0xF0)")
_Pragma ("charmap (0x51, 0xF1)")
_Pragma ("charmap (0x52, 0xF2)")
_Pragma ("charmap (0x53, 0xF3)")
_Pragma ("charmap (0x54, 0xF4)")
_Pragma ("charmap (0x55, 0xF5)")
_Pragma ("charmap (0x56, 0xF6)")
_Pragma ("charmap (0x57, 0xF7)")
_Pragma ("charmap (0x58, 0xF8)")
_Pragma ("charmap (0x59, 0xF9)")
_Pragma ("charmap (0x5A, 0xFA)")






_Pragma ("charmap (0x61, 0xD1)")
_Pragma ("charmap (0x62, 0xD2)")
_Pragma ("charmap (0x63, 0xD3)")
_Pragma ("charmap (0x64, 0xD4)")
_Pragma ("charmap (0x65, 0xD5)")
_Pragma ("charmap (0x66, 0xD6)")
_Pragma ("charmap (0x67, 0xD7)")
_Pragma ("charmap (0x68, 0xD8)")
_Pragma ("charmap (0x69, 0xD9)")
_Pragma ("charmap (0x6A, 0xDA)")
_Pragma ("charmap (0x6B, 0xDB)")
_Pragma ("charmap (0x6C, 0xDC)")
_Pragma ("charmap (0x6D, 0xDD)")
_Pragma ("charmap (0x6E, 0xDE)")
_Pragma ("charmap (0x6F, 0xDF)")
_Pragma ("charmap (0x70, 0xE0)")
_Pragma ("charmap (0x71, 0xE1)")
_Pragma ("charmap (0x72, 0xE2)")
_Pragma ("charmap (0x73, 0xE3)")
_Pragma ("charmap (0x74, 0xE4)")
_Pragma ("charmap (0x75, 0xE5)")
_Pragma ("charmap (0x76, 0xE6)")
_Pragma ("charmap (0x77, 0x16)")
_Pragma ("charmap (0x78, 0x17)")
_Pragma ("charmap (0x79, 0xF0)")
_Pragma ("charmap (0x7A, 0xFF)")




#line 8 "SAUCE/functions/level_loading.h"
 const unsigned char attempttext[]="PQQRSTQ";




void setdefaultoptions();




void init_rld(uint8_t level);






void unrle_next_column();






char draw_screen();





void load_ground(uint8_t id);





void dummy_unrle_columns(uint16_t columns);

void increase_parallax_scroll_column() {



 parallax_scroll_column++;
 if (parallax_scroll_column >= 6) {
  parallax_scroll_column = 0;
  parallax_scroll_column_start += 3;
  if (parallax_scroll_column_start >= 9) {
   parallax_scroll_column_start = 0;
  }
 }
}

extern unsigned char drawing_frame;
void unrle_first_screen(){


 register uint16_t ii;
 mmc3_set_prg_bank_1((__asm__("ldx #0\nlda #<.bank(%v)", increment_attempt_count), __A__));

  increment_attempt_count();






 cube_data[0] = 0;
 cube_data[1] = 0;
 coins = 0;
 scroll_x = 0;
 drawing_frame = 0;
 gravity_mod = 0;
 disco_sprites = 0;

 outline_color = 0x30;
 dual = twoplayer ? 1 : 0;
 player_gravity[0] = 0x00;


 player_y[0] = spawn_y_pos;
 player_y[1] = spawn_y_pos;
 currplayer_y = spawn_y_pos;

 player_gravity[1] = twoplayer ? 0x00 : 0xFF;

 currplayer_gravity = 0x00;

 tmp1 = 0;
 do {
  activesprites_active[tmp1] = 0;
  activesprites_anim_frame[tmp1] = 0;
 } while (++tmp1 < 16);

 mmc3_set_prg_bank_1(level_data_bank);



 if (practice_point_count) {

  ii = ( __A__ = curr_practice_point, __asm__("tay"), __asm__("lda %v, y \n ldx %v, y", practice_scroll_x_hi, practice_scroll_x_ex), __asm__("sta sreg \n stx sreg+1"), __asm__("lda %v, y \n ldx %v, y", practice_scroll_x_lo, practice_scroll_x_md), __EAX__) >> 4;
  dummy_unrle_columns(ii);

  __A__ = -(6 * (9 / 3) / 2); __asm__("tay \n sty %v", parallax_scroll_column);
  while (ii != 0) {
   parallax_scroll_column++;
   if (parallax_scroll_column == 0) {
    __asm__("sty %v", parallax_scroll_column);
   }
   ii--;
  }
  parallax_scroll_column_start = -3;
  __asm__("ldy #3");
  unrle_first_screen_addition_loop:
   __asm__("tya ");
   parallax_scroll_column_start += __A__;
   __asm__("tya ");
   parallax_scroll_column += __A__;
   __asm__("bmi %g", unrle_first_screen_addition_loop);
  parallax_scroll_column <<= 1;

  (__asm__("lda #<%v \n ldx #>%v \n ldy #<.bank(%v) \n jsr crossPRGBankJump ", load_practice_state, load_practice_state, load_practice_state), __asm__("lda ptr3 \n ldx ptr3+1"), __AX__);

  mmc3_set_prg_bank_1((__asm__("ldx #0\nlda #<.bank(%v)", draw_screen), __A__));

  (*((uint8_t *)&ii)) = -16;
  do {
   if (draw_screen()) flush_vram_update2();
   (*((uint8_t *)&ii))++;
   ( __asm__("inc %v+0 \n bne %s", scroll_x, 136), __asm__("inc %v+1 \n bne %s", scroll_x, 136), __asm__("inc %v+2 \n bne %s", scroll_x, 136), __asm__("inc %v+3 \n  %s:", scroll_x, 136) );
  } while ((*((uint8_t *)&ii)) != 0);
 }
 else {

  *((uint16_t*)&scroll_x) = (((((-256)&0xFFFF)))); *((uint16_t*)&scroll_x+1) = ((((((-256L)>>16)&0xFFFF))));
  parallax_scroll_x = 0;
  parallax_scroll_column = 0;
  parallax_scroll_column_start = 0;
  mmc3_set_prg_bank_1((__asm__("ldx #0\nlda #<.bank(%v)", draw_screen), __A__));
  (*((uint8_t *)&ii)) = 0;
 }



    do {
  if (draw_screen()) flush_vram_update2();
  (*((uint8_t *)&ii))++;
  ( __asm__("inc %v+0 \n bne %s", scroll_x, 154), __asm__("inc %v+1 \n bne %s", scroll_x, 154), __asm__("inc %v+2 \n bne %s", scroll_x, 154), __asm__("inc %v+3 \n  %s:", scroll_x, 154) );
 } while ((*((uint8_t *)&ii)) != 0);

 level_resetting_flag = 2;
 if (!level_resetting_flag) timewarp_done = 0;

 init_sprites();

 set_scroll_x(scroll_x);
 set_scroll_y(scroll_y);
 if (!practice_point_count) {

   ((__AX__ = (uintptr_t)(const char*)attempttext, __EAX__<<=16), xargs[0] = sizeof(attempttext)-1, __AX__ = (0x2800|(((15)<<5)|(6)))|(0x40<<8), _multi_vram_buffer(__EAX__));
#line 175 "SAUCE/functions/level_loading.h"
   mmc3_set_prg_bank_1((__asm__("ldx #0\nlda #<.bank(%v)", _display_attempt_counter), __A__));
   ((__A__ = 0xF5, __asm__("sta sreg+0")), __AX__ = (0x2800|(((15)<<5)|(20))), _display_attempt_counter(__EAX__));


 }

}
#line 71 "SAUCE/include.h"
#line 2 "SAUCE/functions/scroll.h"
_Pragma ("code-name(push, \"XCD_BANK_04\" )") _Pragma ("data-name(push, \"XCD_BANK_04\" )") _Pragma ("rodata-name(push, \"XCD_BANK_04\" )")
#line 11 "SAUCE/functions/scroll.h"
void process_x_scroll() {
 switch (cam_seesaw) {
  case 1:
   if (curr_x_scroll_stop < 0xD000) target_x_scroll_stop = 0xD000;
   else cam_seesaw = 2;
   break;
  case 2:
   if (curr_x_scroll_stop > 0x1000) target_x_scroll_stop = 0x1000;
   else cam_seesaw = 1;
   break;
 }


 if (!kandodebugmode) {
  if (curr_x_scroll_stop < target_x_scroll_stop) curr_x_scroll_stop += 0x200;
  else if (curr_x_scroll_stop > target_x_scroll_stop) curr_x_scroll_stop -= 0x200;
 } else {
  if (curr_x_scroll_stop < target_x_scroll_stop) curr_x_scroll_stop += 0x180;
  else if (curr_x_scroll_stop > target_x_scroll_stop) curr_x_scroll_stop -= 0x180;
 }

 if (currplayer_x > curr_x_scroll_stop){
  tmp1 = (((((currplayer_x - curr_x_scroll_stop>>8)&0xFF))));
  scroll_x += tmp1;
  parallax_scroll_x += tmp1 ? tmp1 - 1 : 0;
  if (parallax_scroll_x >= 144) {
   parallax_scroll_x -= 144;
  }
  *((uint8_t*)&currplayer_x+1) = *((uint8_t*)&currplayer_x+1) - tmp1;
  *((uint8_t*)&player_x[1]+1) = *((uint8_t*)&player_x[1]+1) - tmp1;
 } else if (currplayer_x < 0x0200){
  tmp1 = (((((currplayer_x + 0x0200>>8)&0xFF))));
  scroll_x = scroll_x - tmp1;
  if (tmp1) {
   if (tmp1 > parallax_scroll_x) {
    parallax_scroll_x += 144;
   }
   parallax_scroll_x -= tmp1 - 1;
  }

  *((uint8_t*)&currplayer_x+1) = *((uint8_t*)&currplayer_x+1) + tmp1;
  *((uint8_t*)&player_x[1]+1) = *((uint8_t*)&player_x[1]+1) + tmp1;
 }
}


void process_y_scroll() {
 if ((!dual || twoplayer) && (gamemode == 0x00 || gamemode == 0x04 || gamemode == 0x08 || gamemode == 0x09 || nocamlock || nocamlockforced)) {
   if (exitPortalTimer) exitPortalTimer--;
   if (currplayer_y < 0x4000 &&
    (scroll_y >= min_scroll_y && (scroll_y_subpx || scroll_y != min_scroll_y))
    ){

    cc65_ptr1 = 0x4000 - currplayer_y;
    if (exitPortalTimer) {
     cc65_tmp1 = (11 - exitPortalTimer);
     if ((((((cc65_ptr1>>8)&0xFF)))) >= cc65_tmp1) cc65_ptr1 = (cc65_tmp1) << 8;
    }
    currplayer_y += cc65_ptr1;
    player_y[1] += cc65_ptr1;

    scroll_y_subpx -= (((((cc65_ptr1)&0xFF))));
    do { __asm__("j" "cs" " %s", 73); do {++*((uint8_t*)&cc65_ptr1+1);} while(0); __asm__("%s:", 73); } while(0);
    scroll_y = ((__A__ = (((((cc65_ptr1>>8)&0xFF)))), __asm__("sta sreg+0")), __AX__ = scroll_y, _sub_scroll_y(__EAX__));
   }
   cap_scroll_y_at_top();

   if (scroll_y < 0x2EF && *((uint8_t*)&currplayer_y+1) >= (((((0xA000>>8)&0xFF))))){

    cc65_ptr1 = currplayer_y - 0xA000;
    if (exitPortalTimer) {
     cc65_tmp1 = (11 - exitPortalTimer);
     if ((((((cc65_ptr1>>8)&0xFF)))) >= cc65_tmp1) cc65_ptr1 = (cc65_tmp1) << 8;
    }
    currplayer_y = currplayer_y - cc65_ptr1;
    player_y[1] = player_y[1] - cc65_ptr1;

    scroll_y_subpx += (((((cc65_ptr1)&0xFF))));
    do { __asm__("j" "cc" " %s", 89); do {++*((uint8_t*)&cc65_ptr1+1);} while(0); __asm__("%s:", 89); } while(0);
    scroll_y = ((__A__ = (((((cc65_ptr1>>8)&0xFF)))), __asm__("sta sreg+0")), __AX__ = scroll_y, _add_scroll_y(__EAX__));
   }
   cap_scroll_y_at_bottom();
 } else {
  if (*((uint8_t*)&target_scroll_y) >= 0xf0) {
   target_scroll_y += 0x10;
  }
  if (target_scroll_y > scroll_y) {
   cc65_ptr1 = ( __A__ = framerate, __asm__("tay"), __asm__("ldx #%b \n lda %v, y", (uint8_t)0x02, SHIP_SCROLL_SPEED_lo), __AX__ );

   currplayer_y = currplayer_y - cc65_ptr1;
   player_y[1] = player_y[1] - cc65_ptr1;

   scroll_y_subpx += (((((cc65_ptr1)&0xFF))));
   do { __asm__("j" "cc" " %s", 104); do {++*((uint8_t*)&cc65_ptr1+1);} while(0); __asm__("%s:", 104); } while(0);
   scroll_y = ((__A__ = (((((cc65_ptr1>>8)&0xFF)))), __asm__("sta sreg+0")), __AX__ = scroll_y, _add_scroll_y(__EAX__));
  }
  if (target_scroll_y < scroll_y) {
   cc65_ptr1 = ( __A__ = framerate, __asm__("tay"), __asm__("ldx #%b \n lda %v, y", (uint8_t)0x02, SHIP_SCROLL_SPEED_lo), __AX__ );

   currplayer_y = currplayer_y + cc65_ptr1;
   player_y[1] = player_y[1] + cc65_ptr1;

   scroll_y_subpx -= (((((cc65_ptr1)&0xFF))));
   do { __asm__("j" "cc" " %s", 114); do {++*((uint8_t*)&cc65_ptr1+1);} while(0); __asm__("%s:", 114); } while(0);
   scroll_y = ((__A__ = (((((cc65_ptr1>>8)&0xFF)))), __asm__("sta sreg+0")), __AX__ = scroll_y, _sub_scroll_y(__EAX__));
  }
  cap_scroll_y_at_top();
  cap_scroll_y_at_bottom();
 }
}

void do_the_scroll_thing(){
 process_x_scroll();
 process_y_scroll();

    set_scroll_x(scroll_x);
    set_scroll_y(scroll_y);
}


_Pragma ("code-name(pop)") _Pragma ("data-name(pop)") _Pragma ("rodata-name(pop)")
#line 72 "SAUCE/include.h"
#line 2 "SAUCE/functions/collision.h"
_Pragma ("code-name(push, \"XCD_BANK_01\" )") _Pragma ("data-name(push, \"XCD_BANK_01\" )") _Pragma ("rodata-name(push, \"XCD_BANK_01\" )")
#line 37 "SAUCE/functions/collision.h"
char bg_collision_sub();
void commonly_used_store();
void commonly_stored_routine_2();
void commonly_used_death_check();
void tmp20f();






char bg_coll_sides() {
 switch (collision) {
  case 0x07:
   return 1;
  case 0x06:
   if ((uint8_t)(temp_y & 0x08)) return 1;
   break;
  case 0x05:
   if (!(uint8_t)(temp_y & 0x08)) return 1;
   break;
  case 0x09:
   if (gamemode == gamemode == 0x06 || gamemode == 0x0A) return 0;

 };
 return 0;
}

_Pragma ("warn (unreachable-code, push, off)")
char col_death_bottom_routine() {
 if ((uint8_t)(temp_y & 0x0f) > 0x0a) {

  __A__ = (uint8_t)(temp_x & 0x0f); __asm__("sec \n sbc #%b \n sbc #%b-%b+1 ", 0x05, 0x08-1, 0x05); do { __asm__("j" "cs" " %s", 72); do { cube_data[currplayer] = 1; return 1; } while(0); __asm__("%s:", 72); } while(0)


    ;
 }
 return 0;
}

char col_death_top_routine() {
 if ((uint8_t)(temp_y & 0x0f) < 0x06) {

  __A__ = (uint8_t)(temp_x & 0x0f); __asm__("sec \n sbc #%b \n sbc #%b-%b+1 ", 0x05, 0x08-1, 0x05); do { __asm__("j" "cs" " %s", 83); do { cube_data[currplayer] = 1; return 1; } while(0); __asm__("%s:", 83); } while(0)


    ;
 }
 return 0;
}

char col_death_right_routine() {
 if ((uint8_t)(temp_x & 0x0f) >= 0x0a) {
  __A__ = (uint8_t)(temp_y & 0x0f); __asm__("sec \n sbc #%b \n sbc #%b-%b+1 ", 0x06, 0x09-1, 0x06); do { __asm__("j" "cs" " %s", 93); do { cube_data[currplayer] = 1; return 1; } while(0); __asm__("%s:", 93); } while(0)


    ;
 }
 return 0;
}

char col_death_left_routine() {
 if ((uint8_t)(temp_x & 0x0f) < 0x06) {
  __A__ = (uint8_t)(temp_y & 0x0f); __asm__("sec \n sbc #%b \n sbc #%b-%b+1 ", 0x06, 0x09-1, 0x06); do { __asm__("j" "cs" " %s", 103); do { cube_data[currplayer] = 1; return 1; } while(0); __asm__("%s:", 103); } while(0)


    ;
 }
 return 0;
}






char bg_coll_spikes() {

 switch (collision) {
  case 0x02:
   return col_death_left_routine();

  case 0x01:
   return col_death_right_routine();

  case 0x03:
   return col_death_top_routine();

  case 0x3d:
  case 0x3b:
  case 0x04:
   return col_death_bottom_routine();

  case 0x36:
   return col_death_left_routine() | col_death_bottom_routine();

  case 0x35:
   return col_death_right_routine() | col_death_bottom_routine();

  case 0x34:
   return col_death_left_routine() | col_death_top_routine();

  case 0x33:
   return col_death_right_routine() | col_death_top_routine();

  case 0x08:
   tmp2 = (uint8_t)(temp_y & 0x0f);
   if (tmp2 >= 0x04 && tmp2 < 0x0c) {
    __A__ = (uint8_t)(temp_x & 0x0f); __asm__("sec \n sbc #%b \n sbc #%b-%b+1 ", 0x04, 0x09-1, 0x04); do { __asm__("j" "cs" " %s", 145); do {goto bg_coll_spikes_break;} while(0); __asm__("%s:", 145); } while(0);
   }
   return 0;
  case 0x2b:
  case 0x2d:
   if (!(uint8_t)(temp_y & 0x08)) {
    __A__ = (uint8_t)(temp_x & 0x0f); __asm__("sec \n sbc #%b \n sbc #%b-%b+1 ", 0x02, 0x06-1, 0x02); do { __asm__("j" "cs" " %s", 151); do {goto bg_coll_spikes_break;} while(0); __asm__("%s:", 151); } while(0);
   }
   return 0;
  case 0x2c:
  case 0x2e:
   if (!(uint8_t)(temp_y & 0x08)) {
    __A__ = (uint8_t)(temp_x & 0x0f); __asm__("sec \n sbc #%b \n sbc #%b-%b+1 ", 0x0a, 0x0d-1, 0x0a); do { __asm__("j" "cs" " %s", 157); do {goto bg_coll_spikes_break;} while(0); __asm__("%s:", 157); } while(0);
   }
   return 0;
  case 0x3c:
   if (!(uint8_t)(temp_y & 0x08)) {
    __A__ = (uint8_t)(temp_x & 0x0f); __asm__("sec \n sbc #%b \n sbc #%b-%b+1 ", 0x07, 0x0b-1, 0x07); do { __asm__("j" "cs" " %s", 162); do {goto bg_coll_spikes_break;} while(0); __asm__("%s:", 162); } while(0);
   }
   return 0;
  case 0x2f:
   if (!(uint8_t)(temp_y & 0x08)) {
    __A__ = (uint8_t)(temp_x & 0x07); __asm__("sec \n sbc #%b \n sbc #%b-%b+1 ", 0x02, 0x06-1, 0x02); do { __asm__("j" "cs" " %s", 167); do {goto bg_coll_spikes_break;} while(0); __asm__("%s:", 167); } while(0);
   }
   return 0;
  case 0x30:
   if (!(uint8_t)(temp_y & 0x08)) {
    __A__ = (uint8_t)(temp_x & 0x0f); __asm__("sec \n sbc #%b \n sbc #%b-%b+1 ", 0x02, 0x06-1, 0x02); do { __asm__("j" "cs" " %s", 172); do {goto bg_coll_spikes_break;} while(0); __asm__("%s:", 172); } while(0);
   }
   return 0;
  case 0x31:
   if (!(uint8_t)(temp_y & 0x08)) {
    __A__ = (uint8_t)(temp_x & 0x0f); __asm__("sec \n sbc #%b \n sbc #%b-%b+1 ", 0x0a, 0x0d-1, 0x0a); do { __asm__("j" "cs" " %s", 177); do {goto bg_coll_spikes_break;} while(0); __asm__("%s:", 177); } while(0);
   }
   return 0;
  case 0x32:
   if (!(uint8_t)(temp_y & 0x08)) {
    __A__ = (uint8_t)(temp_x & 0x07); __asm__("sec \n sbc #%b \n sbc #%b-%b+1 ", 0x02, 0x06-1, 0x02); do { __asm__("j" "cs" " %s", 182); do {goto bg_coll_spikes_break;} while(0); __asm__("%s:", 182); } while(0);
   }
   return 0;
  case 0x28:
   if ((uint8_t)(temp_y & 0x08)) {
    __A__ = (uint8_t)(temp_x & 0x0f); __asm__("sec \n sbc #%b \n sbc #%b-%b+1 ", 0x02, 0x06-1, 0x02); do { __asm__("j" "cs" " %s", 187); do {goto bg_coll_spikes_break;} while(0); __asm__("%s:", 187); } while(0);
   }
   return 0;
  case 0x29:
   if ((uint8_t)(temp_y & 0x08)) {
    __A__ = (uint8_t)(temp_x & 0x0f); __asm__("sec \n sbc #%b \n sbc #%b-%b+1 ", 0x0a, 0x0d-1, 0x0a); do { __asm__("j" "cs" " %s", 192); do {goto bg_coll_spikes_break;} while(0); __asm__("%s:", 192); } while(0);
   }
   return 0;
  case 0x2a:
   if ((uint8_t)(temp_y & 0x08)) {
    __A__ = (uint8_t)(temp_x & 0x07); __asm__("sec \n sbc #%b \n sbc #%b-%b+1 ", 0x02, 0x06-1, 0x02); do { __asm__("j" "cs" " %s", 197); do {goto bg_coll_spikes_break;} while(0); __asm__("%s:", 197); } while(0);
   }
   return 0;
  default: return 0;
 }

 bg_coll_spikes_break:
 cube_data[currplayer] = 1;
 return 1;
}

_Pragma ("warn(unreachable-code, pop)")





void bg_coll_floor_spikes() {
 if (currplayer_vel_y != 0) {
  currplayer_direction = *((uint8_t*)&currplayer_vel_y+1) & 0x80;
 }


 temp_x = Generic.x + *((uint16_t*)&scroll_x) + 3;

 commonly_used_store();

 bg_collision_sub();

 if (collision) {
  if (bg_coll_spikes()) return;
 }

 temp_x += Generic.width - 6;

 bg_collision_sub();

 if (collision) {
  if (bg_coll_spikes()) return;
 }


 temp_x = Generic.x + *((uint16_t*)&scroll_x) + 3;

 commonly_stored_routine_2();

 bg_collision_sub();

 if (collision) {
  if (bg_coll_spikes()) return;
 }

 temp_x += Generic.width - 6;

 bg_collision_sub();

 if (collision) {
  if (bg_coll_spikes()) return;
 }
}




char bg_coll_mini_blocks() {
 if (collision != 0x09 && *((uint8_t*)&currplayer_x+1) < 0x10) return 0;
 switch (collision) {
  case 0x20:
   tmp2 = (uint8_t)(temp_y & 0x0f);
   tmp8 = tmp2 & 0x07;
   if (tmp2 < 0x08 && ((uint8_t)(temp_x & 0x0f) < 0x08)) {
    return 1;
   }
   break;
  case 0x21:
   tmp2 = (uint8_t)(temp_y & 0x0f);
   tmp8 = tmp2 & 0x07;
   if (tmp2 < 0x08 && ((uint8_t)(temp_x & 0x0f) >= 0x08)) {
    return 1;
   }
   break;
  case 0x22:
  case 0x2b:
   tmp2 = (uint8_t)(temp_y & 0x0f);
   tmp8 = tmp2 & 0x07;
   if (tmp2 >= 0x08 && ((uint8_t)(temp_x & 0x0f) < 0x08)) {
    return 1;
   }
   break;
  case 0x23:
  case 0x2c:
   tmp2 = (uint8_t)(temp_y & 0x0f);
   tmp8 = tmp2 & 0x07;
   if (tmp2 >= 0x08 && ((uint8_t)(temp_x & 0x0f) >= 0x08)) {
    return 1;
   }
   break;
  case 0x2d:
  case 0x2e:
  case 0x3c:
  case 0x2f:
  case 0x06:
   tmp2 = (uint8_t)(temp_y & 0x0f);
   tmp8 = tmp2 & 0x07;

   if (tmp8 != tmp2) {
    return 1;
   }
   break;

  case 0x3d:
  case 0x3b:
  case 0x05:
   tmp2 = (uint8_t)(temp_y & 0x0f);
   tmp8 = tmp2 & 0x07;

   if (tmp8 == tmp2) {
    return 1;
   }
   break;
  case 0x24:
   tmp8 = (uint8_t)(temp_y & 0x0f) & 0x0f;
   if ((uint8_t)(temp_x & 0x0f) < 0x08) {
    return 1;
   }
   break;
  case 0x25:
   tmp8 = (uint8_t)(temp_y & 0x0f) & 0x0f;
   if ((uint8_t)(temp_x & 0x0f) >= 0x08) {
    return 1;
   }
   break;
  case 0x26:
   tmp2 = (uint8_t)(temp_y & 0x0f);
   tmp8 = tmp2 & 0x07;
   if ((uint8_t)(temp_x & 0x0f) < 0x08) {
    if (tmp2 < 0x08) return 1;
   } else {
    if (tmp2 >= 0x08) return 1;
   }
   break;
  case 0x27:
   tmp2 = (uint8_t)(temp_y & 0x0f);
   tmp8 = tmp2 & 0x07;
   if ((uint8_t)(temp_x & 0x0f) < 0x08) {
    if (tmp2 >= 0x08) return 1;
   } else {
    if (tmp2 < 0x08) return 1;
   }
   break;
  case 0x39:
   tmp2 = (uint8_t)(temp_y & 0x0f);
   tmp4 = (uint8_t)(temp_x & 0x0f);
   tmp8 = tmp2 & 0x07;

   if (tmp2 >= 0x08 && tmp4 < 0x08) {
    break;
   }
   return 1;

  case 0x3a:
   tmp2 = (uint8_t)(temp_y & 0x0f);
   tmp4 = (uint8_t)(temp_x & 0x0f);
   tmp8 = tmp2 & 0x07;

   if (tmp2 >= 0x08 && tmp4 >= 0x08) {
    break;
   }
   return 1;

  case 0x37:
   tmp2 = (uint8_t)(temp_y & 0x0f);
   tmp4 = (uint8_t)(temp_x & 0x0f);
   tmp8 = tmp2 & 0x07;

   if (tmp2 < 0x08 && tmp4 < 0x08) {
    break;
   }
   return 1;

  case 0x38:
   tmp2 = (uint8_t)(temp_y & 0x0f);
   tmp4 = (uint8_t)(temp_x & 0x0f);
   tmp8 = tmp2 & 0x07;

   if (tmp2 < 0x08 && tmp4 >= 0x08) {
    break;
   }
   return 1;
 }

 return 0;
}

char bg_coll_slope();






char bg_side_coll_common() {
 tmp1 = Generic.y + (currplayer_mini ? ((((0x10 - Generic.height)&0xFF)) >> 1) : 0) + (Generic.height >> 1);

 if (currplayer_mini && (gamemode == 0x00 || gamemode == 0x04 || gamemode == 0x08)) {
  tmp1 += (currplayer_gravity ? 3 : -2);
 }

 if (currplayer_was_on_slope_counter | currplayer_slope_frames) {
  return 0;
 }

 (__AX__ = ((__A__ = tmp1, __asm__("sta sreg+0")), __AX__ = scroll_y, _add_scroll_y(__EAX__)), __asm__("STA %v", temp_y), __asm__("STX %v", temp_room));

 bg_collision_sub();
 if (collision) {
  if (gamemode == gamemode == 0x06 || gamemode == 0x0A) {
   if (bg_coll_slope()) {
    if (!dblocked[currplayer]) {
     ( __A__ = currplayer, __asm__("tay"), __A__ = cube_data[currplayer] | 1, __asm__("sta %v, y", cube_data));
    }
   }
  } else {
   if (!currplayer_was_on_slope_counter && bg_coll_slope()) {
    *((uint8_t*)&currplayer_y+1) += (currplayer_slope_type & 0b1000 ? 2 : -2);
   }
  }

  if (bg_coll_spikes()) return 0;

  return bg_coll_sides() || bg_coll_mini_blocks();
 }

 return 0;
}





char bg_coll_R() {

 temp_x = Generic.x + *((uint16_t*)&scroll_x) + Generic.width + ((options & 0x04 || force_platformer) ? 3 : 0);
 return bg_side_coll_common();
}





char bg_coll_L() {

 temp_x = Generic.x + *((uint16_t*)&scroll_x) - ((options & 0x04 || force_platformer) ? 3 : 0);
 return bg_side_coll_common();
}
#line 460 "SAUCE/functions/collision.h"
char bg_coll_U_D_checks() {
 switch (collision) {
  case 0x1f:
   return 1;
  case 0x07:
   if (*((uint8_t*)&currplayer_x+1) < 0x10) return 0;
   else return 1;
  case 0x03:
   col_death_top_routine();
   break;
  case 0x04:
   col_death_bottom_routine();
   break;
  case 0x09:
   dblocked[currplayer] = 1;
   return 1;
 }

 return 0;
}
void unstick() {
 tmp8 = 4;
}

void clear_slope_vars() {
 currplayer_was_on_slope_counter = 0;
 currplayer_slope_frames = 0;
 currplayer_slope_type = 0;
 currplayer_last_slope_type = 0;
}

char a_check_lookup[] = {
 1, 0, 0, 1, 1, 0, 0, 1
};






char bg_coll_slope() {

 static const void * const jumpTable[] = {
  &&col_default, &&col_default, &&col_default, &&col_default,
  &&col_default, &&col_default, &&col_default, &&col_default,
  &&col_default, &&col_default, &&col_default,

  &&col_slope_RD45, &&col_slope_LD45,
  &&col_slope_RD22_RIGHT, &&col_slope_LD22_RIGHT,
  &&col_slope_RD22_LEFT, &&col_slope_LD22_LEFT,
  &&col_slope_RD66_TOP, &&col_slope_LD66_TOP,
  &&col_slope_RD66_BOT, &&col_slope_LD66_BOT,
  &&col_slope_RU45, &&col_slope_LU45,
  &&col_slope_RU22_LEFT, &&col_slope_RU22_RIGHT,
  &&col_slope_LU22_LEFT, &&col_slope_LU22_RIGHT,
  &&col_slope_RU66_TOP, &&col_slope_LU66_TOP,
  &&col_slope_RU66_BOT, &&col_slope_LU66_BOT
 };

 tmp8 = (temp_y) & 0x0f;

 __A__ = collision; __asm__("sec \n sbc #%b \n sbc #%b-%b+1 ", 0x0b, 0x1e, 0x0b); do { __asm__("j" "cc" " %s", 521); do {return 0;} while(0); __asm__("%s:", 521); } while(0);
 goto *jumpTable[collision];

 col_default:
  return 0;



 col_slope_LU45:
  if ((gamemode == 0x06 || gamemode == 0x0A) && !currplayer_mini) {
   return 0;
  }
  else {
   tmp7 = (temp_x & 0x0f);
   tmp4 = (temp_y & 0x0f) ^ 0x0f;
  }
  currplayer_slope_type = (0b01 | 0b1000);
  goto col_end;

 col_slope_LD45:
  tmp7 = (temp_x & 0x0f);
  tmp4 = (temp_y & 0x0f);

  currplayer_slope_type = (0b01);
  goto col_end;

 col_slope_RU45:
  tmp7 = (temp_x & 0x0f) ^ 0x0f;
  tmp4 = (temp_y & 0x0f) ^ 0x0f;

  currplayer_slope_type = (0b01 | 0b0100 | 0b1000);
  goto col_end;

 col_slope_RD45:
  tmp7 = (temp_x & 0x0f) ^ 0x0f;
  tmp4 = temp_y & 0x0f;

  currplayer_slope_type = (0b01 | 0b0100);
  goto col_end;



 col_slope_RU22_RIGHT:
  tmp7 = ((temp_x >> 1) & 0x07) ^ 0x0f;
  tmp4 = (temp_y & 0x0f) ^ 0x0f;

  currplayer_slope_type = (0b10 | 0b0100 | 0b1000);
  goto col_end;

 col_slope_RU22_LEFT:
  tmp7 = (((temp_x >> 1) | 0x8) & 0x0f) ^ 0x0f;
  tmp4 = (temp_y & 0x0f) ^ 0x0f;

  currplayer_slope_type = (0b10 | 0b0100 | 0b1000);
  goto col_end;

 col_slope_RD22_RIGHT:
  tmp7 = ((temp_x >> 1) & 0x07) ^ 0x0f;
  tmp4 = (temp_y & 0x0f);

  currplayer_slope_type = (0b10 | 0b0100);
  goto col_end;

 col_slope_RD22_LEFT:
  tmp7 = (((temp_x >> 1) | 0x8) & 0x0f) ^ 0x0f;
  tmp4 = (temp_y & 0x0f);

  currplayer_slope_type = (0b10 | 0b0100);
  goto col_end;

 col_slope_LU22_RIGHT:
  tmp7 = ((temp_x >> 1) & 0x07);
  tmp4 = (temp_y & 0x0f) ^ 0x0f;

  currplayer_slope_type = (0b10 | 0b1000);
  goto col_end;

 col_slope_LU22_LEFT:
  tmp7 = (((temp_x >> 1) | 0x8) & 0x0f);
  tmp4 = (temp_y & 0x0f) ^ 0x0f;

  currplayer_slope_type = (0b10 | 0b1000);
  goto col_end;

 col_slope_LD22_RIGHT:
  tmp7 = ((temp_x >> 1) & 0x07);
  tmp4 = (temp_y & 0x0f);

  currplayer_slope_type = (0b10);
  goto col_end;

 col_slope_LD22_LEFT:
  tmp7 = (((temp_x >> 1) | 0x8) & 0x0f);
  tmp4 = (temp_y & 0x0f);

  currplayer_slope_type = (0b10);
  goto col_end;



 col_slope_RD66_TOP:
  if ((uint8_t)(temp_x & 0x0f) < 0x08) return 0;
  tmp7 = (((temp_x & 0x07) << 1) & 0x0f) ^ 0x0f;
  tmp4 = ((temp_y) & 0x0f);

  currplayer_slope_type = (0b11 | 0b0100);
  goto col_end;

 col_slope_RD66_BOT:
  if ((uint8_t)(temp_x & 0x0f) >= 0x08) return 1;
  tmp7 = (((temp_x & 0x0f) << 1) & 0x0f) ^ 0x0f;
  tmp4 = ((temp_y) & 0x0f);

  currplayer_slope_type = (0b11 | 0b0100);
  goto col_end;

 col_slope_LD66_TOP:
  if ((uint8_t)(temp_x & 0x0f) >= 0x08) return 0;
  tmp7 = (((temp_x & 0x07) << 1) & 0x0f);
  tmp4 = ((temp_y) & 0x0f);

  currplayer_slope_type = (0b11);
  goto col_end;

 col_slope_LD66_BOT:
  if ((uint8_t)(temp_x & 0x0f) < 0x08) return 1;
  tmp7 = (((temp_x & 0x0f) << 1) & 0x0f);
  tmp4 = ((temp_y) & 0x0f);

  currplayer_slope_type = (0b11);
  goto col_end;

 col_slope_RU66_TOP:
  if ((uint8_t)(temp_x & 0x0f) < 0x08) return 0;
  tmp7 = (((temp_x & 0x07) << 1) & 0x0f) ^ 0x0f;
  tmp4 = ((temp_y) & 0x0f) ^ 0x0f;

  currplayer_slope_type = (0b11 | 0b0100 | 0b1000);
  goto col_end;

 col_slope_RU66_BOT:
  if ((uint8_t)(temp_x & 0x0f) >= 0x08) return 1;
  tmp7 = (((temp_x & 0x0f) << 1) & 0x0f) ^ 0x0f;
  tmp4 = ((temp_y) & 0x0f) ^ 0x0f;

  currplayer_slope_type = (0b11 | 0b0100 | 0b1000);
  goto col_end;

 col_slope_LU66_TOP:
  if ((gamemode == 0x06 || gamemode == 0x0A) && currplayer_mini) {
   return 0;
  }

  if ((uint8_t)(temp_x & 0x0f) >= 0x08) return 0;
  tmp7 = (((temp_x & 0x07) << 1) & 0x0f);
  tmp4 = ((temp_y) & 0x0f) ^ 0x0f;

  currplayer_slope_type = (0b11 | 0b1000);
  goto col_end;

 col_slope_LU66_BOT:
  if ((gamemode == 0x06 || gamemode == 0x0A) && currplayer_mini) {
   return 0;
  }
  if ((uint8_t)(temp_x & 0x0f) < 0x08) return 1;
  tmp7 = (((temp_x & 0x0f) << 1) & 0x0f);
  tmp4 = ((temp_y) & 0x0f) ^ 0x0f;

  currplayer_slope_type = (0b11 | 0b1000);

 col_end:
 if ((uint8_t)(tmp4) >= tmp7) {
   tmp8 = tmp4 - tmp7;

   if (gamemode == 0x00 || gamemode == 0x04 || gamemode == 0x08) {
    if (controllingplayer->hold & (0x80 | 0x08)) {
     make_cube_jump_higher = 1;

    } else {
     currplayer_slope_frames = 1;
     currplayer_was_on_slope_counter = 3;
    }
   } else {
    tmp4 = 0;
    if (currplayer_slope_type & 0b0100) {
     tmp4 |= 0b100;
    }
    if (currplayer_slope_type & 0b1000) {
     tmp4 |= 0b010;
    }
    if (currplayer_gravity) {
     tmp4 |= 0b001;
    }

    if (a_check_lookup[tmp4]) {
     if (controllingplayer->hold & (0x80 | 0x08)) {
      unstick();
     }
    } else {
     if (!(controllingplayer->hold & (0x80 | 0x08))) {
      unstick();
     }
    }

    currplayer_slope_frames = 1;
    currplayer_was_on_slope_counter = 3;
   }

   return 1;
 } else if (!currplayer_was_on_slope_counter) {
   currplayer_slope_type = 0;
   tmp8 = 0;
 }

 return 0;
}
#line 744 "SAUCE/functions/collision.h"
char bg_coll_return_D () {
 tmp1 = bg_coll_U_D_checks() || bg_coll_mini_blocks();
 eject_D = tmp8;
 return tmp1;
}
#line 756 "SAUCE/functions/collision.h"
char bg_coll_return_U () {
 tmp3 = bg_coll_U_D_checks();
 tmp1 = bg_coll_mini_blocks();
 eject_U = tmp8 | (tmp3 ? 0xf0 : 0xf8);
 return tmp1 | tmp3;
}
#line 769 "SAUCE/functions/collision.h"
char bg_coll_return_slope_D () {
 tmp1 = bg_coll_slope();

 if (!tmp2) {

  if (currplayer_slope_type & 0b0100) {
   currplayer_slope_type = currplayer_last_slope_type;
   return 0;
  }
 } else {

  if (!(currplayer_slope_type & 0b0100)) {
   currplayer_slope_type = currplayer_last_slope_type;
   return 0;
  }
 }
 if (tmp1) {
  if ((currplayer_last_slope_type & 0b0100) && !(currplayer_slope_type & 0b0100)) {
   if (currplayer_last_slope_type != 0 && currplayer_slope_type != 0) {
    currplayer_slope_type = currplayer_last_slope_type;
    tmp8 = *((uint8_t*)&currplayer_vel_x+1);
   }
  }
  if (currplayer_slope_type != 0) currplayer_last_slope_type = currplayer_slope_type;
  eject_D = tmp8;
 }
 return tmp1;
}
#line 804 "SAUCE/functions/collision.h"
char bg_coll_return_slope_U () {
 tmp1 = bg_coll_slope();

 if (!tmp2) {

  if (currplayer_slope_type & 0b0100) {
   currplayer_slope_type = currplayer_last_slope_type;
   return 0;
  }
 } else {

  if (!(currplayer_slope_type & 0b0100)) {
   currplayer_slope_type = currplayer_last_slope_type;
   return 0;
  }
 }

 if (tmp1) {
  if ((currplayer_last_slope_type & 0b0100) && !(currplayer_slope_type & 0b0100)) {
   if (currplayer_last_slope_type != 0 && currplayer_slope_type != 0) {
    currplayer_slope_type = currplayer_last_slope_type;
    tmp8 = *((uint8_t*)&currplayer_vel_x+1);
   }
  }
  if (currplayer_slope_type != 0) currplayer_last_slope_type = currplayer_slope_type;
  eject_U = -tmp8;
 }
 return tmp1;
}
#line 849 "SAUCE/functions/collision.h"
char bg_coll_U() {



 if (*((uint8_t*)&currplayer_x+1) >= 0x10) {
  (__AX__ = ((__A__ = Generic.y + ((((0x10 - Generic.height)&0xFF)) >> 1) + (currplayer_mini ? 1 : 2) + (gamemode == 0x01 ? 1 : 0), __asm__("sta sreg+0")), __AX__ = scroll_y, _add_scroll_y(__EAX__)), __asm__("STA %v", temp_y), __asm__("STX %v", temp_room))



                        ;
  temp_x = Generic.x + *((uint16_t*)&scroll_x);

  tmp2 = 0;
  *((uint8_t*)&tmp3) = 0;
  do {
   bg_collision_sub();

   if (collision) {

    *((uint8_t*)&tmp3) |= bg_coll_return_slope_U();
   }

   temp_x += Generic.width;
  } while (++tmp2 < 2);
  if (*((uint8_t*)&tmp3)) return 1;
 }

 if (*((uint8_t*)&currplayer_vel_y+1) & 0x80) {
  temp_x = Generic.x + *((uint16_t*)&scroll_x) + (gamemode == 0x06 || gamemode == 0x0A ? 10 : 0);

  (__AX__ = ((__A__ = Generic.y + (currplayer_mini ? (((0x10 - Generic.height)&0xFF)) >> 1 : 0) + 1, __asm__("sta sreg+0")), __AX__ = scroll_y, _add_scroll_y(__EAX__)), __asm__("STA %v", temp_y), __asm__("STX %v", temp_room))



                        ;

  tmp8 = (temp_y) & 0x0f;

  bg_collision_sub(); if (collision) { if (bg_coll_return_U()) { ( __A__ = currplayer, __asm__("tay"), __A__ = cube_data[currplayer] & 0b1111110, __asm__("sta %v, y", cube_data)); return 1; } }

  temp_x += Generic.width >> 1;

  bg_collision_sub(); if (collision) { if (bg_coll_return_U()) { ( __A__ = currplayer, __asm__("tay"), __A__ = cube_data[currplayer] & 0b1111110, __asm__("sta %v, y", cube_data)); return 1; } }

  temp_x = Generic.x + *((uint16_t*)&scroll_x) + (Generic.width);

  bg_collision_sub(); if (collision) { if (bg_coll_return_U()) { ( __A__ = currplayer, __asm__("tay"), __A__ = cube_data[currplayer] & 0b1111110, __asm__("sta %v, y", cube_data)); return 1; } }
 }
 return 0;

}
#line 921 "SAUCE/functions/collision.h"
char bg_coll_D() {


 if (*((uint8_t*)&currplayer_x+1) >= 0x10) {
  (__AX__ = ((__A__ = Generic.y + Generic.height - 2 + (currplayer_mini ? (((0x10 - Generic.height)&0xFF)) >> 1 : 0), __asm__("sta sreg+0")), __AX__ = scroll_y, _add_scroll_y(__EAX__)), __asm__("STA %v", temp_y), __asm__("STX %v", temp_room))


                        ;
  temp_x = Generic.x + *((uint16_t*)&scroll_x);

  tmp2 = 0;
  *((uint8_t*)&tmp3) = 0;
  do {
   bg_collision_sub();

   if (collision) {

    *((uint8_t*)&tmp3) |= bg_coll_return_slope_D();
   }
   temp_x += Generic.width;
  } while (++tmp2 < 2);
  if (*((uint8_t*)&tmp3)) return 1;
 }

 if (!(*((uint8_t*)&currplayer_vel_y+1) & 0x80)) {

  temp_x = Generic.x + *((uint16_t*)&scroll_x) + (gamemode == 0x06 || gamemode == 0x0A ? 4 : 0);

  (__AX__ = ((__A__ = Generic.y + Generic.height + (currplayer_mini ? (((0x10 - Generic.height)&0xFF)) >> 1 : 0), __asm__("sta sreg+0")), __AX__ = scroll_y, _add_scroll_y(__EAX__)), __asm__("STA %v", temp_y), __asm__("STX %v", temp_room))



                        ;

  tmp8 = (temp_y) & 0x0f;

  bg_collision_sub(); if (collision) { if (bg_coll_return_D()) { ( __A__ = currplayer, __asm__("tay"), __A__ = cube_data[currplayer] & 0b1111110, __asm__("sta %v, y", cube_data)); return 1; } }

  temp_x += Generic.width >> 1;

  bg_collision_sub(); if (collision) { if (bg_coll_return_D()) { ( __A__ = currplayer, __asm__("tay"), __A__ = cube_data[currplayer] & 0b1111110, __asm__("sta %v, y", cube_data)); return 1; } }

  temp_x = Generic.x + *((uint16_t*)&scroll_x) + (Generic.width);

  bg_collision_sub(); if (collision) { if (bg_coll_return_D()) { ( __A__ = currplayer, __asm__("tay"), __A__ = cube_data[currplayer] & 0b1111110, __asm__("sta %v, y", cube_data)); return 1; } }
 }

 return 0;
}




char bg_coll_U_spider() {
 temp_x = tmp7;
 (__AX__ = ((__A__ = Generic.y + (currplayer_mini ? (((0x10 - Generic.height)&0xFF)) >> 1 : 0), __asm__("sta sreg+0")), __AX__ = scroll_y, _add_scroll_y(__EAX__)), __asm__("STA %v", temp_y), __asm__("STX %v", temp_room))



                       ;

 tmp8 = (temp_y) & 0x0f;

 bg_collision_sub(); if (collision) { if (bg_coll_return_U()) { ( __A__ = currplayer, __asm__("tay"), __A__ = cube_data[currplayer] & 0b1111110, __asm__("sta %v, y", cube_data)); return 1; } }

 temp_x = tmp9;

 bg_collision_sub(); if (collision) { if (bg_coll_return_U()) { ( __A__ = currplayer, __asm__("tay"), __A__ = cube_data[currplayer] & 0b1111110, __asm__("sta %v, y", cube_data)); return 1; } }

 return 0;
}

char bg_coll_D_spider() {
 temp_x = tmp7;
 (__AX__ = ((__A__ = Generic.y + Generic.height + (currplayer_mini ? (((0x10 - Generic.height)&0xFF)) >> 1 : 0), __asm__("sta sreg+0")), __AX__ = scroll_y, _add_scroll_y(__EAX__)), __asm__("STA %v", temp_y), __asm__("STX %v", temp_room))



                       ;

 tmp8 = (temp_y) & 0x0f;

 bg_collision_sub(); if (collision) { if (bg_coll_return_D()) { ( __A__ = currplayer, __asm__("tay"), __A__ = cube_data[currplayer] & 0b1111110, __asm__("sta %v, y", cube_data)); return 1; } }

 temp_x = tmp9;

 bg_collision_sub(); if (collision) { if (bg_coll_return_D()) { ( __A__ = currplayer, __asm__("tay"), __A__ = cube_data[currplayer] & 0b1111110, __asm__("sta %v, y", cube_data)); return 1; } }

 return 0;
}
#line 1019 "SAUCE/functions/collision.h"
void bg_coll_death() {




 temp_x = Generic.x + *((uint16_t*)&scroll_x) + (Generic.width >> 1)-1;

 (__AX__ = ((__A__ = Generic.y + (Generic.height >> 1) + (currplayer_mini ? (((0x10 - Generic.height)&0xFF)) >> 1 : 0), __asm__("sta sreg+0")), __AX__ = scroll_y, _add_scroll_y(__EAX__)), __asm__("STA %v", temp_y), __asm__("STX %v", temp_room))



                       ;

 bg_collision_sub();

 if (collision) {
  if (!dblocked[currplayer] || gamemode != 0x06) {
   if (bg_coll_U_D_checks() | bg_coll_mini_blocks() | bg_coll_spikes() | bg_coll_slope()) {
    ( __A__ = currplayer, __asm__("tay"), __A__ = cube_data[currplayer] | 1, __asm__("sta %v, y", cube_data));
   }
  }
  else {
   if (bg_coll_mini_blocks() | bg_coll_spikes() | bg_coll_slope()) {
    ( __A__ = currplayer, __asm__("tay"), __A__ = cube_data[currplayer] | 1, __asm__("sta %v, y", cube_data));
   }
  }
 }




}

void commonly_used_store() {
  (__AX__ = ((__A__ = Generic.y + (currplayer_mini ? ((((0x10 - Generic.height)&0xFF)) >> 1) : 0) + Generic.height - 2, __asm__("sta sreg+0")), __AX__ = scroll_y, _add_scroll_y(__EAX__)), __asm__("STA %v", temp_y), __asm__("STX %v", temp_room))


                        ;
}
void commonly_stored_routine_2() {
 (__AX__ = ((__A__ = Generic.y + (currplayer_mini ? ((((0x10 - Generic.height)&0xFF)) >> 1) : 2), __asm__("sta sreg+0")), __AX__ = scroll_y, _add_scroll_y(__EAX__)), __asm__("STA %v", temp_y), __asm__("STX %v", temp_room))



                       ;
}

void commonly_used_death_check() {
 __A__ = (uint8_t)(temp_x & 0x0f); __asm__("sec \n sbc #%b \n sbc #%b-%b+1 ", 0x04, 0x08, 0x04); do { __asm__("j" "cs" " %s", 1069); do { cube_data[currplayer] = 1; } while(0); __asm__("%s:", 1069); } while(0)

   ;
}


_Pragma ("code-name(pop)") _Pragma ("data-name(pop)") _Pragma ("rodata-name(pop)")

#line 73 "SAUCE/include.h"
#line 1 "SAUCE/functions/reset_level.h"
extern unsigned char drawing_frame;
extern unsigned char* PARALLAX_CHR;

void check_practice_point_deletion();
void music_restore();

void death_animation() {
 (++auto_fs_updates);
 if (!practice_point_count || practice_music_sync) famistudio_music_stop();

 tmp1 = 30;
 if (!DEBUG_MODE) {
  if (cube_data[0] & 1) tmp2 = 0;
  else if (cube_data[1] & 1) tmp2 = 1;




  update_level_completeness();
  (__AX__ = (uint16_t)((((0)&0xFF)))<<8|0, _sfx_play(__AX__));
  while (tmp1 != 0){
   ppu_wait_nmi();

   (__asm__("lda #<%v \n ldx #>%v \n ldy #<.bank(%v) \n jsr crossPRGBankJump ", check_practice_point_deletion, check_practice_point_deletion, check_practice_point_deletion), __asm__("lda ptr3 \n ldx ptr3+1"), __AX__);

   dual == 1 ? oam_clear_two_players() : oam_clear_player();

   if (robotjumpframe[0] < 20) {
    if (retro_mode && !(gamemode == 0x04 || gamemode == 0x08 || gamemode == 0x03 || gamemode == 0x01)) mmc3_set_2kb_chr_bank_0(20);
    ((__AX__ = ((((( __A__ = tmp2<<1, __asm__("tay"), __asm__("lda %v+1, y", player_y), __A__)-2)&0xFF))<<8)|(((( __A__ = tmp2<<1, __asm__("tay"), __asm__("lda %v+1, y", player_x), __A__)-2)&0xFF)), __EAX__<<=16), __AX__ = (uintptr_t)((void *)(retro_mode && (gamemode == 0x04 || gamemode == 0x08 || gamemode == 0x03 || gamemode == 0x01)) ? ExplodeR_Sprites[robotjumpframe[0] & 0x7F] : Explode_Sprites[robotjumpframe[0] & 0x7F]), _oam_meta_spr(__EAX__))



                                               ;
    ++robotjumpframe[0];
   }

   if (practice_point_count > 1 && (((mouse.connected ? 0 : joypad2.press) | joypad1.press) & 0x20)) {
    curr_practice_point--;
    if (curr_practice_point >= practice_point_count)
     curr_practice_point = practice_point_count - 1;
   }

   --tmp1;
  }
 }

 (_pal_fade_to((0<<8)|(((4)&0xFF))));
 oam_clear();
 ppu_off();
 (auto_fs_updates = 0);
}

_Pragma ("code-name(push, \"XCD_BANK_06\" )") _Pragma ("data-name(push, \"XCD_BANK_06\" )") _Pragma ("rodata-name(push, \"XCD_BANK_06\" )")
void reset_level() {
 (++auto_fs_updates);


 gameState = 0x02;


 currplayer_was_on_slope_counter = 0;
 was_on_slope_counter[0] = 0;
 was_on_slope_counter[1] = 0;
 jumps = 0;
 ufo_orbed[0] = 0;
 ufo_orbed[1] = 0;
 black_orbed[0] = 0;
 black_orbed[1] = 0;
 slowmode = 0;
 wrap_mode = 0;
 nullscapes_active = 0;
 nullscapes_orb_type = 0;
 force_platformer = 0;
 player_invis = 0;
 robotjumpframe[0] = 0;
 robotjumpframe[1] = 0;
 slope_frames[0] = 0;
 slope_frames[1] = 0;
 nocamlockforced = 0;
 minicoins = 0;
 kandoframecnt = 0;
 currplayer_slope_frames = 0;
 make_cube_jump_higher = 0;

 player_mini[0] = player_mini[1] = currplayer_mini = 0;
 player_vel_x[0] = player_vel_x[1] = currplayer_vel_x = 0;
 player_vel_y[0] = player_vel_y[1] = currplayer_vel_y = 0;
 forced_trails = 0;
 cube_rotate[0] = 0;
 cube_rotate[1] = 0;
 chargepower[0] = 0;
 chargepower[1] = 0;
 coins = 0;
 orbactive = 0;
 coin1_timer = coin2_timer = coin3_timer = 0;
 slope_type[0] = 0b0000;
 slope_type[1] = 0b0000;
 currplayer_slope_type = 0b0000;
 last_slope_type[0] = 0b0000;
 last_slope_type[1] = 0b0000;
 currplayer_last_slope_type = 0b0000;
 curr_practice_point = latest_practice_point;




 seam_scroll_y = (0x2EF - 0x78);
 set_scroll_x(scroll_x);
 set_scroll_y(scroll_y);
 init_rld(level);

 scroll_y_subpx = 0;
 scroll_y = spawn_scroll_y_pos;

 if (!(options & 0x04) && !force_platformer) {
 player_x[0] = 0x0000;
 player_x[1] = 0x0000;
 currplayer_x = 0x0000;
 } else {
 player_x[0] = 0x1110;
 player_x[1] = 0x1110;
 currplayer_x = 0x1110;
 }

 target_scroll_y = 0x0180;
 curr_x_scroll_stop = 0x5000;
 target_x_scroll_stop = 0x5000;
 discoframe = 0;
 if (!practice_point_count) {
  (((const void ** const)xargs)[0] = player_old_posy, (__AX__ = (uintptr_t)sizeof(player_old_posy), __EAX__<<=16), __A__ = 0, _memfill(__EAX__));
  (((const void ** const)xargs)[0] = trail_sprites_visible, (__AX__ = (uintptr_t)sizeof(trail_sprites_visible), __EAX__<<=16), __A__ = 0, _memfill(__EAX__));
  invincible_counter = 8;
 }
 update_currplayer_table_idx();

 (__asm__("lda #<%v \n ldx #>%v \n ldy #<.bank(%v) \n jsr crossPRGBankJump ", unrle_first_screen, unrle_first_screen, unrle_first_screen), __asm__("lda ptr3 \n ldx ptr3+1"), __AX__);

 if (!no_parallax) mmc3_set_1kb_chr_bank_2(parallax_scroll_x + (__asm__("ldx #0\nlda #<.bank(%v)", PARALLAX_CHR), __A__));
 ppu_on_all();
 (_pal_fade_to((4<<8)|(((0)&0xFF))));
 if (!practice_point_count) {
  music_play(song);
 } else if (practice_music_sync) {
  (__asm__("lda #<%v \n ldx #>%v \n ldy #<.bank(%v) \n jsr crossPRGBankJump ", music_restore, music_restore, music_restore), __asm__("lda ptr3 \n ldx ptr3+1"), __AX__);
 }
 (auto_fs_updates = 0);
}

_Pragma ("code-name(pop)") _Pragma ("data-name(pop)") _Pragma ("rodata-name(pop)")
#line 74 "SAUCE/include.h"
#line 2 "SAUCE/functions/x_movement.h"
_Pragma ("code-name(push, \"CODE\" )") _Pragma ("data-name(push, \"CODE\" )") _Pragma ("rodata-name(push, \"CODE\" )")

void slope_vel() {
 switch (tmp8 & 0b0011) {
  case 0b10:
   tmp5 = currplayer_vel_x >> 1;
   break;
  case 0b01:
   tmp5 = currplayer_vel_x;
   break;
  case 0b11:
   tmp5 = (currplayer_vel_x << 1);
 }
}

void apply_slope_vel() {
 tmp8 = currplayer_slope_type;
 slope_vel();
 if ((currplayer_slope_type & 0b0100)) {
  if ((currplayer_slope_type & 0b1000)) {
   currplayer_vel_y = tmp5;
  } else {
   currplayer_vel_y = -tmp5;
  }
 } else {
  if ((currplayer_slope_type & 0b1000)) {
   currplayer_vel_y = -tmp5;
  } else {
   currplayer_vel_y = tmp5;
  }
 }
}

void x_movement_coll() {
  mmc3_set_prg_bank_1((__asm__("ldx #0\nlda #<.bank(%v)", bg_coll_R), __A__));

 if (currplayer_slope_frames) {
  currplayer_slope_frames -= 1;
  if (currplayer_slope_type) {

   apply_slope_vel();
  }
 }

 Generic.x = *((uint8_t*)&currplayer_x+1);
 Generic.y = *((uint8_t*)&currplayer_y+1);

 if (*((uint8_t*)&currplayer_x+1) > 0x10) {
  bg_coll_floor_spikes();
  if (bg_coll_R()) {
   if (!(options & 0x04) && !force_platformer) {( __A__ = currplayer, __asm__("tay"), __A__ = cube_data[currplayer] | 0x01, __asm__("sta %v, y", cube_data));}
   else {currplayer_vel_x = 0; }
  }
 }

}

void x_movement(){
  mmc3_set_prg_bank_1((__asm__("ldx #0\nlda #<.bank(%v)", bg_coll_R), __A__));


 old_x = currplayer_x;

 currplayer_vel_x = ( __AX__ = (uintptr_t)CUBE_SPEED[framerate & 0x7F], __asm__("sta ptr1 \n stx ptr1+1"), __A__ = (speed) << 1, __asm__("tay"), __asm__("lda (ptr1), y \n tax"), __asm__("iny"), __asm__("lda (ptr1), y"), __AX__);



 if (dashing[currplayer] == 4 || dashing[currplayer] == 5) {
  if (currplayer_y < 0x0600 && scroll_y == min_scroll_y){
   ( __A__ = currplayer, __asm__("tay"), __A__ = cube_data[currplayer] | 0x01, __asm__("sta %v, y", cube_data));
  }

 }

 if (gamemode == 0x06 || gamemode == 0x0A) {
  Generic.width = 0x08;
  Generic.height = 0x08;
 } else {
  Generic.width = CUBE_WIDTH[currplayer_mini];
  Generic.height = CUBE_HEIGHT[currplayer_mini];
 }

 Generic.x = *((uint8_t*)&currplayer_x+1);
 Generic.y = *((uint8_t*)&currplayer_y+1);

 if (!(options & 0x04) && !force_platformer) {


  currplayer_x += currplayer_vel_x;
 } else {

  tmp7 = bg_coll_R();
  tmp8 = bg_coll_L();

  if (!tmp7 && (controllingplayer->right)) currplayer_x += currplayer_vel_x;
  else if (!tmp8 && controllingplayer->left && currplayer_x > 0x1000) currplayer_x -= currplayer_vel_x;
  else currplayer_vel_x = 0;


  if (tmp7 && (controllingplayer->right)) {
   tmp7 = *((uint8_t*)&currplayer_x+1) + *((uint16_t*)&scroll_x);
   *((uint8_t*)&currplayer_x+1) -= ((tmp7 + 4) & 0x07) - 4 + currplayer_mini;
  }
  else if (tmp8 && (controllingplayer->left)) {
   tmp8 = *((uint8_t*)&currplayer_x+1) + *((uint16_t*)&scroll_x);
   *((uint8_t*)&currplayer_x+1) -= ((tmp8 + 4) & 0x07) - 4;
  }
 }

 if(currplayer_x > 0xf000) {
        if(old_x >= 0xf000){
            currplayer_x = 0xf000;
        } else{
            currplayer_x = 0x0000;
        }
  currplayer_vel_x = 0;
 }


 if (!wrap_mode) {
  if (currplayer_y < 0x0600 && !dual && !twoplayer){
   ( __A__ = currplayer, __asm__("tay"), __A__ = cube_data[currplayer] | 0x01, __asm__("sta %v, y", cube_data));
  }


  else if (!(controllingplayer->hold & (0x80 | 0x08))) ( __A__ = currplayer, __asm__("tay"), __A__ = cube_data[currplayer] & 1, __asm__("sta %v, y", cube_data));
 }
 else {
  if (currplayer_y < 0x0600 && !dual && !twoplayer){
   currplayer_y = 0xF900;
  }
  else if (currplayer_y > 0xF900 && !dual && !twoplayer){
   currplayer_y = 0x0600;
  }
  else if (!(controllingplayer->hold & (0x80 | 0x08))) ( __A__ = currplayer, __asm__("tay"), __A__ = cube_data[currplayer] & 1, __asm__("sta %v, y", cube_data));
 }
}


_Pragma ("code-name(pop)") _Pragma ("data-name(pop)") _Pragma ("rodata-name(pop)")
#line 84 "SAUCE/include.h"
#line 2 "SAUCE/gamemodes/gamemode_ufo.h"
_Pragma ("code-name(push, \"XCD_BANK_01\" )") _Pragma ("data-name(push, \"XCD_BANK_01\" )") _Pragma ("rodata-name(push, \"XCD_BANK_01\" )")
void ufo_ship_eject();
void common_gravity_routine();
void ufo_movement(){

 tmpfallspeed = (( __A__ = currplayer_table_idx, __asm__("tay"), __asm__("lda %v, y \n ldx %v, y", UFO_MAX_FALLSPEED_lo, UFO_MAX_FALLSPEED_hi), __AX__));
 tmpgravity = (( __A__ = currplayer_table_idx, __asm__("tay"), __asm__("lda %v, y \n ldx %v, y", UFO_GRAVITY_lo, UFO_GRAVITY_hi), __AX__));
 common_gravity_routine();




 Generic.x = *((uint8_t*)&currplayer_x+1);
 Generic.y = *((uint8_t*)&currplayer_y+1);

 ufo_ship_eject();


 Generic.x = *((uint8_t*)&currplayer_x+1);
 Generic.y = *((uint8_t*)&currplayer_y+1);





 if((controllingplayer->press & (0x80 | 0x08)) && !ufo_orbed[currplayer]) {
  currplayer_vel_y = (( __A__ = currplayer_table_idx, __asm__("tay"), __asm__("lda %v, y \n ldx %v, y", UFO_JUMP_VEL_lo, UFO_JUMP_VEL_hi), __AX__));
  jumps++;
 }
 ufo_orbed[currplayer] = 0;
}


_Pragma ("code-name(pop)") _Pragma ("data-name(pop)") _Pragma ("rodata-name(pop)")
#line 86 "SAUCE/include.h"
#line 2 "SAUCE/gamemodes/gamemode_ball.h"
_Pragma ("code-name(push, \"XCD_BANK_01\" )") _Pragma ("data-name(push, \"XCD_BANK_01\" )") _Pragma ("rodata-name(push, \"XCD_BANK_01\" )")






void ball_eject();
void common_gravity_routine();
void ball_movement(){
#line 19 "SAUCE/gamemodes/gamemode_ball.h"
 if (gamemode == 0x07 || gamemode == 0x09) {
  tmpfallspeed = (( __A__ = currplayer_table_idx, __asm__("tay"), __asm__("lda %v, y \n ldx %v, y", SWING_MAX_FALLSPEED_lo, SWING_MAX_FALLSPEED_hi), __AX__));
  tmpgravity = (( __A__ = currplayer_table_idx, __asm__("tay"), __asm__("lda %v, y \n ldx %v, y", SWING_GRAVITY_lo, SWING_GRAVITY_hi), __AX__));
  common_gravity_routine();
 } else {
  tmpfallspeed = (( __A__ = currplayer_table_idx, __asm__("tay"), __asm__("lda %v, y \n ldx %v, y", BALL_MAX_FALLSPEED_lo, BALL_MAX_FALLSPEED_hi), __AX__));
  tmpgravity = (( __A__ = currplayer_table_idx, __asm__("tay"), __asm__("lda %v, y \n ldx %v, y", BALL_GRAVITY_lo, BALL_GRAVITY_hi), __AX__));
  common_gravity_routine();
 }

 Generic.x = *((uint8_t*)&currplayer_x+1);


 if (currplayer_gravity) {
  Generic.y = *((uint8_t*)&currplayer_y+1) - 1;
 } else {
  Generic.y = *((uint8_t*)&currplayer_y+1) + 1;
 }



 ball_eject();


 Generic.y = *((uint8_t*)&currplayer_y+1);
 Generic.x = *((uint8_t*)&currplayer_x+1);


 if (currplayer_gravity) {
  Generic.y = *((uint8_t*)&currplayer_y+1) - 1;
 } else {
  Generic.y = *((uint8_t*)&currplayer_y+1) + 1;
 }

 if (gamemode == 0x02) {
  if (((controllingplayer->hold & (0x80 | 0x08))) && (ball_switched[currplayer] == 0) && currplayer_vel_y == 0){
   jumps++;
   (currplayer_gravity ^= 0xFF);
   update_currplayer_table_idx();
   ball_switched[currplayer] = 1;
   currplayer_vel_y = (( __A__ = currplayer_table_idx, __asm__("tay"), __asm__("lda %v, y \n ldx %v, y", BALL_SWITCH_VEL_lo, BALL_SWITCH_VEL_hi), __AX__));
   bg_coll_floor_spikes();
  }
  if(ball_switched[currplayer]){
   if (!(controllingplayer->hold & (0x80 | 0x08))){
    ( __A__ = currplayer, __asm__("tay"), __A__ = cube_data[currplayer] & 1, __asm__("sta %v, y", cube_data));
    ball_switched[currplayer] = 0;
   }
  }
 }
 else if (gamemode == 0x07) {
  if ((controllingplayer->press & (0x80 | 0x08)) && !ufo_orbed[currplayer]){
   (currplayer_gravity ^= 0xFF);
   update_currplayer_table_idx();
   bg_coll_floor_spikes();
  }
 }
 else {
  if (controllingplayer->press & (0x80 | 0x08) && !orbhitonthisframe[currplayer]) {
   tmp3 = 0x06 << 3;
   tmp4 = 0x44;
   (__asm__("lda #<%v \n ldx #>%v \n ldy #<.bank(%v) \n jsr crossPRGBankJump ", sprite_gamemode_controller_check, sprite_gamemode_controller_check, sprite_gamemode_controller_check), __asm__("lda ptr3 \n ldx ptr3+1"), __AX__);
   ( __A__ = currplayer, __asm__("tay"), __A__ = cube_data[currplayer] | 0x02, __asm__("sta %v, y", cube_data));
  }
 }

 ufo_orbed[currplayer] = 0;
}

void ball_eject() {


   if(bg_coll_U()){
    *((uint8_t*)&currplayer_y+1) = *((uint8_t*)&currplayer_y+1) - eject_U;
    if (gamemode != 0x09) currplayer_vel_y = 0;
    else {
     if (!currplayer_gravity) currplayer_vel_y = 0;
     else if (!orbhitonthisframe[currplayer]) {
      currplayer_vel_y = (-currplayer_vel_y / 3) * 2;
      tmp3 = 0x01 << 3;
      tmpA = (__asm__("lda #<%v \n ldx #>%v \n ldy #<.bank(%v) \n jsr crossPRGBankJump ", sprite_gamemode_y_adjust, sprite_gamemode_y_adjust, sprite_gamemode_y_adjust), __asm__("lda ptr3 \n ldx ptr3+1"), __AX__);
      if (currplayer_vel_y < tmpA) currplayer_vel_y = tmpA;
      robotjumptime[currplayer] = 8;
     }
    }
    orbactive = 0;
    ( __A__ = currplayer, __asm__("tay"), __A__ = cube_data[currplayer] & 1, __asm__("sta %v, y", cube_data));
   }


   if(bg_coll_D()){
       *((uint8_t*)&currplayer_y+1) = *((uint8_t*)&currplayer_y+1) - eject_D;
    if (gamemode != 0x09) currplayer_vel_y = 0;
    else {
     if (currplayer_gravity) currplayer_vel_y = 0;
     else if (!orbhitonthisframe[currplayer]) {
      currplayer_vel_y = (-currplayer_vel_y / 3) * 2;
      tmp3 = 0x01 << 3;
      tmpA = (__asm__("lda #<%v \n ldx #>%v \n ldy #<.bank(%v) \n jsr crossPRGBankJump ", sprite_gamemode_y_adjust, sprite_gamemode_y_adjust, sprite_gamemode_y_adjust), __asm__("lda ptr3 \n ldx ptr3+1"), __AX__);
      if (currplayer_vel_y > tmpA) currplayer_vel_y = tmpA;
      robotjumpframe[currplayer] = 8;
     }
    }
    orbactive = 0;
    ( __A__ = currplayer, __asm__("tay"), __A__ = cube_data[currplayer] & 1, __asm__("sta %v, y", cube_data));
   }


}

_Pragma ("code-name(pop)") _Pragma ("data-name(pop)") _Pragma ("rodata-name(pop)")
#line 87 "SAUCE/include.h"
#line 2 "SAUCE/gamemodes/gamemode_cube.h"
_Pragma ("code-name(push, \"XCD_BANK_01\" )") _Pragma ("data-name(push, \"XCD_BANK_01\" )") _Pragma ("rodata-name(push, \"XCD_BANK_01\" )")

void slope_jump_check();
void x_movement_coll();
void common_gravity_routine();
void cube_eject();
void slope_vel();
void cube_movement(){






 tmpfallspeed = (( __A__ = currplayer_table_idx, __asm__("tay"), __asm__("lda %v, y \n ldx %v, y", CUBE_MAX_FALLSPEED_lo, CUBE_MAX_FALLSPEED_hi), __AX__));
 tmpgravity = (( __A__ = currplayer_table_idx, __asm__("tay"), __asm__("lda %v, y \n ldx %v, y", CUBE_GRAVITY_lo, CUBE_GRAVITY_hi), __AX__));

 if (max_fallspeed == 0x07) {
   tmpfallspeed += (( __A__ = currplayer_table_idx, __asm__("tay"), __asm__("lda %v, y \n ldx %v, y", DASH_END_VEL_RESET_lo, DASH_END_VEL_RESET_hi), __AX__));
 }

 common_gravity_routine();

 Generic.x = *((uint8_t*)&currplayer_x+1);
 Generic.y = *((uint8_t*)&currplayer_y+1);


 cube_eject();



 Generic.x = *((uint8_t*)&currplayer_x+1);
 Generic.y = *((uint8_t*)&currplayer_y+1);

 update_currplayer_table_idx();


 if ((gamemode == 0x00 && currplayer_vel_y == 0 && dashing[currplayer] == 0) || (gamemode == 0x00 && (kandokidshack == 9 && dashing[currplayer] == 0)) || (gamemode == 0x08 && !retro_mode)){


   if (gamemode == 0x08 && currplayer_vel_y == 0) ninjajumps[currplayer] = 3;

   if (gamemode != 0x08) ( __A__ = currplayer, __asm__("tay"), __A__ = cube_data[currplayer] & 1, __asm__("sta %v, y", cube_data));

   else {
    if (ninjajumps[currplayer]) ( __A__ = currplayer, __asm__("tay"), __A__ = cube_data[currplayer] & 1, __asm__("sta %v, y", cube_data));
   }

   if((controllingplayer->hold & (0x80 | 0x08)) && (!jblocked[currplayer] && !fblocked[currplayer] && !kandokidshack && gamemode == 0x00)) {
    if (!orbed[currplayer]) {
     jumps++;

     currplayer_vel_y = (( __A__ = currplayer_table_idx, __asm__("tay"), __asm__("lda %v, y \n ldx %v, y", JUMP_VEL_lo, JUMP_VEL_hi), __AX__));

     slope_jump_check();

    }

   }
   else if((controllingplayer->press & (0x80 | 0x08)) && (jblocked[currplayer] || fblocked[currplayer] || kandokidshack || (gamemode == 0x08 && ninjajumps[currplayer] && !orbhitonthisframe[currplayer] && !orbed[currplayer]))) {
    jumps++;
    currplayer_vel_y = (( __A__ = currplayer_table_idx, __asm__("tay"), __asm__("lda %v, y \n ldx %v, y", JUMP_VEL_lo, JUMP_VEL_hi), __AX__));

    slope_jump_check();

    if (gamemode == 0x08) { ( __AX__ = currplayer << 8, __asm__("dec %v,x", ninjajumps), __asm__("lda %v,x", ninjajumps), __A__); orbhitonthisframe[currplayer] = 1; }

   }
 }

 else if (gamemode == 0x04 || (retro_mode && gamemode == 0x08)) {

   if (gamemode == 0x08 && currplayer_vel_y == 0) ninjajumps[currplayer] = 3;

   else if (gamemode == 0x08 && currplayer_vel_y != 0) {
    if (ninjajumps[currplayer]) ( __A__ = currplayer, __asm__("tay"), __A__ = cube_data[currplayer] & 1, __asm__("sta %v, y", cube_data));
   }


  if (controllingplayer->press & (0x80 | 0x08)) {
   ( __A__ = currplayer, __asm__("tay"), __A__ = cube_data[currplayer] | 0b100, __asm__("sta %v, y", cube_data));
  }


  if ((!retro_mode && (currplayer_vel_y == 0) && !hblocked[currplayer] && dashing[currplayer] == 0 && cube_data[currplayer] & 4) || (dashing[currplayer] == 0 && kandokidshack == 9)){
   ( __A__ = currplayer, __asm__("tay"), __A__ = cube_data[currplayer] & 1, __asm__("sta %v, y", cube_data));
   if((controllingplayer->hold & (0x80 | 0x08)) && !orbed[currplayer]) {
    if((controllingplayer->press & (0x80 | 0x08))) jumps++;
    currplayer_vel_y = (( __A__ = currplayer_table_idx, __asm__("tay"), __asm__("lda %v, y \n ldx %v, y", ROBOT_JUMP_VEL_lo, ROBOT_JUMP_VEL_hi), __AX__));


    __A__ = ROBOT_JUMP_TIME[framerate], __asm__("pha");
    ( __A__ = currplayer, __asm__("tay"), __A__ = (__asm__("pla"), __A__), __asm__("sta %v, y", robotjumptime));
    robotjumpframe[0] = 1;
   }
  }

  else if ((gamemode == 0x04 && retro_mode && (currplayer_vel_y == 0) && !hblocked[currplayer] && dashing[currplayer] == 0 && cube_data[currplayer] & 4) || (gamemode == 0x08 && retro_mode && !orbhitonthisframe[currplayer] && ninjajumps[currplayer] && !hblocked[currplayer] && dashing[currplayer] == 0 && cube_data[currplayer] & 4)) {
   ( __A__ = currplayer, __asm__("tay"), __A__ = cube_data[currplayer] & 1, __asm__("sta %v, y", cube_data));
   if((controllingplayer->hold & (0x80 | 0x08)) && !orbed[currplayer]) {
    if((controllingplayer->press & (0x80 | 0x08))) jumps++;
    currplayer_vel_y = (( __A__ = currplayer_table_idx, __asm__("tay"), __asm__("lda %v, y \n ldx %v, y", ROBOT_JUMP_VEL_lo, ROBOT_JUMP_VEL_hi), __AX__));

    if (gamemode == 0x08) { ( __AX__ = currplayer << 8, __asm__("dec %v,x", ninjajumps), __asm__("lda %v,x", ninjajumps), __A__); orbhitonthisframe[currplayer] = 1; }


    __A__ = ROBOT_JUMP_TIME[framerate], __asm__("pha");
    ( __A__ = currplayer, __asm__("tay"), __A__ = (__asm__("pla"), __A__), __asm__("sta %v, y", robotjumptime));
    robotjumpframe[0] = 1;
   }
  }

  else if (robotjumptime[currplayer] && !hblocked[currplayer]) {

    ( __A__ = currplayer, __asm__("tay"), __A__ = cube_data[currplayer] & 0b11111011, __asm__("sta %v, y", cube_data));
    cube_data[currplayer] = 0;
    if (robotjumptime[currplayer]) ( __AX__ = currplayer << 8, __asm__("dec %v,x", robotjumptime), __asm__("lda %v,x", robotjumptime), __A__);
    if((controllingplayer->hold & (0x80 | 0x08)) && !jblocked[currplayer] && !orbed[currplayer]) {
     if((controllingplayer->press & (0x80 | 0x08))) jumps++;
     if (robotjumpframe[0]) robotjumpframe[0]++;
     if ( robotjumpframe[0] > 3 ) robotjumpframe[0] = 3;
     currplayer_vel_y = (( __A__ = currplayer_table_idx, __asm__("tay"), __asm__("lda %v, y \n ldx %v, y", ROBOT_JUMP_VEL_lo, ROBOT_JUMP_VEL_hi), __AX__));
    }
    else if((controllingplayer->press & (0x80 | 0x08)) && jblocked[currplayer] && !orbed[currplayer]) {
     jumps++;
     if (robotjumpframe[0]) robotjumpframe[0]++;
     if ( robotjumpframe[0] > 3 ) robotjumpframe[0] = 3;
     currplayer_vel_y = (( __A__ = currplayer_table_idx, __asm__("tay"), __asm__("lda %v, y \n ldx %v, y", ROBOT_JUMP_VEL_lo, ROBOT_JUMP_VEL_hi), __AX__));
    }
    else {
     robotjumptime[currplayer] = 0; robotjumpframe[0] = 0;
    }
  }
  else if (currplayer_vel_y != 0){
    robotjumpframe[0] = 3;
  }
 }

 else if (gamemode == 0x0B) {

  if (controllingplayer->hold & (0x80 | 0x08) && !orbed[currplayer]) { chargepower[currplayer]++; }
  if (chargepower[currplayer] >= 50) { chargepower[currplayer] = 0; orbed[currplayer] = 1; }

 }

 if (gamemode == 0x0B && !(controllingplayer->hold & (0x80 | 0x08))) {

  orbed[currplayer] = 0;

  tmp3 = (chargepower[currplayer] > 45 ? 45 : chargepower[currplayer]);

  tmpA = (tmp3 * (currplayer_gravity ? 0x004C : -0x004C));

  if (chargepower[currplayer] && currplayer_vel_y == 0) { currplayer_vel_y = tmpA; }

  chargepower[currplayer] = 0;

 }
 fblocked[currplayer] = 0;
 hblocked[currplayer] = 0;
 jblocked[currplayer] = 0;

}


void common_gravity_routine() {
 register int16_t tmpaccel;
 tmp1 = dashing[currplayer];
 if (!tmp1) {
  tmpaccel = tmpgravity;
  if((!currplayer_gravity ? currplayer_vel_y > tmpfallspeed : currplayer_vel_y < tmpfallspeed)){
   tmpaccel = -tmpaccel;
  }
  switch (gravity_mod) {
   case 0: break;
   case 1: tmpaccel /= 3; break;
   case 2: tmpaccel /= 2; break;
   case 3: tmpaccel = (tmpaccel / 3 * 2); break;
   case 4: tmpaccel *= 2; break;
  };
  currplayer_vel_y += tmpaccel;
 } else if (tmp1 == 2) {
  currplayer_vel_y = -currplayer_vel_x;
 } else if (tmp1 == 3) {
  currplayer_vel_y = currplayer_vel_x;
 } else if (tmp1 == 4) {
  currplayer_vel_y = currplayer_vel_x*2;
  currplayer_y -= currplayer_vel_y;
  return;
 } else if (tmp1 == 5) {
  currplayer_vel_y = currplayer_vel_x*2;
 } else {
  currplayer_vel_y = currplayer_gravity ? -1 : 1;
  return;
 }
 currplayer_y += currplayer_vel_y;
}


void cube_eject() {

  if(!currplayer_gravity || (currplayer_gravity && (hblocked[currplayer] | fblocked[currplayer]))){
   if(bg_coll_D()){
    *((uint8_t*)&currplayer_y+1) -= eject_D;
    *((uint8_t*)&currplayer_y) = 0;
    if (!hblocked[currplayer]) {
     currplayer_vel_y = 0;
    } else {
     currplayer_vel_y = 0xffff;
    }
    orbactive = 0;
    if (fblocked[currplayer]) {
     currplayer_gravity = 0x00;
     update_currplayer_table_idx();
    }
   }
  }


  if (currplayer_gravity || (!currplayer_gravity && (hblocked[currplayer] | fblocked[currplayer]))) {
   if(bg_coll_U()){
    *((uint8_t*)&currplayer_y+1) -= eject_U;
    *((uint8_t*)&currplayer_y) = 0;
    if (!hblocked[currplayer]) {
     currplayer_vel_y = 0;
    } else {
     currplayer_vel_y = 1;
    }
    orbactive = 0;
    if (fblocked[currplayer]) {
     currplayer_gravity = 0xFF;
     update_currplayer_table_idx();
    }
   }
  }

}

void slope_jump_check() {
 if (make_cube_jump_higher) {
  if ((currplayer_slope_type & 0b0011) != 0b10) {
   currplayer_vel_y += (( __A__ = currplayer_table_idx, __asm__("tay"), __asm__("lda %v, y \n ldx %v, y", MAKE_CUBE_JUMP_HIGHER_lo, MAKE_CUBE_JUMP_HIGHER_hi), __AX__));
  }
  make_cube_jump_higher = 0;
 }
}

_Pragma ("code-name(pop)") _Pragma ("data-name(pop)") _Pragma ("rodata-name(pop)")
#line 88 "SAUCE/include.h"
#line 2 "SAUCE/gamemodes/gamemode_ship.h"
_Pragma ("code-name(push, \"XCD_BANK_01\" )") _Pragma ("data-name(push, \"XCD_BANK_01\" )") _Pragma ("rodata-name(push, \"XCD_BANK_01\" )")

void ufo_ship_eject();

void is_player_falling() {
 tmp1 = (currplayer_gravity ? (currplayer_vel_y < 0) : (currplayer_vel_y > 0));
}

void ship_movement(){
 is_player_falling();

 tmp2 = (controllingplayer->hold & (0x80 | 0x08)) != 0;

 if (tmp2) {
  tmpgravity = (( __A__ = currplayer_table_idx, __asm__("tay"), __asm__("lda %v, y \n ldx %v, y", SHIP_GRAVITY_BASE_lo, SHIP_GRAVITY_BASE_hi), __AX__));
 } else if (
  !tmp2 &&
  !tmp1
 ){
  tmpgravity = (( __A__ = currplayer_table_idx, __asm__("tay"), __asm__("lda %v, y \n ldx %v, y", SHIP_GRAVITY_AFTER_HOLD_lo, SHIP_GRAVITY_AFTER_HOLD_hi), __AX__));
 } else {
  tmpgravity = (( __A__ = currplayer_table_idx, __asm__("tay"), __asm__("lda %v, y \n ldx %v, y", SHIP_GRAVITY_lo, SHIP_GRAVITY_hi), __AX__));
 }

 if (tmp2 &&
  tmp1
 ){
  tmpgravity = (( __A__ = currplayer_table_idx, __asm__("tay"), __asm__("lda %v, y \n ldx %v, y", SHIP_GRAVITY_HOLD_FALL_lo, SHIP_GRAVITY_HOLD_FALL_hi), __AX__));
 }

 if (tmp2 ^ (currplayer_gravity ? 1 : 0)) {
  tmpgravity = -tmpgravity;
 }


 tmpfallspeed = 0x4443;

 common_gravity_routine();


 if (currplayer_gravity) {
  if(currplayer_vel_y < -0x0369) currplayer_vel_y = -0x0369;
  if(currplayer_vel_y > 0x0443) currplayer_vel_y = 0x0443;
 } else {
  if(currplayer_vel_y < -0x0443) currplayer_vel_y = -0x0443;
  if(currplayer_vel_y > 0x0369) currplayer_vel_y = 0x0369;
 }

 Generic.x = *((uint8_t*)&currplayer_x+1);
 Generic.y = *((uint8_t*)&currplayer_y+1);


 ufo_ship_eject();

}

void ufo_ship_eject() {

  if(bg_coll_U()){
   *((uint8_t*)&currplayer_y+1) = *((uint8_t*)&currplayer_y+1) - eject_U - 1;
   currplayer_vel_y = 0;
  }


  if(bg_coll_D()){
   *((uint8_t*)&currplayer_y+1) = *((uint8_t*)&currplayer_y+1) - eject_D;
   currplayer_vel_y = 0;
  }

}

_Pragma ("code-name(pop)") _Pragma ("data-name(pop)") _Pragma ("rodata-name(pop)")
#line 89 "SAUCE/include.h"
#line 2 "SAUCE/gamemodes/gamemode_spider.h"
_Pragma ("code-name(push, \"XCD_BANK_01\" )") _Pragma ("data-name(push, \"XCD_BANK_01\" )") _Pragma ("rodata-name(push, \"XCD_BANK_01\" )")

void cube_vel_stuff();
void spider_eject();
void common_gravity_routine();
void spider_movement(){

 tmpfallspeed = (( __A__ = currplayer_table_idx, __asm__("tay"), __asm__("lda %v, y \n ldx %v, y", SPIDER_MAX_FALLSPEED_lo, SPIDER_MAX_FALLSPEED_hi), __AX__));
 tmpgravity = (( __A__ = currplayer_table_idx, __asm__("tay"), __asm__("lda %v, y \n ldx %v, y", SPIDER_GRAVITY_lo, SPIDER_GRAVITY_hi), __AX__));

 common_gravity_routine();

 Generic.x = *((uint8_t*)&currplayer_x+1);


 if (currplayer_gravity) {
  Generic.y = *((uint8_t*)&currplayer_y+1) - 2;
 } else {
  Generic.y = *((uint8_t*)&currplayer_y+1) + 1;
 }

 spider_eject();

 if (!currplayer_gravity) {
  if(((controllingplayer->press & (0x80 | 0x08)) ||
   ((controllingplayer->hold & (0x80 | 0x08)) && black_orbed[currplayer]) ||
   cube_data[currplayer] & 2) && currplayer_vel_y == 0 && !orbed[currplayer] && !dashing[currplayer]) {
   ( __A__ = currplayer, __asm__("tay"), __A__ = cube_data[currplayer] & 0b11111101, __asm__("sta %v, y", cube_data));
   jumps++;
   currplayer_gravity = 0xFF;
   update_currplayer_table_idx();
   spider_up_wait();
   *((uint8_t*)&currplayer_y+1) -= eject_U;
   currplayer_vel_y = 0;
   black_orbed[currplayer] = 0;
  }
  else if (!(controllingplayer->hold & (0x80 | 0x08))) black_orbed[currplayer] = 0;
}
 else {
  if(((controllingplayer->press & (0x80 | 0x08)) ||
   ((controllingplayer->hold & (0x80 | 0x08)) && black_orbed[currplayer]) ||
   cube_data[currplayer] & 2) && currplayer_vel_y == 0 && !orbed[currplayer] && !dashing[currplayer]) {
   ( __A__ = currplayer, __asm__("tay"), __A__ = cube_data[currplayer] & 0b11111101, __asm__("sta %v, y", cube_data));
   jumps++;
   currplayer_gravity = 0x00;
   update_currplayer_table_idx();
   spider_down_wait();
   *((uint8_t*)&currplayer_y+1) -= eject_D;
   currplayer_vel_y = 0;
   black_orbed[currplayer] = 0;
  }
  else if (!(controllingplayer->hold & (0x80 | 0x08))) black_orbed[currplayer] = 0;
 }
#line 66 "SAUCE/gamemodes/gamemode_spider.h"
 Generic.y = *((uint8_t*)&currplayer_y+1);


}



void spider_eject() {
 if(!currplayer_gravity){
  if(bg_coll_D()){
   *((uint8_t*)&currplayer_y+1) -= eject_D;
   currplayer_vel_y = 0;


  }
 } else {
  if(bg_coll_U()){
   *((uint8_t*)&currplayer_y+1) -= eject_U + 1;
   currplayer_vel_y = 0;

  }
 }
}


void spider_up_wait() {
 tmp7 = Generic.x + *((uint16_t*)&scroll_x) + 3;
 tmp9 = Generic.x + *((uint16_t*)&scroll_x) + Generic.width - 3;
 do {
  *((uint8_t*)&currplayer_y+1) -= 0x08;
  (__asm__("lda #<%v \n ldx #>%v \n ldy #<.bank(%v) \n jsr crossPRGBankJump ", process_y_scroll, process_y_scroll, process_y_scroll), __asm__("lda ptr3 \n ldx ptr3+1"), __AX__);
  if (*((uint8_t*)&currplayer_y+1) <= 0x07){
   ( __A__ = currplayer, __asm__("tay"), __A__ = cube_data[currplayer] | 0x01, __asm__("sta %v, y", cube_data));
   break;
  }
  Generic.y = *((uint8_t*)&currplayer_y+1);
 } while (!bg_coll_U_spider());
}

void spider_down_wait() {
 tmp7 = Generic.x + *((uint16_t*)&scroll_x) + 3;
 tmp9 = Generic.x + *((uint16_t*)&scroll_x) + Generic.width - 3;
 do {
  *((uint8_t*)&currplayer_y+1) += 0x08;
  (__asm__("lda #<%v \n ldx #>%v \n ldy #<.bank(%v) \n jsr crossPRGBankJump ", process_y_scroll, process_y_scroll, process_y_scroll), __asm__("lda ptr3 \n ldx ptr3+1"), __AX__);
  if (*((uint8_t*)&currplayer_y+1) >= 0xF8) {
   ( __A__ = currplayer, __asm__("tay"), __A__ = cube_data[currplayer] | 0x01, __asm__("sta %v, y", cube_data));
   break;
  }
  Generic.y = *((uint8_t*)&currplayer_y+1);
 } while (!bg_coll_D_spider());
}


_Pragma ("code-name(pop)") _Pragma ("data-name(pop)") _Pragma ("rodata-name(pop)")
#line 90 "SAUCE/include.h"
#line 2 "SAUCE/gamemodes/gamemode_wave.h"
_Pragma ("code-name(push, \"XCD_BANK_01\" )") _Pragma ("data-name(push, \"XCD_BANK_01\" )") _Pragma ("rodata-name(push, \"XCD_BANK_01\" )")

void wave_eject();
void wave_movement(){



 tmp1 = dashing[currplayer];

 switch (tmp1) {

  case 0:
   currplayer_vel_y = !currplayer_mini ?
    (currplayer_gravity ? -currplayer_vel_x : currplayer_vel_x) :
    (currplayer_gravity ? -(currplayer_vel_x << 1) : (currplayer_vel_x << 1));

   if (controllingplayer->hold & (0x80 | 0x08) && gamemode != 0x0A) currplayer_vel_y = -currplayer_vel_y;

   else if (controllingplayer->hold & (0x80 | 0x08)) {
    tmp4 = 0x46;
    (__asm__("lda #<%v \n ldx #>%v \n ldy #<.bank(%v) \n jsr crossPRGBankJump ", sprite_gamemode_controller_check, sprite_gamemode_controller_check, sprite_gamemode_controller_check), __asm__("lda ptr3 \n ldx ptr3+1"), __AX__);
   }

   if (!currplayer_slope_frames && !currplayer_was_on_slope_counter) {
    currplayer_y += currplayer_vel_y;
   } else {
    currplayer_vel_y = 0;
   }
   break;
  case 1: currplayer_vel_y = 1; break;
  case 2: currplayer_vel_y = -currplayer_vel_x; currplayer_y += currplayer_vel_y; break;
  case 3: currplayer_vel_y = currplayer_vel_x; currplayer_y += currplayer_vel_y; break;
  case 4: currplayer_vel_y = currplayer_vel_x; currplayer_y -= currplayer_vel_y; break;
  case 5: currplayer_vel_y = currplayer_vel_x; currplayer_y += currplayer_vel_y; break;

 };
 Generic.x = *((uint8_t*)&currplayer_x+1) + 4;


 Generic.y = *((uint8_t*)&currplayer_y+1) + ((*((uint8_t*)&currplayer_vel_y+1) & 0x80) ? 2 : -2);



 wave_eject();



 Generic.x = *((uint8_t*)&currplayer_x+1);
 Generic.y = *((uint8_t*)&currplayer_y+1);
#line 58 "SAUCE/gamemodes/gamemode_wave.h"
}



void wave_eject() {
 if(*((uint8_t*)&currplayer_vel_y+1) & 0x80){
  if (bg_coll_U()) {
   if(dblocked[currplayer]){
    *((uint8_t*)&currplayer_y+1) = *((uint8_t*)&currplayer_y+1) - eject_U;
    currplayer_vel_y = 0;
    ( __A__ = currplayer, __asm__("tay"), __A__ = cube_data[currplayer] & 1, __asm__("sta %v, y", cube_data));
   } else {
    ( __A__ = currplayer, __asm__("tay"), __A__ = cube_data[currplayer] | 1, __asm__("sta %v, y", cube_data));
   }
  }
 }
 else{
  if(bg_coll_D()){
   if (dblocked[currplayer]) {
    *((uint8_t*)&currplayer_y+1) = *((uint8_t*)&currplayer_y+1) - eject_D;
    currplayer_vel_y = 0;
    ( __A__ = currplayer, __asm__("tay"), __A__ = cube_data[currplayer] & 1, __asm__("sta %v, y", cube_data));
   } else {
    ( __A__ = currplayer, __asm__("tay"), __A__ = cube_data[currplayer] | 1, __asm__("sta %v, y", cube_data));
   }
  }
 }
}


_Pragma ("code-name(pop)") _Pragma ("data-name(pop)") _Pragma ("rodata-name(pop)")
#line 91 "SAUCE/include.h"
#line 6 "SAUCE/include_menus.h"
_Pragma ("code-name(push, \"XCD_BANK_03\" )") _Pragma ("data-name(push, \"XCD_BANK_03\" )") _Pragma ("rodata-name(push, \"XCD_BANK_03\" )")
#line 23 "SAUCE/defines/nametable/menunametable_XCD03.c"
const unsigned char level_select_screen[284]={
0x03,0x02,0x03,0x3f,0xff,0x03,0x05,0x0a,0x0b,0x06,0x0e,0x03,0x04,0x06,0x0e,0x0e,
0x07,0x0e,0x03,0x04,0x07,0x0a,0x0b,0xff,0x03,0x0d,0x08,0x05,0x03,0x04,0x08,0x05,
0x05,0x09,0x05,0x03,0x04,0x09,0xff,0x03,0x8d,0x5c,0xfe,0x03,0x11,0x5d,0xff,0x03,
0x0b,0xfe,0x03,0x11,0x8e,0xfe,0xff,0x03,0x0b,0xfe,0x03,0x13,0xff,0x03,0x0b,0xfe,
0x03,0x13,0xff,0x03,0x0b,0xfe,0x02,0x02,0xfe,0x03,0x10,0xff,0x03,0x0b,0x6c,0xfe,
0x03,0x11,0x6d,0xff,0x03,0x07,0x6e,0xff,0x03,0x19,0x6f,0xff,0x03,0x03,0x7e,0xff,
0x03,0x07,0xee,0xef,0xf2,0xed,0xe1,0xec,0xff,0xed,0xef,0xe4,0xe5,0xff,0x03,0x06,
0x7f,0xff,0x03,0x07,0x7c,0xfe,0x03,0x11,0x7d,0xff,0x03,0x2f,0xf0,0xf2,0xe1,0xe3,
0xf4,0xe9,0xe3,0xe5,0xff,0xed,0xef,0xe4,0xe5,0xff,0x03,0x0e,0x7c,0xfe,0x03,0x11,
0x7d,0xff,0x03,0x65,0x2a,0xff,0x03,0x1d,0x2a,0x06,0x07,0x11,0x03,0x05,0x10,0x11,
0x03,0x06,0x10,0x11,0x03,0x06,0x10,0x11,0x03,0x04,0x06,0x07,0x08,0x09,0x2a,0x13,
0x03,0x04,0x12,0x13,0x03,0x06,0x12,0x13,0x03,0x06,0x12,0x13,0x03,0x03,0x2a,0x08,
0x09,0x06,0x07,0x06,0x07,0x13,0x03,0x03,0x12,0x13,0x03,0x06,0x12,0x13,0x03,0x06,
0x12,0x13,0x03,0x02,0x06,0x07,0x06,0x07,0x08,0x09,0x08,0x09,0x2a,0x13,0x03,0x02,
0x12,0x13,0x03,0x06,0x12,0x13,0x03,0x06,0x12,0x13,0x13,0x2a,0x08,0x09,0x08,0x09,
0x02,0x03,0x3f,0x00,0x00,0x50,0x10,0x40,0x50,0x00,0x03,0x0a,0x84,0x21,0x00,0x03,
0x02,0x01,0x00,0x03,0x05,0x04,0x01,0x00,0x00,0x04,0x05,0x03,0x03,0x01,0x00,0x03,
0x08,0x41,0x00,0x03,0x05,0x14,0x00,0x03,0x06,0x00,0x03,0x00
};






const unsigned char game_start_screen[329]={
0x01,0xff,0x01,0x87,0x20,0x21,0x22,0x23,0x24,0x25,0x26,0x27,0x28,0x29,0x22,0x23,
0x22,0x2b,0x2c,0x2c,0xff,0x01,0x0f,0x30,0x31,0x32,0x33,0x34,0x35,0x36,0x37,0x38,
0x39,0x32,0x33,0x3a,0x3b,0x3c,0x3d,0xff,0x01,0x0f,0x40,0xff,0x42,0x43,0x44,0x45,
0x46,0x47,0x48,0x49,0x42,0x43,0x4a,0x4b,0x4c,0x4c,0xff,0x01,0xaf,0x54,0x55,0x56,
0x57,0xff,0xff,0x50,0x51,0x52,0x53,0xff,0xff,0x54,0x55,0x56,0x57,0xff,0x01,0x0f,
0x64,0x65,0x66,0x67,0xff,0xff,0x60,0x61,0x62,0x63,0xff,0xff,0x58,0x59,0x5a,0x5b,
0xff,0x01,0x0f,0x74,0x75,0x76,0x77,0xff,0xff,0x70,0x71,0x72,0x73,0xff,0xff,0x68,
0x69,0x6a,0x77,0xff,0x01,0x0f,0x84,0x85,0x86,0x87,0xff,0xff,0x80,0x81,0x82,0x83,
0xff,0xff,0x84,0x85,0x86,0x87,0xff,0x01,0x50,0x78,0x79,0xff,0x01,0x03,0x7a,0x7b,
0xff,0x01,0x03,0x2e,0x2f,0xff,0x01,0x11,0x88,0x89,0xff,0x01,0x03,0x8a,0x8b,0xff,
0x01,0x03,0x3e,0x3f,0xff,0x01,0x48,0x10,0x11,0x01,0x06,0x10,0x11,0x01,0x06,0x10,
0x11,0x01,0x06,0x10,0x11,0x01,0x06,0x12,0x13,0x01,0x06,0x12,0x13,0x01,0x06,0x12,
0x13,0x01,0x06,0x12,0x13,0x01,0x06,0x12,0x13,0x01,0x06,0x12,0x13,0x01,0x06,0x12,
0x13,0x01,0x06,0x12,0x13,0x01,0x06,0x12,0x13,0x01,0x06,0x12,0x13,0x01,0x06,0x12,
0x13,0x01,0x06,0x12,0x13,0x01,0x06,0x12,0x13,0x01,0x06,0x12,0x13,0x01,0x06,0x12,
0x13,0x01,0x06,0x12,0x13,0x01,0x06,0x12,0x13,0x01,0x06,0x12,0x13,0x01,0x06,0x12,
0x13,0x01,0x06,0x12,0x13,0x01,0x06,0x12,0x13,0x01,0x06,0x12,0x13,0x01,0x06,0x12,
0x13,0x01,0x06,0x12,0x13,0x01,0x06,0x12,0x13,0x01,0x06,0x12,0x13,0x01,0x06,0x12,
0x13,0x01,0x06,0x12,0x13,0x01,0x06,0x00,0x01,0x09,0x55,0x01,0x03,0x00,0x01,0x0b,
0x55,0x44,0x11,0x55,0x00,0x01,0x03,0x50,0x40,0x10,0x50,0x00,0x00,0xf0,0x01,0x07,
0xff,0x01,0x07,0x0f,0x01,0x06,0x0f,0x01,0x00
};
#line 192 "SAUCE/defines/nametable/menunametable_XCD03.c"

#line 8 "SAUCE/include_menus.h"
#line 1 "SAUCE/menustates/common_xcd_bank_03.c"
void mouse_and_cursor();

extern uint8_t famistudio_song_speed;
const uint8_t xbgmlookuptable[];

void dec_mouse_timer() {
 kandoframecnt++;
 if (kandoframecnt & 1 && mouse_timer) mouse_timer--;
}

void check_if_music_stopped() {





  if (songplaying && famistudio_song_speed == 0x80) { music_play(xbgmlookuptable[song]); }
  else if (famistudio_song_speed == 0x80) { music_play(xbgmlookuptable[menu_music]); }
#line 31 "SAUCE/menustates/common_xcd_bank_03.c"
}

void loop_routine_update() {
 newrand();
 ppu_wait_nmi();



 oam_clear();
 mouse_and_cursor();
}
#line 9 "SAUCE/include_menus.h"
#line 1 "SAUCE/menustates/levelselection.c"
void draw_both_progress_bars();

void leveldec();
void levelinc();
void refreshmenu();
void start_the_level();

void check_if_music_stopped();
void dec_mouse_timer();
void loop_routine_update();

const uint8_t xbgmlookuptable[];
const uint8_t lvlselect_irq_table[];
#line 4 "SAUCE/defines/charmap/mainmenu_charmap.h"
_Pragma ("charmap (0x20, 0xFF)")



_Pragma ("charmap (0x24, 0xFE)")
_Pragma ("charmap (0x25, 0xDA)")




_Pragma ("charmap (0x2A, 0x8E)")




_Pragma ("charmap (0x2F, 0xE0)")
_Pragma ("charmap (0x30, 0xD0)")
_Pragma ("charmap (0x31, 0xD1)")
_Pragma ("charmap (0x32, 0xD2)")
_Pragma ("charmap (0x33, 0xD3)")
_Pragma ("charmap (0x34, 0xD4)")
_Pragma ("charmap (0x35, 0xD5)")
_Pragma ("charmap (0x36, 0xD6)")
_Pragma ("charmap (0x37, 0xD7)")
_Pragma ("charmap (0x38, 0xD8)")
_Pragma ("charmap (0x39, 0xD9)")
_Pragma ("charmap (0x3A, 0xFC)")






_Pragma ("charmap (0x41, 0xE1)")
_Pragma ("charmap (0x42, 0xE2)")
_Pragma ("charmap (0x43, 0xE3)")
_Pragma ("charmap (0x44, 0xE4)")
_Pragma ("charmap (0x45, 0xE5)")
_Pragma ("charmap (0x46, 0xE6)")
_Pragma ("charmap (0x47, 0xE7)")
_Pragma ("charmap (0x48, 0xE8)")
_Pragma ("charmap (0x49, 0xE9)")
_Pragma ("charmap (0x4A, 0xEA)")
_Pragma ("charmap (0x4B, 0xEB)")
_Pragma ("charmap (0x4C, 0xEC)")
_Pragma ("charmap (0x4D, 0xED)")
_Pragma ("charmap (0x4E, 0xEE)")
_Pragma ("charmap (0x4F, 0xEF)")
_Pragma ("charmap (0x50, 0xF0)")
_Pragma ("charmap (0x51, 0xF1)")
_Pragma ("charmap (0x52, 0xF2)")
_Pragma ("charmap (0x53, 0xF3)")
_Pragma ("charmap (0x54, 0xF4)")
_Pragma ("charmap (0x55, 0xF5)")
_Pragma ("charmap (0x56, 0xF6)")
_Pragma ("charmap (0x57, 0xF7)")
_Pragma ("charmap (0x58, 0xF8)")
_Pragma ("charmap (0x59, 0xF9)")
_Pragma ("charmap (0x5A, 0xFA)")






_Pragma ("charmap (0x61, 0x5E)")
_Pragma ("charmap (0x62, 0x5F)")
_Pragma ("charmap (0x63, 0x9F)")
_Pragma ("charmap (0x64, 0x8E)")
_Pragma ("charmap (0x65, 0xFE)")
_Pragma ("charmap (0x66, 0x0F)")
_Pragma ("charmap (0x67, 0x8F)")
_Pragma ("charmap (0x68, 0x5F)")
_Pragma ("charmap (0x69, 0x6F)")
_Pragma ("charmap (0x6A, 0xDA)")
_Pragma ("charmap (0x6B, 0xDB)")
_Pragma ("charmap (0x6C, 0xDC)")
_Pragma ("charmap (0x6D, 0xDD)")
_Pragma ("charmap (0x6E, 0xDE)")
_Pragma ("charmap (0x6F, 0xDF)")
_Pragma ("charmap (0x70, 0xE0)")
_Pragma ("charmap (0x71, 0xE1)")
_Pragma ("charmap (0x72, 0xE2)")
_Pragma ("charmap (0x73, 0xE3)")
_Pragma ("charmap (0x74, 0xE4)")
_Pragma ("charmap (0x75, 0xE5)")
_Pragma ("charmap (0x76, 0xE6)")
_Pragma ("charmap (0x77, 0xE7)")
_Pragma ("charmap (0x78, 0xE8)")
_Pragma ("charmap (0x79, 0xE9)")
_Pragma ("charmap (0x7A, 0xEA)")




#line 16 "SAUCE/menustates/levelselection.c"

void state_levelselect() {
 oam_clear();

 (xargs[0] = 98, _mmc3_set_8kb_chr());
 mmc3_set_2kb_chr_bank_0(0xFF);
 mmc3_set_2kb_chr_bank_1(96);




 pal_bg(oldsplashMenu);

 if (tempplat == 1) { tempplat = 0; options |= 0x04; }
 slowmode = 0;
 disco_sprites = 0;
 cheated = 0;

 ((*(uint8_t*) (0x2006) = ((((((0x2000>>8)&0xFF)))))), (*(uint8_t*) (0x2006) = ((((((0x2000)&0xFF)))))));
 vram_unrle(level_select_screen);
 ((*(uint8_t*) (0x2006) = ((((((0x2400>>8)&0xFF)))))), (*(uint8_t*) (0x2006) = ((((((0x2400)&0xFF)))))));
 vram_unrle(level_select_screen);

 write_irq_table(lvlselect_irq_table);
 set_irq_ptr(irqTable);
 (_edit_irq_table(*((uint8_t*)&tmp8+1)|(2<<8)));

 set_scroll_x(0);
 set_scroll_y(0);

 tmp8 = 0xff00;
 tmp4 = 1;
 (__asm__("lda #<%v \n ldx #>%v \n ldy #<.bank(%v) \n jsr crossPRGBankJump ", refreshmenu, refreshmenu, refreshmenu), __asm__("lda ptr3 \n ldx ptr3+1"), __AX__);
 top_triggers = 0;
 triggers = 0;
 triggers_hit[0] = 0;
 triggers_hit[1] = 0;
 triggers_hit[2] = 0;

 drawBarFlag = 2;
 *((uint8_t*)&tmpA) = 1;
 draw_both_progress_bars();

 practice_point_count = 0;




 cube_rotate[0] = 0;
 cube_rotate[1] = 0;






 if (menuMusicCurrentlyPlaying == 0 && !nestopia) music_play(xbgmlookuptable[menu_music]);





 menuMusicCurrentlyPlaying = 1;

 ppu_on_all();

 (_pal_fade_to((4<<8)|(((0)&0xFF))));

 while (1){
  loop_routine_update();

  check_if_music_stopped();

  if (tmp4) (_edit_irq_table(*((uint8_t*)&tmp8+1)|(2<<8)));
  else (_edit_irq_table(*((uint8_t*)&tmp8)|(2<<8)));

  if (*((uint8_t*)&tmp8) > 0) {
   *((uint8_t*)&tmp8) -= (*((uint8_t*)&tmp8) >> 2) + 1;
  }

  *((uint8_t*)&tmp8+1) = *((uint8_t*)&tmp8)^0xff;

  if (mouse.left_press) {
   if (mouse.y >= 0x6E && mouse.y <= 0x7B) {
    if (mouse.x >= 0x09 && mouse.x <= 0x15) {
     drawBarFlag = 2;
     leveldec();
    }
    else if (mouse.x >= 0xE5 && mouse.x <= 0xEF) {
     drawBarFlag = 2;
     levelinc();
    }
   }
   if (((mouse.y >= 0x3D && mouse.y <= 0x6C) && (mouse.x >= 0x2D && mouse.x <= 0xCC))) {
    start_the_level();
    return;
   }

  }
#line 130 "SAUCE/menustates/levelselection.c"
  if (joypad1.press & (0x10 | 0x80)){
   start_the_level();



   return;
  }

  if (joypad1.press_b){
   gameState = 0x01;



   draw_both_progress_bars();
   return;
  }
  if (joypad1.press_left || joypad1.press_right) hold_timer = 0;
  if (joypad1.press_right || (joypad1.right && hold_timer >= 15)){
   drawBarFlag = 2;
   levelinc();



   hold_timer = 0;
  }
  if (joypad1.press_left || (joypad1.left && hold_timer >= 15)){
   drawBarFlag = 2;
   leveldec();



   hold_timer = 0;
  }


  if (tmp8 == 0x3B) {
   (__asm__("lda #<%v \n ldx #>%v \n ldy #<.bank(%v) \n jsr crossPRGBankJump ", refreshmenu, refreshmenu, refreshmenu), __asm__("lda ptr3 \n ldx ptr3+1"), __AX__);
  }

  draw_both_progress_bars();

  dec_mouse_timer();
  if (hold_timer < 15) hold_timer++;
 }

}

void leveldec() {
 --level;
 *((uint8_t*)&tmp8) = 0xff;
 tmp4 = 0;
 if (!normalorcommlevels) {
  if (level == 0xFF) level = (25) - 1;
 } else {

   if (level < (25))



    level = (25+19) - 1;
 }
 (__asm__("lda #<%v \n ldx #>%v \n ldy #<.bank(%v) \n jsr crossPRGBankJump ", refreshmenu, refreshmenu, refreshmenu), __asm__("lda ptr3 \n ldx ptr3+1"), __AX__);
}

void levelinc() {
 ++level;
 *((uint8_t*)&tmp8) = 0xff;
 tmp4 = 1;
 if (!normalorcommlevels) {

   if (level >= (25))

    level = 0x00;
 } else {
  if (level >= (25+19)) level = (25);
 }
 (__asm__("lda #<%v \n ldx #>%v \n ldy #<.bank(%v) \n jsr crossPRGBankJump ", refreshmenu, refreshmenu, refreshmenu), __asm__("lda ptr3 \n ldx ptr3+1"), __AX__);
}

void start_the_level() {
 (__AX__ = (uint16_t)((((0)&0xFF)))<<8|8, _sfx_play(__AX__));
 famistudio_music_stop();
 if (tmp4) (_edit_irq_table(*((uint8_t*)&tmp8+1)|(2<<8)));
 else (_edit_irq_table(*((uint8_t*)&tmp8)|(2<<8)));
 tmpA = 0;
 do {
  oam_clear();
  draw_both_progress_bars();
  ppu_wait_nmi();
 } while (++tmpA < 30);
 gameState = 0x02;
 menuMusicCurrentlyPlaying = 0;
}

const uint8_t lvlselect_irq_table[] = {
 31,
 0xf5, 0x00,
 149,
 0xf5, 0x00,

 0xff
};
#line 10 "SAUCE/include_menus.h"
#line 1 "SAUCE/menustates/progressbar.c"
void draw_full_progress_bar();
void draw_percentage();
void draw_progress_bar();
#line 20 "SAUCE/menustates/progressbar.c"
void draw_both_progress_bars() {


  tmp7 = level_completeness_normal[level];
  hexToDec(tmp7);
  tmp1 = 112;
  if (tmp4) {
   tmp1 += tmp8 + 1;
  } else {
   tmp1 -= tmp8;
  }

  tmp2 = 127;
  tmp3 = 0;
  draw_percentage();

  tmp1 = 6;
  tmp2 = 16;
  *((uint8_t*)&tmp6) = 1;
  draw_full_progress_bar();



  tmp7 = (&level_completeness_normal[0x80])[level];
  hexToDec(tmp7);
  tmp1 = 112;
  if (tmp4) {
   tmp1 += tmp8 + 1;
  } else {
   tmp1 -= tmp8;
  }
  tmp2 = 151;
  tmp3 = 0;
  draw_percentage();

  tmp1 = 6;
  tmp2 = 19;
  *((uint8_t*)&tmp6) = 2;
  draw_full_progress_bar();


}
void calculate_sprite_pos();
void draw_bar_sprites() {


 tmp3 = 0;
 tmp1--;


 tmp1 = (tmp1 << 3) + 1;
 animating = tmp1;
 tmp2 = (tmp2 << 3) - 1;
 if (tmp4) {
  tmp1 += tmp8 + 1;
 } else {
  tmp1 -= tmp8;
 }
 (__asm__("lda #<%v \n ldx #>%v \n ldy #<.bank(%v) \n jsr crossPRGBankJump ", put_progress_bar_sprite, put_progress_bar_sprite, put_progress_bar_sprite), __asm__("lda ptr3 \n ldx ptr3+1"), __AX__);
 tmp1++;
 tmp3 = 3;
 (__asm__("lda #<%v \n ldx #>%v \n ldy #<.bank(%v) \n jsr crossPRGBankJump ", put_progress_bar_sprite, put_progress_bar_sprite, put_progress_bar_sprite), __asm__("lda ptr3 \n ldx ptr3+1"), __AX__);

 tmp1 = 206;
 if (tmp4) {
  tmp1 += tmp8 + 1;
 } else {
  tmp1 -= tmp8;
 }
 tmp3 = 4;
 (__asm__("lda #<%v \n ldx #>%v \n ldy #<.bank(%v) \n jsr crossPRGBankJump ", put_progress_bar_sprite, put_progress_bar_sprite, put_progress_bar_sprite), __asm__("lda ptr3 \n ldx ptr3+1"), __AX__);
 tmp1 = animating;
 (__asm__("lda #<%v \n ldx #>%v \n ldy #<.bank(%v) \n jsr crossPRGBankJump ", calculate_sprite_pos, calculate_sprite_pos, calculate_sprite_pos), __asm__("lda ptr3 \n ldx ptr3+1"), __AX__);

 if (tmp4) {
  tmp1 += tmp8 + 1;
 } else {
  tmp1 -= tmp8;
 }

 tmp3 = *((uint8_t*)&tmp6);
 (__asm__("lda #<%v \n ldx #>%v \n ldy #<.bank(%v) \n jsr crossPRGBankJump ", put_progress_bar_sprite, put_progress_bar_sprite, put_progress_bar_sprite), __asm__("lda ptr3 \n ldx ptr3+1"), __AX__);
 animating = 0;
}

void draw_full_progress_bar() {
 if (drawBarFlag) (__asm__("lda #<%v \n ldx #>%v \n ldy #<.bank(%v) \n jsr crossPRGBankJump ", draw_progress_bar, draw_progress_bar, draw_progress_bar), __asm__("lda ptr3 \n ldx ptr3+1"), __AX__);



 draw_bar_sprites();

}

void draw_level_progress() {
 update_level_completeness();
 hexToDec(__A__);
 tmp1 = 116;
 tmp2 = 0;
 tmp3 = 25;
 draw_percentage();
}

void draw_percentage() {
 if (hexToDecOutputBuffer[2]) {
  *((uint8_t*)&tmp6+1) = hexToDecOutputBuffer[2];
  (__asm__("lda #<%v \n ldx #>%v \n ldy #<.bank(%v) \n jsr crossPRGBankJump ", put_number, put_number, put_number), __asm__("lda ptr3 \n ldx ptr3+1"), __AX__);
 }

 if (hexToDecOutputBuffer[2] | hexToDecOutputBuffer[1]) {
  tmp1 += 8;
  *((uint8_t*)&tmp6+1) = hexToDecOutputBuffer[1];
  (__asm__("lda #<%v \n ldx #>%v \n ldy #<.bank(%v) \n jsr crossPRGBankJump ", put_number, put_number, put_number), __asm__("lda ptr3 \n ldx ptr3+1"), __AX__);
 }

 tmp1 += 8;
 *((uint8_t*)&tmp6+1) = hexToDecOutputBuffer[0];
 (__asm__("lda #<%v \n ldx #>%v \n ldy #<.bank(%v) \n jsr crossPRGBankJump ", put_number, put_number, put_number), __asm__("lda ptr3 \n ldx ptr3+1"), __AX__);

 tmp1 += 8;
 *((uint8_t*)&tmp6+1) = 10;
 (__asm__("lda #<%v \n ldx #>%v \n ldy #<.bank(%v) \n jsr crossPRGBankJump ", put_number, put_number, put_number), __asm__("lda ptr3 \n ldx ptr3+1"), __AX__);
}
#line 11 "SAUCE/include_menus.h"
#line 1 "SAUCE/menustates/customize.c"
void clear_shit();
void colorinc();
void colordec();
void updateColors();

const unsigned char customizescreen[];
#line 11 "SAUCE/defines/customize_buttons.c"
const uint8_t loNTAddrTableCustomizeScreen[] = {
 ((((((0x2000|(((8)<<5)|(13))))&0xFF)))),
 ((((((0x2000|(((14)<<5)|(4))))&0xFF)))),
 ((((((0x2000|(((14)<<5)|(13))))&0xFF)))),
 ((((((0x2000|(((14)<<5)|(22))))&0xFF)))),
 ((((((0x2000|(((8)<<5)|(13))))&0xFF)))),
 ((((((0x2000|(((14)<<5)|(4))))&0xFF))))
};

const uint8_t hiNTAddrTableCustomizeScreen[] = {
 ((((((0x2000|(((8)<<5)|(13)))>>8)&0xFF)))),
 ((((((0x2000|(((14)<<5)|(4)))>>8)&0xFF)))),
 ((((((0x2000|(((14)<<5)|(13)))>>8)&0xFF)))),
 ((((((0x2000|(((14)<<5)|(22)))>>8)&0xFF)))),
 ((((((0x2000|(((8)<<5)|(13)))>>8)&0xFF)))),
 ((((((0x2000|(((14)<<5)|(4)))>>8)&0xFF))))
};







#line 10 "SAUCE/menustates/customize.c"
#line 4 "SAUCE/defines/charmap/mainmenu_customize.h"
_Pragma ("charmap (0x20, 0xFF)")



_Pragma ("charmap (0x24, 0xFE)")
_Pragma ("charmap (0x25, 0xDA)")




_Pragma ("charmap (0x2A, 0x8E)")




_Pragma ("charmap (0x2F, 0xE0)")
_Pragma ("charmap (0x30, 0xD0)")
_Pragma ("charmap (0x31, 0xD1)")
_Pragma ("charmap (0x32, 0xD2)")
_Pragma ("charmap (0x33, 0xD3)")
_Pragma ("charmap (0x34, 0xD4)")
_Pragma ("charmap (0x35, 0xD5)")
_Pragma ("charmap (0x36, 0xD6)")
_Pragma ("charmap (0x37, 0xD7)")
_Pragma ("charmap (0x38, 0xD8)")
_Pragma ("charmap (0x39, 0xD9)")
_Pragma ("charmap (0x3A, 0xFC)")






_Pragma ("charmap (0x41, 0x2C)")
_Pragma ("charmap (0x42, 0x2D)")
_Pragma ("charmap (0x43, 0x3C)")
_Pragma ("charmap (0x44, 0x3D)")
_Pragma ("charmap (0x45, 0x2E)")
_Pragma ("charmap (0x46, 0x2F)")
_Pragma ("charmap (0x47, 0x3E)")
_Pragma ("charmap (0x48, 0x3F)")
_Pragma ("charmap (0x49, 0x40)")
_Pragma ("charmap (0x4A, 0x41)")
_Pragma ("charmap (0x4B, 0x50)")
_Pragma ("charmap (0x4C, 0x51)")
_Pragma ("charmap (0x4D, 0x22)")
_Pragma ("charmap (0x4E, 0x23)")
_Pragma ("charmap (0x4F, 0x42)")
_Pragma ("charmap (0x50, 0x43)")
_Pragma ("charmap (0x51, 0xF1)")
_Pragma ("charmap (0x52, 0xF2)")
_Pragma ("charmap (0x53, 0xF3)")
_Pragma ("charmap (0x54, 0xF4)")
_Pragma ("charmap (0x55, 0xF5)")
_Pragma ("charmap (0x56, 0xF6)")
_Pragma ("charmap (0x57, 0xF7)")
_Pragma ("charmap (0x58, 0xF8)")
_Pragma ("charmap (0x59, 0xF9)")
_Pragma ("charmap (0x5A, 0xFA)")






_Pragma ("charmap (0x61, 0x20)")
_Pragma ("charmap (0x62, 0x21)")
_Pragma ("charmap (0x63, 0x30)")
_Pragma ("charmap (0x64, 0x31)")

_Pragma ("charmap (0x65, 0x22)")
_Pragma ("charmap (0x66, 0x4F)")
_Pragma ("charmap (0x67, 0x5F)")
_Pragma ("charmap (0x68, 0x4E)")
_Pragma ("charmap (0x69, 0x5E)")

_Pragma ("charmap (0x6A, 0x33)")

_Pragma ("charmap (0x6B, 0x24)")
_Pragma ("charmap (0x6C, 0x25)")
_Pragma ("charmap (0x6D, 0x34)")
_Pragma ("charmap (0x6E, 0x35)")

_Pragma ("charmap (0x6F, 0x26)")
_Pragma ("charmap (0x70, 0x27)")
_Pragma ("charmap (0x71, 0x36)")
_Pragma ("charmap (0x72, 0x37)")

_Pragma ("charmap (0x73, 0x28)")
_Pragma ("charmap (0x74, 0x29)")
_Pragma ("charmap (0x75, 0x38)")
_Pragma ("charmap (0x76, 0x39)")

_Pragma ("charmap (0x77, 0x2A)")
_Pragma ("charmap (0x78, 0x2B)")
_Pragma ("charmap (0x79, 0x3A)")
_Pragma ("charmap (0x7A, 0x3B)")




#line 12 "SAUCE/menustates/customize.c"

void state_customize() {


 (xargs[0] = 102, _mmc3_set_8kb_chr());
 mmc3_set_2kb_chr_bank_0(0xFF);
 mmc3_set_2kb_chr_bank_1(96);

 pal_bg(paletteMenu);
 ( PAL_BUF_RAW[0x00&0x1F] = (0x00), __A__ = (0x00), __asm__("tay"), __asm__("lda (%v), y", PAL_PTR), PAL_BUF[0x00&0x1F] = __A__);
 ++PAL_UPDATE;;

 ((*(uint8_t*) (0x2006) = ((((((0x2000>>8)&0xFF)))))), (*(uint8_t*) (0x2006) = ((((((0x2000)&0xFF)))))));
 vram_unrle(customizescreen);

 kandokidshack = 0;
 kandokidshack2 = 0;
 tmp2 = 0;
 do {

  __A__ = tmp2; __asm__("tay");
  __A__ = kandokidshack;
  __asm__("clc \n adc %v, y", coin1_obtained);
  __asm__("clc \n adc %v, y", coin2_obtained);
  __asm__("clc \n adc %v, y", coin3_obtained);
  kandokidshack = __A__;
  if (LEVELCOMPLETE[tmp2]) kandokidshack2 += stars_list[tmp2];

  tmp2++;
 }



 while (tmp2 < (25+19));


 ((__AX__ = kandokidshack2, __EAX__<<=16), xargs[0] = 2, xargs[1] = 0xD0, xargs[2] = 0xFF, __AX__ = (0x2000|(((4)<<5)|(26)))|(0x40<<8), _printDecimal(__EAX__));
 ((__AX__ = kandokidshack, __EAX__<<=16), xargs[0] = 2, xargs[1] = 0xD0, xargs[2] = 0xFF, __AX__ = (0x2000|(((5)<<5)|(26)))|(0x40<<8), _printDecimal(__EAX__));

 ((__A__ = 'h', __asm__("sta sreg+0")), __AX__ = (0x2000|(((8)<<5)|(13))), _one_vram_buffer(__EAX__));
 ((__A__ = 'i', __asm__("sta sreg+0")), __AX__ = (0x2000|(((9)<<5)|(13))), _one_vram_buffer(__EAX__));
 ((__A__ = 'f', __asm__("sta sreg+0")), __AX__ = (0x2000|(((8)<<5)|(18))), _one_vram_buffer(__EAX__));
 ((__A__ = 'g', __asm__("sta sreg+0")), __AX__ = (0x2000|(((9)<<5)|(18))), _one_vram_buffer(__EAX__));
 tmp1 = iconTable[icon] + 'a';
 ((__A__ = tmp1, __asm__("sta sreg+0")), __AX__ = (0x2000|(((8)<<5)|(15))), _one_vram_buffer(__EAX__));
 ((__A__ = ++tmp1, __asm__("sta sreg+0")), __AX__ = (0x2000|(((8)<<5)|(16))), _one_vram_buffer(__EAX__));
 ((__A__ = (tmp1 += ('c'-'b')), __asm__("sta sreg+0")), __AX__ = (0x2000|(((9)<<5)|(15))), _one_vram_buffer(__EAX__));
 ((__A__ = ++tmp1, __asm__("sta sreg+0")), __AX__ = (0x2000|(((9)<<5)|(16))), _one_vram_buffer(__EAX__));

 settingvalue = 3;



 tmp8 = icon;

 ppu_on_all();

 (_pal_fade_to((4<<8)|(((0)&0xFF))));

 while (1) {
  tmp3 = 0;
  check_if_music_stopped();
  loop_routine_update();

  ( PAL_BUF_RAW[0x0a&0x1F] = (icon_colors[0]), __A__ = (icon_colors[0]), __asm__("tay"), __asm__("lda (%v), y", PAL_PTR), PAL_BUF[0x0a&0x1F] = __A__);
  ( PAL_BUF_RAW[0x0b&0x1F] = (icon_colors[1]), __A__ = (icon_colors[1]), __asm__("tay"), __asm__("lda (%v), y", PAL_PTR), PAL_BUF[0x0b&0x1F] = __A__);
  ( PAL_BUF_RAW[0x09&0x1F] = (icon_colors[2]), __A__ = (icon_colors[2]), __asm__("tay"), __asm__("lda (%v), y", PAL_PTR), PAL_BUF[0x09&0x1F] = __A__);
  ++PAL_UPDATE;;





  if (mouse.left_press || (mouse.left && hold_timer >= 15)) {

   if ((mouse.x >= 0x76 && mouse.x <= 0x83)) {
    if (mouse.y >= 0x34 && mouse.y <= 0x3C) {
     icon++;
     if (icon > (26 - 1)) icon = 0;
     settingvalue = 3;
     hold_timer = 0;
     clear_shit();
    }
    else if (mouse.y >= 0x4D && mouse.y <= 0x54) {
     if (icon == 0) icon = 26 - 1;
     else icon--;
     settingvalue = 3;
     hold_timer = 0;
     clear_shit();

    }

    else if ((mouse.y >= 0x64 && mouse.y <= 0x6C)) {
     settingvalue = 1;
     colorinc();
     hold_timer = 0;
     clear_shit();

    }
    else if ((mouse.y >= 0x7D && mouse.y <= 0x83)) {
     settingvalue = 1;
     colordec();
     hold_timer = 0;
     clear_shit();

    }


   }

   else if ((mouse.x >= 0x2E && mouse.x <= 0x3B)) {
    if (mouse.y >= 0x63 && mouse.y <= 0x6C) {
     settingvalue = 0;
     colorinc();
     hold_timer = 0;
     clear_shit();

    }
    else if ((mouse.y >= 0x7D && mouse.y <= 0x83)) {
     settingvalue = 0;
     colordec();
     hold_timer = 0;
     clear_shit();

    }
   }

   else if ((mouse.x >= 0xBE && mouse.x <= 0xCB)) {
    if (mouse.y >= 0x63 && mouse.y <= 0x6C) {
     settingvalue = 2;
     colorinc();
     hold_timer = 0;
     clear_shit();

    }
    else if ((mouse.y >= 0x7D && mouse.y <= 0x83)) {
     settingvalue = 2;
     colordec();
     hold_timer = 0;
     clear_shit();

    }
   }
   if ((mouse.x >= 0x35 && mouse.x <= 0xBC) && (mouse.y >= 0xBC && mouse.y <= 0xC4)) {
    gameState = 0x01;
    return;
   }
  }


  if (!retro_mode) {
   if (icon != tmp8) {
    tmp1 = iconTable[icon] + 'a';
    ((__A__ = tmp1, __asm__("sta sreg+0")), __AX__ = (0x2000|(((8)<<5)|(15))), _one_vram_buffer(__EAX__));
    ((__A__ = ++tmp1, __asm__("sta sreg+0")), __AX__ = (0x2000|(((8)<<5)|(16))), _one_vram_buffer(__EAX__));
    ((__A__ = (tmp1 += ('c'-'b')), __asm__("sta sreg+0")), __AX__ = (0x2000|(((9)<<5)|(15))), _one_vram_buffer(__EAX__));
    ((__A__ = ++tmp1, __asm__("sta sreg+0")), __AX__ = (0x2000|(((9)<<5)|(16))), _one_vram_buffer(__EAX__));
    tmp8 = icon;
   }
  } else {
   if (tmp8) {
    ((__A__ = 'a'+0x6E, __asm__("sta sreg+0")), __AX__ = (0x2000|(((8)<<5)|(15))), _one_vram_buffer(__EAX__));
    ((__A__ = 'b'+0x6E, __asm__("sta sreg+0")), __AX__ = (0x2000|(((8)<<5)|(16))), _one_vram_buffer(__EAX__));
    ((__A__ = 'c'+0x6E, __asm__("sta sreg+0")), __AX__ = (0x2000|(((9)<<5)|(15))), _one_vram_buffer(__EAX__));
    ((__A__ = 'd'+0x6E, __asm__("sta sreg+0")), __AX__ = (0x2000|(((9)<<5)|(16))), _one_vram_buffer(__EAX__));
    tmp8 = 0;
   }
  }
  if (settingvalue == 3 && !retro_mode) {
   if (joypad1.press_up || (joypad1.up && hold_timer >= 15)) {
    icon++;



    if (icon > (26 - 1)) icon = 0;
    hold_timer = 0;
   }
   if (joypad1.press_down || (joypad1.down && hold_timer >= 15)) {



    if (icon == 0) icon = 26 - 1;
    else icon--;
    hold_timer = 0;
   }
  } else if (settingvalue != 3) updateColors();

  if (joypad1.press_right) {
   settingvalue++;



   if (settingvalue == 4) settingvalue = 0;
   tmp3--;
  }
  if (joypad1.press_left) {
   if (settingvalue == 0) settingvalue = 3;
   else settingvalue--;



   tmp3++;
  }

  if (tmp3) {
   tmp4 = settingvalue; ++tmp4;
   tmp5 = loNTAddrTableCustomizeScreen[tmp4]|(hiNTAddrTableCustomizeScreen[tmp4]<<8);
   ((__A__ = 'h', __asm__("sta sreg+0")), __AX__ = tmp5, _one_vram_buffer(__EAX__));
   ((__A__ = 'i', __asm__("sta sreg+0")), __AX__ = tmp5 + (((1)<<5)|(0)), _one_vram_buffer(__EAX__));
   ((__A__ = 'f', __asm__("sta sreg+0")), __AX__ = tmp5 = (((((((tmp5)&0xFF))+(((0)<<5)|(5)))&0xFF)))|(tmp5 & 0xFF00), _one_vram_buffer(__EAX__));
   ((__A__ = 'g', __asm__("sta sreg+0")), __AX__ = tmp5 + (((1)<<5)|(0)), _one_vram_buffer(__EAX__));

   tmp4 += tmp3;
   tmp5 = loNTAddrTableCustomizeScreen[tmp4]|(hiNTAddrTableCustomizeScreen[tmp4]<<8);
   ((__A__ = ' ', __asm__("sta sreg+0")), __AX__ = tmp5, _one_vram_buffer(__EAX__));
   ((__A__ = ' ', __asm__("sta sreg+0")), __AX__ = tmp5 + (((1)<<5)|(0)), _one_vram_buffer(__EAX__));
   ((__A__ = ' ', __asm__("sta sreg+0")), __AX__ = tmp5 = (((((((tmp5)&0xFF))+(((0)<<5)|(5)))&0xFF)))|(tmp5 & 0xFF00), _one_vram_buffer(__EAX__));
   ((__A__ = ' ', __asm__("sta sreg+0")), __AX__ = tmp5 + (((1)<<5)|(0)), _one_vram_buffer(__EAX__));
  }

  if (joypad1.press_b) {
   gameState = 0x01;
   return;
  }
  dec_mouse_timer();
  hold_timer++;
#line 245 "SAUCE/menustates/customize.c"
 }

}

void clear_shit() {
 ((__A__ = ' ', __asm__("sta sreg+0")), __AX__ = (0x2000|(((14)<<5)|(4))), _one_vram_buffer(__EAX__));
 ((__A__ = ' ', __asm__("sta sreg+0")), __AX__ = (0x2000|(((15)<<5)|(4))), _one_vram_buffer(__EAX__));
 ((__A__ = ' ', __asm__("sta sreg+0")), __AX__ = (0x2000|(((14)<<5)|(9))), _one_vram_buffer(__EAX__));
 ((__A__ = ' ', __asm__("sta sreg+0")), __AX__ = (0x2000|(((15)<<5)|(9))), _one_vram_buffer(__EAX__));
 ((__A__ = ' ', __asm__("sta sreg+0")), __AX__ = (0x2000|(((14)<<5)|(13))), _one_vram_buffer(__EAX__));
 ((__A__ = ' ', __asm__("sta sreg+0")), __AX__ = (0x2000|(((15)<<5)|(13))), _one_vram_buffer(__EAX__));
 ((__A__ = ' ', __asm__("sta sreg+0")), __AX__ = (0x2000|(((14)<<5)|(18))), _one_vram_buffer(__EAX__));
 ((__A__ = ' ', __asm__("sta sreg+0")), __AX__ = (0x2000|(((15)<<5)|(18))), _one_vram_buffer(__EAX__));
 ((__A__ = ' ', __asm__("sta sreg+0")), __AX__ = (0x2000|(((14)<<5)|(22))), _one_vram_buffer(__EAX__));
 ((__A__ = ' ', __asm__("sta sreg+0")), __AX__ = (0x2000|(((15)<<5)|(22))), _one_vram_buffer(__EAX__));
 ((__A__ = ' ', __asm__("sta sreg+0")), __AX__ = (0x2000|(((14)<<5)|(27))), _one_vram_buffer(__EAX__));
 ((__A__ = ' ', __asm__("sta sreg+0")), __AX__ = (0x2000|(((15)<<5)|(27))), _one_vram_buffer(__EAX__));
 ((__A__ = ' ', __asm__("sta sreg+0")), __AX__ = (0x2000|(((8)<<5)|(13))), _one_vram_buffer(__EAX__));
 ((__A__ = ' ', __asm__("sta sreg+0")), __AX__ = (0x2000|(((9)<<5)|(13))), _one_vram_buffer(__EAX__));
 ((__A__ = ' ', __asm__("sta sreg+0")), __AX__ = (0x2000|(((8)<<5)|(18))), _one_vram_buffer(__EAX__));
 ((__A__ = ' ', __asm__("sta sreg+0")), __AX__ = (0x2000|(((9)<<5)|(18))), _one_vram_buffer(__EAX__));

}

void updateColors() {
 if (joypad1.press_up) {
  colorinc();
 }
 if (joypad1.press_down) {
  colordec();
 }

}

void colorinc() {
 if (( __AX__ = settingvalue << 8, __asm__("inc %v,x", icon_colors), __asm__("lda %v,x", icon_colors), __A__) & 0x30) {
  if ((uint8_t)(icon_colors[settingvalue] & 0x0F) >= 0x0D)
   ( __A__ = settingvalue, __asm__("tay"), __A__ = (icon_colors[settingvalue] + 0x10) & 0x30, __asm__("sta %v, y", icon_colors));
 } else {
  if (((icon_colors[settingvalue] - 0x0D) & 0xFE) == 0)
   icon_colors[settingvalue] = 0x0F;
 }
}

void colordec() {
 if (( __AX__ = settingvalue << 8, __asm__("dec %v,x", icon_colors), __asm__("lda %v,x", icon_colors), __A__) & 0x30) {
  if ((uint8_t)(icon_colors[settingvalue] & 0x0F) >= 0x0D)
   ( __A__ = settingvalue, __asm__("tay"), __A__ = (icon_colors[settingvalue] & 0x30) | 0x0C, __asm__("sta %v, y", icon_colors));
 } else {
  if (((icon_colors[settingvalue] - 0x0D) & 0xFE) == 0)
   icon_colors[settingvalue] = 0x0C;
 }
}

const unsigned char customizescreen[254]={
0x03,0x02,0x03,0x3f,0x06,0x07,0x06,0x07,0x0f,0xff,0x03,0x1a,0x08,0x09,0x08,0x09,
0xff,0x03,0x1b,0x06,0x07,0x0f,0xff,0x03,0x05,0xe3,0xf5,0xf3,0xf4,0xef,0xed,0xe9,
0xfa,0xe5,0xff,0xe9,0xe3,0xef,0xee,0xff,0x03,0x03,0xd0,0xa1,0xff,0x03,0x02,0x08,
0x09,0xff,0x03,0x18,0xd0,0xa0,0xff,0x03,0x02,0x0f,0xff,0x03,0x2d,0x12,0x13,0xff,
0x03,0x1d,0x20,0x21,0xff,0x03,0x1d,0x30,0x31,0xff,0x03,0x1d,0x10,0x11,0xff,0x03,
0x54,0x12,0x13,0xff,0x03,0x06,0x12,0x13,0xff,0x03,0x06,0x12,0x13,0xff,0x03,0x0b,
0x48,0x49,0xff,0x03,0x06,0x4a,0x4b,0xff,0x03,0x06,0x4c,0x4d,0xff,0x03,0x0b,0x58,
0x59,0xff,0x03,0x06,0x5a,0x5b,0xff,0x03,0x06,0x5c,0x5d,0xff,0x03,0x0b,0x10,0x11,
0xff,0x03,0x06,0x10,0x11,0xff,0x03,0x06,0x10,0x11,0xff,0x03,0xc5,0x0f,0xff,0x03,
0x1d,0x0f,0x06,0x07,0xff,0x03,0x1b,0x06,0x07,0x08,0x09,0x0f,0xff,0x03,0x03,0xf0,
0xf2,0xe5,0xf3,0xf3,0xff,0xe2,0xff,0xf4,0xef,0xff,0xf2,0xe5,0xf4,0xf5,0xf2,0xee,
0xff,0x03,0x04,0x0f,0x08,0x09,0x06,0x07,0x06,0x07,0xff,0x03,0x17,0x06,0x07,0x06,
0x07,0x08,0x09,0x08,0x09,0x0f,0xff,0x03,0x15,0x0f,0x08,0x09,0x08,0x09,0x02,0x03,
0x3f,0xd0,0x10,0x00,0x03,0x05,0x17,0x00,0x03,0x05,0x01,0x00,0x03,0x02,0x08,0x02,
0x00,0x03,0x03,0x80,0x00,0x80,0x20,0x00,0x20,0x00,0x03,0x08,0x10,0x00,0x03,0x05,
0x40,0xd7,0x10,0x00,0x03,0x03,0x40,0x7d,0x00,0x03,0x06,0x00,0x03,0x00
};
#line 12 "SAUCE/include_menus.h"
#line 13 "SAUCE/defines/titlescreen_buttons.c"
const uint8_t loNTAddrTableTitleScreen[]={
    ((((((0x2000|(((11)<<5)|(9))))&0xFF)))),
    ((((((0x2000|(((11)<<5)|(15))))&0xFF)))),
    ((((((0x2000|(((11)<<5)|(21))))&0xFF)))),
    ((((((0x2000|(((17)<<5)|(9))))&0xFF)))),
    ((((((0x2000|(((17)<<5)|(15))))&0xFF)))),
    ((((((0x2000|(((17)<<5)|(21))))&0xFF)))),
    ((((((0x2000|(((1)<<5)|(27))))&0xFF)))),
    ((((((0x2000|(((11)<<5)|(9))))&0xFF)))),
    ((((((0x2000|(((11)<<5)|(15))))&0xFF))))
};

const uint8_t hiNTAddrTableTitleScreen[]={
    ((((((0x2000|(((11)<<5)|(9)))>>8)&0xFF)))),
    ((((((0x2000|(((11)<<5)|(15)))>>8)&0xFF)))),
    ((((((0x2000|(((11)<<5)|(21)))>>8)&0xFF)))),
    ((((((0x2000|(((17)<<5)|(9)))>>8)&0xFF)))),
    ((((((0x2000|(((17)<<5)|(15)))>>8)&0xFF)))),
    ((((((0x2000|(((17)<<5)|(21)))>>8)&0xFF)))),
    ((((((0x2000|(((1)<<5)|(27)))>>8)&0xFF)))),
    ((((((0x2000|(((11)<<5)|(9)))>>8)&0xFF)))),
    ((((((0x2000|(((11)<<5)|(15)))>>8)&0xFF))))
};
#line 82 "SAUCE/defines/titlescreen_buttons.c"

#line 3 "SAUCE/menustates/titlescreen.c"

void color_picker();

void bounds_check();

void title_cube_shit();
void title_ship_shit();
void title_ball_shit();
void title_ufo_shit();
void title_robot_shit();
void title_wave_shit();
void title_mini_wave_shit();
void title_swing_shit();

void roll_new_mode();
void settings();
void set_title_icon();



const uint8_t xbgmlookuptable[];

const uint8_t BG_Table2[];
const uint8_t G_Table2[];
const uint8_t menu_color_table[];

const uint8_t UFO_Title_Jump_Table[];
const uint8_t BALL_Title_Jump_Table[];
const uint8_t shipFrameTable[];
const uint8_t robotFrameTable1[];
const uint8_t robotFrameTable2[];
const uint8_t robotFrameTable3[];
const uint8_t spiderFrameTable1[];
const uint8_t spiderFrameTable2[];
const uint8_t spiderFrameTable3[];
const uint8_t swingFrameTable1[];
const uint8_t swingFrameTable2[];
const uint8_t miniShipFrameTable[];
const uint8_t miniSwingFrameTable[];
const uint8_t mysteryFrameTable[];

const uint8_t menu_irq_table[];
#line 4 "SAUCE/defines/charmap/mainmenu_charmap.h"
_Pragma ("charmap (0x20, 0xFF)")



_Pragma ("charmap (0x24, 0xFE)")
_Pragma ("charmap (0x25, 0xDA)")




_Pragma ("charmap (0x2A, 0x8E)")




_Pragma ("charmap (0x2F, 0xE0)")
_Pragma ("charmap (0x30, 0xD0)")
_Pragma ("charmap (0x31, 0xD1)")
_Pragma ("charmap (0x32, 0xD2)")
_Pragma ("charmap (0x33, 0xD3)")
_Pragma ("charmap (0x34, 0xD4)")
_Pragma ("charmap (0x35, 0xD5)")
_Pragma ("charmap (0x36, 0xD6)")
_Pragma ("charmap (0x37, 0xD7)")
_Pragma ("charmap (0x38, 0xD8)")
_Pragma ("charmap (0x39, 0xD9)")
_Pragma ("charmap (0x3A, 0xFC)")






_Pragma ("charmap (0x41, 0xE1)")
_Pragma ("charmap (0x42, 0xE2)")
_Pragma ("charmap (0x43, 0xE3)")
_Pragma ("charmap (0x44, 0xE4)")
_Pragma ("charmap (0x45, 0xE5)")
_Pragma ("charmap (0x46, 0xE6)")
_Pragma ("charmap (0x47, 0xE7)")
_Pragma ("charmap (0x48, 0xE8)")
_Pragma ("charmap (0x49, 0xE9)")
_Pragma ("charmap (0x4A, 0xEA)")
_Pragma ("charmap (0x4B, 0xEB)")
_Pragma ("charmap (0x4C, 0xEC)")
_Pragma ("charmap (0x4D, 0xED)")
_Pragma ("charmap (0x4E, 0xEE)")
_Pragma ("charmap (0x4F, 0xEF)")
_Pragma ("charmap (0x50, 0xF0)")
_Pragma ("charmap (0x51, 0xF1)")
_Pragma ("charmap (0x52, 0xF2)")
_Pragma ("charmap (0x53, 0xF3)")
_Pragma ("charmap (0x54, 0xF4)")
_Pragma ("charmap (0x55, 0xF5)")
_Pragma ("charmap (0x56, 0xF6)")
_Pragma ("charmap (0x57, 0xF7)")
_Pragma ("charmap (0x58, 0xF8)")
_Pragma ("charmap (0x59, 0xF9)")
_Pragma ("charmap (0x5A, 0xFA)")






_Pragma ("charmap (0x61, 0x5E)")
_Pragma ("charmap (0x62, 0x5F)")
_Pragma ("charmap (0x63, 0x9F)")
_Pragma ("charmap (0x64, 0x8E)")
_Pragma ("charmap (0x65, 0xFE)")
_Pragma ("charmap (0x66, 0x0F)")
_Pragma ("charmap (0x67, 0x8F)")
_Pragma ("charmap (0x68, 0x5F)")
_Pragma ("charmap (0x69, 0x6F)")
_Pragma ("charmap (0x6A, 0xDA)")
_Pragma ("charmap (0x6B, 0xDB)")
_Pragma ("charmap (0x6C, 0xDC)")
_Pragma ("charmap (0x6D, 0xDD)")
_Pragma ("charmap (0x6E, 0xDE)")
_Pragma ("charmap (0x6F, 0xDF)")
_Pragma ("charmap (0x70, 0xE0)")
_Pragma ("charmap (0x71, 0xE1)")
_Pragma ("charmap (0x72, 0xE2)")
_Pragma ("charmap (0x73, 0xE3)")
_Pragma ("charmap (0x74, 0xE4)")
_Pragma ("charmap (0x75, 0xE5)")
_Pragma ("charmap (0x76, 0xE6)")
_Pragma ("charmap (0x77, 0xE7)")
_Pragma ("charmap (0x78, 0xE8)")
_Pragma ("charmap (0x79, 0xE9)")
_Pragma ("charmap (0x7A, 0xEA)")




#line 49 "SAUCE/menustates/titlescreen.c"
#line 57 "SAUCE/menustates/titlescreen.c"
const char palsystem[] = "FOR PAL SYSTEMS";
#line 93 "SAUCE/menustates/titlescreen.c"
void state_menu() {
 oam_clear();

 (xargs[0] = 98, _mmc3_set_8kb_chr());
 mmc3_set_2kb_chr_bank_1(96);



   if (LEVELCOMPLETE[0] &&
   LEVELCOMPLETE[1] &&
   LEVELCOMPLETE[2] &&
   LEVELCOMPLETE[3] &&
   LEVELCOMPLETE[4] &&
   LEVELCOMPLETE[5] &&
   LEVELCOMPLETE[6] &&
   LEVELCOMPLETE[7] &&
   LEVELCOMPLETE[8] &&
   LEVELCOMPLETE[9] &&
   LEVELCOMPLETE[0x0A] &&
   LEVELCOMPLETE[0x0B] &&
   LEVELCOMPLETE[0x0C]) all_levels_complete = 0xFC;





 if (all_levels_complete == 0xFC) pal_bg(splashMenu2);
 else pal_bg (splashMenu);


 ((*(uint8_t*) (0x2006) = ((((((0x2000>>8)&0xFF)))))), (*(uint8_t*) (0x2006) = ((((((0x2000)&0xFF)))))));
 vram_unrle(game_start_screen);
 ((*(uint8_t*) (0x2006) = ((((((0x2400>>8)&0xFF)))))), (*(uint8_t*) (0x2006) = ((((((0x2400)&0xFF)))))));
 vram_unrle(game_start_screen);


 if (fullRegion == 1) ((__AX__ = (uintptr_t)palsystem, __EAX__<<=16), xargs[0] = sizeof(palsystem)-1, __AX__ = (0x2000|(((7)<<5)|(9)))|(0x40<<8), _multi_vram_buffer(__EAX__));





 tmp4 = menuselection; ++tmp4;
 tmp5 = loNTAddrTableTitleScreen[tmp4]|(hiNTAddrTableTitleScreen[tmp4]<<8);






  if (menuselection != 5) {
   ((__A__ = 'a', __asm__("sta sreg+0")), __AX__ = tmp5, _one_vram_buffer(__EAX__));
   ((__A__ = 'b', __asm__("sta sreg+0")), __AX__ = (((((((tmp5)&0xFF))+1)&0xFF)))|(tmp5 & 0xFF00), _one_vram_buffer(__EAX__));
  } else {
   ((__A__ = 0x6F, __asm__("sta sreg+0")), __AX__ = (0x2000|(((2)<<5)|(26))), _one_vram_buffer(__EAX__));
   ((__A__ = 0x7F, __asm__("sta sreg+0")), __AX__ = (0x2000|(((3)<<5)|(26))), _one_vram_buffer(__EAX__));
  }




  if (all_levels_complete != 0xFC) {
   ((__A__ = 0x19, __asm__("sta sreg+0")), __AX__ = (0x2000|(((2)<<5)|(27))), _one_vram_buffer(__EAX__));
   ((__A__ = 0x1A, __asm__("sta sreg+0")), __AX__ = (0x2000|(((2)<<5)|(28))), _one_vram_buffer(__EAX__));
   ((__A__ = 0x2D, __asm__("sta sreg+0")), __AX__ = (0x2000|(((3)<<5)|(27))), _one_vram_buffer(__EAX__));
   ((__A__ = 0x4D, __asm__("sta sreg+0")), __AX__ = (0x2000|(((3)<<5)|(28))), _one_vram_buffer(__EAX__));
  } else {
   ((__A__ = 0x1B, __asm__("sta sreg+0")), __AX__ = (0x2000|(((2)<<5)|(27))), _one_vram_buffer(__EAX__));
   ((__A__ = 0x1C, __asm__("sta sreg+0")), __AX__ = (0x2000|(((2)<<5)|(28))), _one_vram_buffer(__EAX__));
   ((__A__ = 0x1D, __asm__("sta sreg+0")), __AX__ = (0x2000|(((3)<<5)|(27))), _one_vram_buffer(__EAX__));
   ((__A__ = 0x1E, __asm__("sta sreg+0")), __AX__ = (0x2000|(((3)<<5)|(28))), _one_vram_buffer(__EAX__));
  }


 SRAM_VALIDATE[3] = 0xff;

 do {
  discoframe = newrand() & 15;
 } while (discoframe > 11);

 if (joypad1.select) nestopia = 1;


 gamemode = 0;


 newrand();






 set_title_icon();
 set_title_icon();






 if (menuMusicCurrentlyPlaying == 0 && !nestopia) music_play(xbgmlookuptable[menu_music]);





 menuMusicCurrentlyPlaying = 1;

 settingvalue = 0;
 practice_point_count = 0;

 tmp8 = 0;

 kandoframecnt = 0;
 teleport_output = 0Xff;
 currplayer_y_small = 160;
 currplayer_x_small = 0;
 titlecolor3 = icon_colors[2];
 titlecolor2 = icon_colors[1];
 titlecolor1 = icon_colors[0];

 speed = 1;
 joypad1.press = 0;

 write_irq_table(menu_irq_table);

 set_irq_ptr(irqTable);

 set_scroll_x(0);
 set_scroll_y(0);
  ppu_on_all();
 (_pal_fade_to((4<<8)|(((0)&0xFF))));

 roll_new_mode();


 while (1){
#line 287 "SAUCE/menustates/titlescreen.c"
  ( PAL_BUF_RAW[0x11&0x1F] = (titlecolor3), __A__ = (titlecolor3), __asm__("tay"), __asm__("lda (%v), y", PAL_PTR), PAL_BUF[0x11&0x1F] = __A__);
  ( PAL_BUF_RAW[0x12&0x1F] = (titlecolor1), __A__ = (titlecolor1), __asm__("tay"), __asm__("lda (%v), y", PAL_PTR), PAL_BUF[0x12&0x1F] = __A__);
  ( PAL_BUF_RAW[0x13&0x1F] = (titlecolor2), __A__ = (titlecolor2), __asm__("tay"), __asm__("lda (%v), y", PAL_PTR), PAL_BUF[0x13&0x1F] = __A__);
  ++PAL_UPDATE;;

  loop_routine_update();


  newrand();
  newrand();
  newrand();
  if (titlemode != 0xFF) currplayer_x_small += speed;
  if (currplayer_x_small >= 0xFB) {
   roll_new_mode();
  }
#line 310 "SAUCE/menustates/titlescreen.c"
  if (currplayer_x_small <= 0xF7) {






   switch (titlemode) {
    case 0:


     title_cube_shit();

     *((uint8_t*)&player_x[0]+1) = currplayer_x_small;
     *((uint8_t*)&player_y[0]+1) = currplayer_y_small;
     (__asm__("lda #<%v \n ldx #>%v \n ldy #<.bank(%v) \n jsr crossPRGBankJump ", drawplayerone, drawplayerone, drawplayerone), __asm__("lda ptr3 \n ldx ptr3+1"), __AX__);
     break;
    case 1:
     title_ufo_shit();

     ((__AX__ = ((((currplayer_y_small)&0xFF))<<8)|(((currplayer_x_small)&0xFF)), __EAX__<<=16), __A__ = 0x3F, __AX__ <<= 8, __A__ |= 0x20+0, _oam_spr(__EAX__));
     ((__AX__ = ((((currplayer_y_small)&0xFF))<<8)|(((currplayer_x_small + 8)&0xFF)), __EAX__<<=16), __A__ = 0x3F, __AX__ <<= 8, __A__ |= 0x60+0, _oam_spr(__EAX__));
     break;
    case 2:
     title_cube_shit();
     player_mini[0] = 1;
     *((uint8_t*)&player_x[0]+1) = currplayer_x_small;
     *((uint8_t*)&player_y[0]+1) = currplayer_y_small;
     (__asm__("lda #<%v \n ldx #>%v \n ldy #<.bank(%v) \n jsr crossPRGBankJump ", drawplayerone, drawplayerone, drawplayerone), __asm__("lda ptr3 \n ldx ptr3+1"), __AX__);
     player_mini[0] = 0;
     break;
    case 3:
     title_ship_shit();

     tmp7 = ( __A__ = tmpi8 + 3, __asm__("tay"), __asm__("ldx #0 \n lda %v, y", shipFrameTable), __A__);

     if (currplayer_y_small == 160 && tmp7 < 0x29) tmp7 = 0x29;
     else if (currplayer_y_small == 8 && tmp7 > 0x29) tmp7 = 0x29;

     ((__AX__ = ((((currplayer_y_small)&0xFF))<<8)|(((currplayer_x_small)&0xFF)), __EAX__<<=16), __A__ = tmp7, __AX__ <<= 8, __A__ |= 0x20+0, _oam_spr(__EAX__));
     ((__AX__ = ((((currplayer_y_small)&0xFF))<<8)|(((currplayer_x_small + 8)&0xFF)), __EAX__<<=16), __A__ = tmp7 + 2, __AX__ <<= 8, __A__ |= 0x20+0, _oam_spr(__EAX__));
     break;
    case 4:
     title_robot_shit();

     if (!(kandoframecnt & 0x07)) { ++ballframe; ballframe &= 3; }

     if (currplayer_y_small == 160) {
      if (!retro_mode) {
       tmp1 = ( __A__ = ballframe & 1, __asm__("tay"), __asm__("ldx #0 \n lda %v, y", robotFrameTable1), __A__);
      } else {
       tmp1 = 0xFF;
      }
      tmp2 = ( __A__ = ballframe | (retro_mode << 2), __asm__("tay"), __asm__("ldx #0 \n lda %v, y", robotFrameTable2), __A__);
      tmp3 = ( __A__ = (__asm__("tya"), __A__), __asm__("tay"), __asm__("ldx #0 \n lda %v, y", robotFrameTable3), __A__);
     } else {
      tmp1 = 0xFF;
      tmp2 = 0x0F + (retro_mode * 2);
      tmp3 = tmp2 + 2;
     }

     ((__AX__ = ((((currplayer_y_small)&0xFF))<<8)|(((currplayer_x_small-8)&0xFF)), __EAX__<<=16), __A__ = tmp1, __AX__ <<= 8, __A__ |= 0x20+0, _oam_spr(__EAX__));
     ((__AX__ = ((((currplayer_y_small)&0xFF))<<8)|(((currplayer_x_small)&0xFF)), __EAX__<<=16), __A__ = tmp2, __AX__ <<= 8, __A__ |= 0x20+0, _oam_spr(__EAX__));
     ((__AX__ = ((((currplayer_y_small)&0xFF))<<8)|(((currplayer_x_small + 8)&0xFF)), __EAX__<<=16), __A__ = tmp3, __AX__ <<= 8, __A__ |= 0x20+0, _oam_spr(__EAX__));
     break;
    case 5:





     currplayer_y_small = 160; tmp7 = 0x20+0;



     if (!(kandoframecnt & 0x07)) { ++ballframe; ballframe &= 3; }

     tmp1 = ( __A__ = ballframe, __asm__("tay"), __asm__("ldx #0 \n lda %v, y", spiderFrameTable1), __A__);
     tmp2 = ( __A__ = (__asm__("tya"), __A__), __asm__("tay"), __asm__("ldx #0 \n lda %v, y", spiderFrameTable2), __A__);
     tmp3 = ( __A__ = (__asm__("tya"), __A__), __asm__("tay"), __asm__("ldx #0 \n lda %v, y", spiderFrameTable3), __A__);

     ((__AX__ = ((((currplayer_y_small)&0xFF))<<8)|(((currplayer_x_small - 8)&0xFF)), __EAX__<<=16), __A__ = tmp1, __AX__ <<= 8, __A__ |= tmp7, _oam_spr(__EAX__));
     ((__AX__ = ((((currplayer_y_small)&0xFF))<<8)|(((currplayer_x_small)&0xFF)), __EAX__<<=16), __A__ = tmp2, __AX__ <<= 8, __A__ |= tmp7, _oam_spr(__EAX__));
     ((__AX__ = ((((currplayer_y_small)&0xFF))<<8)|(((currplayer_x_small + 8)&0xFF)), __EAX__<<=16), __A__ = tmp3, __AX__ <<= 8, __A__ |= tmp7, _oam_spr(__EAX__));
     break;
    case 6:
     title_wave_shit();

     if (currplayer_y_small == 160 || currplayer_y_small == 8) {
      tmp1 = 0x29;
      tmp2 = 0x20+0;
     } else {
      tmp1 = 0x2D;
      if (currplayer_gravity) {
       tmp2 = 0xA0+0;
      } else {
       tmp2 = 0x20+0;
      }
     }

     ((__AX__ = ((((currplayer_y_small)&0xFF))<<8)|(((currplayer_x_small)&0xFF)), __EAX__<<=16), __A__ = tmp1, __AX__ <<= 8, __A__ |= tmp2, _oam_spr(__EAX__));
     ((__AX__ = ((((currplayer_y_small)&0xFF))<<8)|(((currplayer_x_small + 8)&0xFF)), __EAX__<<=16), __A__ = tmp1 + 2, __AX__ <<= 8, __A__ |= tmp2, _oam_spr(__EAX__));
     break;
    case 7:
     title_ball_shit();

     if (!(kandoframecnt & 0x07)) ballframe ^= 1;

     if (retro_mode && currplayer_gravity) tmp7 = 0xA0+0;
     else tmp7 = 0x20+0;

     if (ballframe) tmp2 = 0x3F;
     else tmp2 = 0x1B;

     ((__AX__ = ((((currplayer_y_small)&0xFF))<<8)|(((currplayer_x_small)&0xFF)), __EAX__<<=16), __A__ = tmp2, __AX__ <<= 8, __A__ |= tmp7, _oam_spr(__EAX__));
     ((__AX__ = ((((currplayer_y_small)&0xFF))<<8)|(((currplayer_x_small + 8)&0xFF)), __EAX__<<=16), __A__ = tmp2, __AX__ <<= 8, __A__ |= tmp7 + 0x40, _oam_spr(__EAX__));
     break;
    case 8:
     title_swing_shit();

     if (!(kandoframecnt & 0x07)) { ++ballframe; ballframe &= 3; }

     tmp2 = ( __A__ = ballframe & 1, __asm__("tay"), __asm__("ldx #0 \n lda %v, y", swingFrameTable1), __A__);
     tmp7 = ( __A__ = ballframe, __asm__("tay"), __asm__("ldx #0 \n lda %v, y", swingFrameTable2), __A__);

     ((__AX__ = ((((currplayer_y_small)&0xFF))<<8)|(((currplayer_x_small)&0xFF)), __EAX__<<=16), __A__ = tmp2, __AX__ <<= 8, __A__ |= tmp7, _oam_spr(__EAX__));
     ((__AX__ = ((((currplayer_y_small)&0xFF))<<8)|(((currplayer_x_small + 8)&0xFF)), __EAX__<<=16), __A__ = tmp2+2, __AX__ <<= 8, __A__ |= tmp7, _oam_spr(__EAX__));
     break;
    case 9:
     title_ship_shit();

     tmp7 = ( __A__ = tmpi8 + 3, __asm__("tay"), __asm__("ldx #0 \n lda %v, y", miniShipFrameTable), __A__);

     if (currplayer_y_small == 160 && tmp7 < 0x05) tmp7 = 0x05;
     else if (currplayer_y_small == 8 && tmp7 > 0x05) tmp7 = 0x05;

     ((__AX__ = ((((currplayer_y_small)&0xFF))<<8)|(((currplayer_x_small)&0xFF)), __EAX__<<=16), __A__ = tmp7, __AX__ <<= 8, __A__ |= 0x20+0, _oam_spr(__EAX__));
     break;
    case 10:
     title_ball_shit();

     if (retro_mode && currplayer_gravity) tmp7 = 0xA0+0;
     else tmp7 = 0x20+0;

     ((__AX__ = ((((currplayer_y_small)&0xFF))<<8)|(((currplayer_x_small)&0xFF)), __EAX__<<=16), __A__ = 0x3D, __AX__ <<= 8, __A__ |= tmp7, _oam_spr(__EAX__));
     break;
    case 11:
     title_mini_wave_shit();

     if (currplayer_y_small == 160 || currplayer_y_small == 8) {
      tmp1 = 0x0D;
      tmp2 = 0x20;
      ((__AX__ = ((((currplayer_y_small)&0xFF))<<8)|(((currplayer_x_small)&0xFF)), __EAX__<<=16), __A__ = 0x0D, __AX__ <<= 8, __A__ |= 0x20+0, _oam_spr(__EAX__));
     } else {
      tmp1 = 0x11;
      if (currplayer_gravity) {
       tmp2 = 0xA0+0;
      } else {
       tmp2 = 0x20+0;
      }
     }

     ((__AX__ = ((((currplayer_y_small)&0xFF))<<8)|(((currplayer_x_small)&0xFF)), __EAX__<<=16), __A__ = tmp1, __AX__ <<= 8, __A__ |= tmp2, _oam_spr(__EAX__));
     break;
    case 12:
     title_ufo_shit();

     ((__AX__ = ((((currplayer_y_small)&0xFF))<<8)|(((currplayer_x_small)&0xFF)), __EAX__<<=16), __A__ = 0x19, __AX__ <<= 8, __A__ |= 0x20+0, _oam_spr(__EAX__));
     break;
    case 13:
     title_robot_shit();

     if (!(kandoframecnt & 0x07)) {
      if (ballframe == 2) ballframe = 0;
      else ++ballframe;
     }

     tmp2 = 0x37 + (ballframe * 2);

     ((__AX__ = ((((currplayer_y_small)&0xFF))<<8)|(((currplayer_x_small)&0xFF)), __EAX__<<=16), __A__ = tmp2, __AX__ <<= 8, __A__ |= 0x20+0, _oam_spr(__EAX__));
     break;

    case 14:
#line 500 "SAUCE/menustates/titlescreen.c"
     currplayer_y_small = 160; tmp7 = 0x20+0;




     if (!(kandoframecnt & 0x07)) { ++ballframe; ballframe &= 3; }
     tmp2 = 0x21 + (ballframe * 2);
     ((__AX__ = ((((currplayer_y_small)&0xFF))<<8)|(((currplayer_x_small)&0xFF)), __EAX__<<=16), __A__ = tmp2, __AX__ <<= 8, __A__ |= tmp7, _oam_spr(__EAX__));
     break;
    case 15:
     title_swing_shit();

     if (!(kandoframecnt & 0x07)) { ++ballframe; ballframe &= 3; }

     tmp7 = ( __A__ = ballframe, __asm__("tay"), __asm__("ldx #0 \n lda %v, y", miniSwingFrameTable), __A__);
     ((__AX__ = ((((currplayer_y_small)&0xFF))<<8)|(((currplayer_x_small)&0xFF)), __EAX__<<=16), __A__ = tmp7, __AX__ <<= 8, __A__ |= 0x20+0, _oam_spr(__EAX__));
     break;
    case 0xFF:
     if (!(kandoframecnt & 0x07)) {
      if (ballframe == 5) ballframe = 0;
      else ++ballframe;
     }

     if (ballframe != 5) {
      tmp7 = ( __A__ = ballframe, __asm__("tay"), __asm__("ldx #0 \n lda %v, y", mysteryFrameTable), __A__);
      ((__AX__ = ((((currplayer_y_small)&0xFF))<<8)|(((currplayer_x_small)&0xFF)), __EAX__<<=16), __A__ = tmp7, __AX__ <<= 8, __A__ |= 0x20+0, _oam_spr(__EAX__));
      ((__AX__ = ((((currplayer_y_small)&0xFF))<<8)|(((currplayer_x_small + 8)&0xFF)), __EAX__<<=16), __A__ = tmp7, __AX__ <<= 8, __A__ |= 0xE0+0, _oam_spr(__EAX__));
     } else {
      roll_new_mode();
     }
     break;
   };
  }



  if (!(kandoframecnt & 127)) {
   color_picker();
  }
  dec_mouse_timer();
  tmp3 = 0;

  if (joypad1.press_right && true) {
   if (menuselection == 6) menuselection = 0;
   else menuselection++;
   tmp3--;



  }
  if (joypad1.press_left && true) {
   if (menuselection == 0) menuselection = 6;
   else menuselection--;
   tmp3++;



  }

  if (tmp3 && true) {
   tmp4 = menuselection; ++tmp4;
   tmp5 = loNTAddrTableTitleScreen[tmp4]|(hiNTAddrTableTitleScreen[tmp4]<<8);

   if (menuselection != 5) {
    ((__A__ = 'a', __asm__("sta sreg+0")), __AX__ = tmp5, _one_vram_buffer(__EAX__));
    ((__A__ = 'b', __asm__("sta sreg+0")), __AX__ = (((((((tmp5)&0xFF))+1)&0xFF)))|(tmp5 & 0xFF00), _one_vram_buffer(__EAX__));
   } else {
    ((__A__ = 0x6F, __asm__("sta sreg+0")), __AX__ = (0x2000|(((2)<<5)|(26))), _one_vram_buffer(__EAX__));
    ((__A__ = 0x7F, __asm__("sta sreg+0")), __AX__ = (0x2000|(((3)<<5)|(26))), _one_vram_buffer(__EAX__));
   }





   tmp4 += tmp3;
   tmp5 = loNTAddrTableTitleScreen[tmp4]|(hiNTAddrTableTitleScreen[tmp4]<<8);

   if (tmp4 != 5+1) {

    ((__A__ = ' ', __asm__("sta sreg+0")), __AX__ = tmp5, _one_vram_buffer(__EAX__));
    ((__A__ = ' ', __asm__("sta sreg+0")), __AX__ = (((((((tmp5)&0xFF))+1)&0xFF)))|(tmp5 & 0xFF00), _one_vram_buffer(__EAX__));

   } else {
    ((__A__ = ' ', __asm__("sta sreg+0")), __AX__ = (0x2000|(((2)<<5)|(26))), _one_vram_buffer(__EAX__));
    ((__A__ = ' ', __asm__("sta sreg+0")), __AX__ = (0x2000|(((3)<<5)|(26))), _one_vram_buffer(__EAX__));
   }


  }

   if (joypad1.press_select) {
    tmp2 = 0;
    gameState = 0x00;
    famistudio_music_stop();
    music_update();
    menuMusicCurrentlyPlaying = 0;
    return;
   }

  *((uint8_t*)&tmp8) += (((((( __AX__ = (uintptr_t)CUBE_SPEED[framerate & 0x7F], __asm__("sta ptr1 \n stx ptr1+1"), __A__ = (1) << 1, __asm__("tay"), __asm__("lda (ptr1), y \n tax"), __asm__("iny"), __asm__("lda (ptr1), y"), __AX__)>>8)&0xFF))));
  (_edit_irq_table(*((uint8_t*)&tmp8)|(2<<8)));
#line 612 "SAUCE/menustates/titlescreen.c"
  if (mouse.left_press) {
   if ((uint8_t)(currplayer_y_small - 8) <= (uint8_t)mouse.y && (uint8_t)(currplayer_y_small + 8) >= (uint8_t)mouse.y) {
    if (mouse.x >= currplayer_x_small && (uint8_t)(currplayer_x_small + 16) >= mouse.x) {
     if (titlemode != 0xFF) {
      titlemode = 0xFF;
      (__AX__ = (uint16_t)((((0)&0xFF)))<<8|0, _sfx_play(__AX__));
      ballframe = 0;
     }
    }
   }


   if ((mouse.y >= 0x5E && mouse.y <= 0x7A)) {
    if (mouse.x >= 0x41 && mouse.x <= 0x5A) {
     menuselection = 6; break;
    } else if (mouse.x >= 0x6F && mouse.x <= 0x8C) {
     menuselection = 0; break;
    } else if (mouse.x >= 0xA1 && mouse.x <= 0xBA) {
     menuselection = 1; break;
    }
   } else if ((mouse.y >= 0x8C && mouse.y <= 0x9B)) {
    if (mouse.x >= 0x46 && mouse.x <= 0x56) {
     menuselection = 2; break;
    } else if (mouse.x >= 0x76 && mouse.x <= 0x86) {
     menuselection = 3; break;
    } else if (mouse.x >= 0xA6 && mouse.x <= 0xB6) {
     menuselection = 4; break;
    }
   } else if ((mouse.y >= 0x0D && mouse.y <= 0x1C)) {
    if (mouse.x >= 0xD6 && mouse.x <= 0xE4) {
     if (all_levels_complete != 0xFC)
      (__AX__ = (uint16_t)((((0)&0xFF)))<<8|9, _sfx_play(__AX__));
     else {
      menuselection = 5;
      break;
     }
    }
   }
  }
#line 662 "SAUCE/menustates/titlescreen.c"
  if ((joypad1.press & (0x10 | 0x80)) && true) {

   if (menuselection == 5 && all_levels_complete != 0xFC) {
    (__AX__ = (uint16_t)((((0)&0xFF)))<<8|9, _sfx_play(__AX__));
   } else

   {
    break;
   }
  }
 }


 oam_clear();
 ppu_wait_nmi();
 tmp7 = newrand() & 255;
 normalorcommlevels = 1;
 switch (menuselection) {
  case 0:






    normalorcommlevels = 0;


  case 1:

   (*(uint8_t*) (0x2005) = (0x00));
   (*(uint8_t*) (0x2005) = (0x00));
   mmc3_disable_irq();

   if (!tmp7) (__A__ = 1, __asm__("sta ptr3 "), (__asm__("lda #<%v \n ldx #>%v \n ldy #<.bank(%v) \n jsr crossPRGBankJump ", playPCM, playPCM, playPCM), __asm__("lda ptr3 \n ldx ptr3+1"), __AX__));
   else (__A__ = 0, __asm__("sta ptr3 "), (__asm__("lda #<%v \n ldx #>%v \n ldy #<.bank(%v) \n jsr crossPRGBankJump ", playPCM, playPCM, playPCM), __asm__("lda ptr3 \n ldx ptr3+1"), __AX__));

   gameState = 0x06;

   if (normalorcommlevels) level = (25);
   else level = 0;

   return;


   case 2:
    gameState = 0x04;
    return;
   case 3:
    gameState = 0x07;
    return;
   case 4:
    tmp2 = 0;
    gameState = 0xF1;
    break;
   case 5:
    last_gameState = gameState;
    gameState = 0xF0;
    return;

   case 6:
    gameState = 0x08;
    return;
 };

}

void set_title_icon() {
  if (titlemode < 4) {
   do {
    tmp7 = newrand() & 31;
   } while (tmp7 > 26);
   titleicon = tmp7;
   tmp7 = 40 + (tmp7 * 2);
   mmc3_set_2kb_chr_bank_0(retro_mode ? 18 : tmp7);
  } else if (


   (titlemode <= 7 && titlemode != 6) || titlemode == 13 || titlemode == 10 ){
   mmc3_set_2kb_chr_bank_0(retro_mode == 0 ? 20 : 22);
  } else if (titlemode <= 15) {
   mmc3_set_2kb_chr_bank_0(retro_mode == 0 ? 24 : 26);
  }
}

void roll_new_mode() {
 speed = (newrand() & 3);
 if (speed == 0) speed = 1;
 currplayer_gravity = 0x00;
 update_currplayer_table_idx();
 currplayer_x_small = 0x08;
 currplayer_y_small = 0xA0;
 player_vel_y[0] = 0;
 tmpi8 = 0;
 teleport_output = 0xFF;
 tmp7 = titlemode;
 do {
  titlemode = newrand() & 15;
 } while (titlemode > 9 || titlemode == tmp7);
 if (titlemode >= 8) {
  titlemode = (newrand() & 7) + 8;
 }
 if (retro_mode && (titlemode == 0 || titlemode == 2))
  titlemode = tmp7;

 if (



  titlemode == 1 || titlemode == 3 || titlemode == 6 || titlemode == 9 || titlemode == 11 || titlemode == 12 ) {
  while (tmp1 > 0xA0 && tmp1 <= 0x20) {
   tmp1 = newrand() & 0xFF;
  }
  currplayer_y_small = tmp1;
 }

 ballframe = 0;
 oam_clear();
#line 794 "SAUCE/menustates/titlescreen.c"
 set_title_icon();
}

void bounds_check() {
 if (currplayer_y_small >= 160) {
  currplayer_y_small = 160;
 } else if (currplayer_y_small < 0x08) currplayer_y_small = 0x08;
}

void title_ship_shit() {
 if (kandoframecnt & 1) { if (!(newrand() & 7)) (currplayer_gravity ^= 0xFF); update_currplayer_table_idx(); }

 currplayer_y_small -= tmpi8;

 if (currplayer_y_small >= 160) {
  currplayer_y_small = 160;
 } else if (currplayer_y_small < 0x08) {
  currplayer_y_small = 0x08;
  currplayer_gravity = 0x00;
  update_currplayer_table_idx();
  tmpi8 = 0;
 }


 if (currplayer_gravity) {
  if (!(kandoframecnt & 7)) { if (tmpi8 < 3) tmpi8++; }
 } else {
  if (!(kandoframecnt & 7)) { if (tmpi8 > -3) tmpi8--; }
 }
}

void title_swing_shit() {
 if (kandoframecnt & 1) {
  if (!(newrand() & 15)) {
   (currplayer_gravity ^= 0xFF);
   update_currplayer_table_idx();
  }
 }

 if ((kandoframecnt & 3) == 0)
   if (currplayer_gravity) {
    currplayer_vel_y_small -= 1;
    if (currplayer_vel_y_small <= -3) currplayer_vel_y_small = -3;
   } else {
    currplayer_vel_y_small += 1;
    if (currplayer_vel_y_small >= 3) currplayer_vel_y_small = 3;
   }


 currplayer_y_small += currplayer_vel_y_small;

 bounds_check();
}

void title_ball_shit() {
#line 867 "SAUCE/menustates/titlescreen.c"
 bounds_check();
}

void title_ufo_shit() {
 if (teleport_output <= 0x1A) {
  currplayer_y_small -= UFO_Title_Jump_Table[teleport_output];
  teleport_output++;
 } else currplayer_y_small += 4;
 if (!(newrand() & 15)) teleport_output = 0;

 if (currplayer_y_small >= 160) {
  currplayer_y_small = 160;
 } else if (currplayer_y_small < 0x08) { currplayer_y_small = 0x08; teleport_output = 0x0E; }
}
void title_cube_shit() {
 if (teleport_output <= 0x1A) {
  currplayer_y_small -= UFO_Title_Jump_Table[teleport_output];
  teleport_output++;
 } else currplayer_y_small += 4;

 if (currplayer_y_small >= (titlemode == 0 ? 160 : 164)) {
  currplayer_y_small = titlemode == 0 ? 160 : 164;
  player_vel_y[0] = 0;
 }

 if (currplayer_y_small == (titlemode == 0 ? 160 : 164) && !(newrand() & 15)) {
  teleport_output = 0;
  player_vel_y[0] = 1;
 } else if (currplayer_y_small < 0x08) { currplayer_y_small = 0x08; teleport_output = 0x0E; }
}

void title_wave_shit() {
 tmp2 = newrand() & 63;
 if (kandoframecnt & 1) { if (tmp2 >= 60) (currplayer_gravity ^= 0xFF); update_currplayer_table_idx(); }

 if (currplayer_gravity) currplayer_y_small -= speed;

 else currplayer_y_small += speed;
 bounds_check();
}
void title_mini_wave_shit() {
 tmp2 = newrand() & 63;
 if (kandoframecnt & 1) { if (tmp2 >= 60) (currplayer_gravity ^= 0xFF); update_currplayer_table_idx(); }

 if (currplayer_gravity) currplayer_y_small -= (speed << 1);

 else currplayer_y_small += (speed << 1);
 bounds_check();
}

void title_robot_shit() {
 if (kandoframecnt & 1 && !currplayer_gravity) {
  if (!(newrand() & 15)) { tmpi8 = newrand() & 15; currplayer_gravity = 0xFF; update_currplayer_table_idx(); teleport_output = 0; }
 }

 if (currplayer_gravity) {
  if (teleport_output < 0x0C) { currplayer_y_small -= UFO_Title_Jump_Table[teleport_output]; teleport_output++; }
  if (teleport_output == 0x0C && tmpi8 > 0) { currplayer_y_small -= UFO_Title_Jump_Table[teleport_output]; tmpi8--; }
  else { currplayer_y_small -= UFO_Title_Jump_Table[teleport_output]; teleport_output++; if (teleport_output > 0x1A) teleport_output = 0x1A; }
  if (currplayer_y_small >= 160) { currplayer_gravity = 0x00; tmpi8 = 0; teleport_output = 0; currplayer_y_small = 160; update_currplayer_table_idx(); }
 }

}

void color_picker() {
 tmp3 = 0x80 + BG_Table2[discoframe];

 if (tmp3 < 0x80) tmp3 += 0x80;
 else if (tmp3 >= 0xF0) tmp3 -= 0x80;
 tmp2 = (tmp3 & 0x3F);
  ( PAL_BUF_RAW[0&0x1F] = (tmp2), __A__ = (tmp2), __asm__("tay"), __asm__("lda (%v), y", PAL_PTR), PAL_BUF[0&0x1F] = __A__);
  ( PAL_BUF_RAW[0x11&0x1F] = (tmp2), __A__ = (tmp2), __asm__("tay"), __asm__("lda (%v), y", PAL_PTR), PAL_BUF[0x11&0x1F] = __A__);


  ++PAL_UPDATE;;

 tmp3 = 0xC0 + BG_Table2[discoframe];

 if (tmp3 < 0x80) tmp3 += 0x80;
 else if (tmp3 >= 0xF0) tmp3 -= 0x80;
 tmp2 = (tmp3 & 0x3F);



 discoframe++;
 ++PAL_UPDATE;;
 if (discoframe == 12) discoframe = 0;
}



const uint8_t BG_Table2[]={
   0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17,
 0x18, 0x19, 0x1A, 0x1B, 0x1C
};

const uint8_t G_Table2[]={
   0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27,
 0x28, 0x29, 0x2A, 0x2B, 0x2C
};

const uint8_t menu_irq_table[] = {
 180,
 0xf5, 0x00,

 0xff
};

const uint8_t UFO_Title_Jump_Table[]={
 5,
 4,
 3, 3,
 2, 2, 2, 2,
 1, 1, 1, 1, 1,
 0,
 -1, -1, -1, -1, -1,
 -2, -2, -2, -2,
 -3, -3,
 -4,
 -5,
};

const uint8_t BALL_Title_Jump_Table[]={
 1, 1, 1,
 2, 2,
 3, 3,
 4,
};

const uint8_t menu_color_table[]={
 0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07,
 0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0F,
 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17,
 0x18, 0x19, 0x1A, 0x1B, 0x1C,
 0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27,
 0x28, 0x29, 0x2A, 0x2B, 0x2C,
 0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37,
 0x38, 0x39, 0x3A, 0x3B, 0x3C
};

const uint8_t shipFrameTable[] = {0x21, 0x21, 0x25, 0x29, 0x2D, 0x31, 0x31};

const uint8_t robotFrameTable1[] = {0x01, 0xFF};
const uint8_t robotFrameTable2[] = {0x03, 0x07, 0x0B, 0x0D, 0x01, 0x07, 0x0B, 0x11};
const uint8_t robotFrameTable3[] = {0x05, 0x09, 0x05, 0x09, 0x03, 0x09, 0x0D, 0x13};

const uint8_t spiderFrameTable1[] = {0x21, 0x27, 0x2D, 0xFF};
const uint8_t spiderFrameTable2[] = {0x23, 0x29, 0x2F, 0x33};
const uint8_t spiderFrameTable3[] = {0x25, 0x2B, 0x31, 0x35};

const uint8_t swingFrameTable1[] = {0x31, 0x35};

const uint8_t swingFrameTable2[] = {0x20, 0x20, 0x20, 0xA0};




const uint8_t miniShipFrameTable[] = {0x01, 0x01, 0x03, 0x05, 0x07, 0x09, 0x09};

const uint8_t miniSwingFrameTable[] = {0x3F, 0x1B, 0x3F, 0x3D};

const uint8_t mysteryFrameTable[] = {0x1D, 0x7D, 0x1F, 0x7F, 0xFF};
#line 1089 "SAUCE/menustates/titlescreen.c"
void check_practice_point_deletion() {
 if (practicebuffer || (practice_point_count > 1 && (joypad1.press_select || (mouse.left && mouse.right_press)) && !(joypad1.hold & (0x08 | 0x04)))) {
    curr_practice_point--;
    practicebuffer = 0;
    if (latest_practice_point) latest_practice_point--;
    if (curr_practice_point >= practice_point_count)
     curr_practice_point = practice_point_count - 1;
 }
}

void end_level_debug() {
    END_LEVEL_TIMER = 0;
    kandokidshack4 = 0;
    oam_clear();
    gameState = 0x03;

    famistudio_music_stop();
}

void decrement_was_on_slope() {
 if (currplayer_was_on_slope_counter) {
  currplayer_was_on_slope_counter--;

  if (!currplayer_was_on_slope_counter) {
   if (gamemode == 0x00 || gamemode == 0x02) {

    __A__ = (currplayer_slope_type & 0b1000) + (256 - 0b1000);
    __A__ = currplayer_table_idx & ~0b001;
    __asm__ ("adc #0 \n tay");

    switch (gamemode) {
     case 0x02:
      switch (currplayer_slope_type) {
       case (0b10 | 0b0100):
       case (0b10 | 0b0100 | 0b1000):
        currplayer_vel_y += (( __A__ = (__asm__("tya"), __A__), __asm__("tay"), __asm__("lda %v, y \n ldx %v, y", EXIT_SLOPE_BALL_22_lo, EXIT_SLOPE_BALL_22_hi), __AX__));
        break;
       case (0b11 | 0b0100):
       case (0b11 | 0b0100 | 0b1000):
        currplayer_vel_y += (( __A__ = (__asm__("tya"), __A__), __asm__("tay"), __asm__("lda %v, y \n ldx %v, y", EXIT_SLOPE_BALL_66_lo, EXIT_SLOPE_BALL_66_hi), __AX__));
      }
      break;
     case 0x00:
      switch (currplayer_slope_type) {
       case (0b10 | 0b0100):
       case (0b10 | 0b0100 | 0b1000):
        currplayer_vel_y += (( __A__ = (__asm__("tya"), __A__), __asm__("tay"), __asm__("lda %v, y \n ldx %v, y", EXIT_SLOPE_CUBE_22_lo, EXIT_SLOPE_CUBE_22_hi), __AX__));
        break;
      }
      break;
    }
   }
   currplayer_slope_type = 0;
  }
 } else {
  currplayer_last_slope_type = 0;
  currplayer_slope_type = 0;
 }
}
#line 13 "SAUCE/include_menus.h"
#line 31 "SAUCE/include_menus.h"
_Pragma ("code-name(\"XCD_BANK_05\" )") _Pragma ("data-name(\"XCD_BANK_05\" )") _Pragma ("rodata-name(\"XCD_BANK_05\" )")
#line 1 "SAUCE/menustates/bgmtest.c"
void code_checker();
#line 4 "SAUCE/defines/charmap/bgm_charmap.h"
_Pragma ("charmap (0x20, 0xFF)")



_Pragma ("charmap (0x24, 0xFE)")
_Pragma ("charmap (0x25, 0xDA)")




_Pragma ("charmap (0x2A, 0x8E)")




_Pragma ("charmap (0x2F, 0xE0)")
_Pragma ("charmap (0x30, 0xB0)")
_Pragma ("charmap (0x31, 0xB1)")
_Pragma ("charmap (0x32, 0xB2)")
_Pragma ("charmap (0x33, 0xB3)")
_Pragma ("charmap (0x34, 0xB4)")
_Pragma ("charmap (0x35, 0xB5)")
_Pragma ("charmap (0x36, 0xB6)")
_Pragma ("charmap (0x37, 0xB7)")
_Pragma ("charmap (0x38, 0xB8)")
_Pragma ("charmap (0x39, 0xB9)")
_Pragma ("charmap (0x3A, 0xFC)")






_Pragma ("charmap (0x41, 0xBB)")
_Pragma ("charmap (0x42, 0xBC)")
_Pragma ("charmap (0x43, 0xBD)")
_Pragma ("charmap (0x44, 0xBE)")
_Pragma ("charmap (0x45, 0xBF)")
_Pragma ("charmap (0x46, 0xC0)")
_Pragma ("charmap (0x47, 0xC1)")
_Pragma ("charmap (0x48, 0xC2)")
_Pragma ("charmap (0x49, 0xC3)")
_Pragma ("charmap (0x4A, 0xC4)")
_Pragma ("charmap (0x4B, 0xC5)")
_Pragma ("charmap (0x4C, 0xC6)")
_Pragma ("charmap (0x4D, 0xC7)")
_Pragma ("charmap (0x4E, 0xC8)")
_Pragma ("charmap (0x4F, 0xC9)")
_Pragma ("charmap (0x50, 0xCA)")
_Pragma ("charmap (0x51, 0xCB)")
_Pragma ("charmap (0x52, 0xCC)")
_Pragma ("charmap (0x53, 0xCD)")
_Pragma ("charmap (0x54, 0xCE)")
_Pragma ("charmap (0x55, 0xCF)")
_Pragma ("charmap (0x56, 0xDB)")
_Pragma ("charmap (0x57, 0xDC)")
_Pragma ("charmap (0x58, 0xDD)")
_Pragma ("charmap (0x59, 0xDE)")
_Pragma ("charmap (0x5A, 0xDF)")






_Pragma ("charmap (0x61, 0x5E)")
_Pragma ("charmap (0x62, 0x5F)")
_Pragma ("charmap (0x63, 0x9F)")
_Pragma ("charmap (0x64, 0x8E)")
_Pragma ("charmap (0x65, 0xFE)")
_Pragma ("charmap (0x66, 0x0F)")
_Pragma ("charmap (0x67, 0x8F)")
_Pragma ("charmap (0x68, 0x5F)")
_Pragma ("charmap (0x69, 0x6F)")
_Pragma ("charmap (0x6A, 0xDA)")
_Pragma ("charmap (0x6B, 0xDB)")
_Pragma ("charmap (0x6C, 0xDC)")
_Pragma ("charmap (0x6D, 0xDD)")
_Pragma ("charmap (0x6E, 0xDE)")
_Pragma ("charmap (0x6F, 0xDF)")
_Pragma ("charmap (0x70, 0xE0)")
_Pragma ("charmap (0x71, 0xE1)")
_Pragma ("charmap (0x72, 0xE2)")
_Pragma ("charmap (0x73, 0xE3)")
_Pragma ("charmap (0x74, 0xE4)")
_Pragma ("charmap (0x75, 0xE5)")
_Pragma ("charmap (0x76, 0xE6)")
_Pragma ("charmap (0x77, 0xE7)")
_Pragma ("charmap (0x78, 0xE8)")
_Pragma ("charmap (0x79, 0xE9)")
_Pragma ("charmap (0x7A, 0xEA)")




#line 5 "SAUCE/menustates/bgmtest.c"
#line 5 "MUSIC/EXPORTS/lvlset_A/music_soundTestTables.h"
const char musicSoundTestString00[ 7] = "STEREO$";
const char musicSoundTestString01[ 7] = "BACK$ON";
const char musicSoundTestString02[10] = "BASE$AFTER";
const char musicSoundTestString03[ 9] = "THEORY$OF";
const char musicSoundTestString04[10] = "ELECTROMAN";
const char musicSoundTestString05[ 7] = "HEXAGON";
const char musicSoundTestString06[ 5] = "BLAST";
const char musicSoundTestString07[11] = "GEOMETRICAL";
const char musicSoundTestString08[ 3] = "THE";
const char musicSoundTestString09[ 8] = "SCHEMING";
const char musicSoundTestString0A[12] = "AT$THE$SPEED";
const char musicSoundTestString0B[13] = "EXTRAORDINARY";
const char musicSoundTestString0C[11] = "GOLDEN$HAZE";
const char musicSoundTestString0D[ 9] = "GROUND$TO";
const char musicSoundTestString0E[ 7] = "RAINBOW";
const char musicSoundTestString0F[ 9] = "STALEMATE";
const char musicSoundTestString10[ 4] = "MENU";
const char musicSoundTestString11[ 7] = "MADNESS";
const char musicSoundTestString12[ 5] = "TRACK";
const char musicSoundTestString13[10] = "POLARGEIST";
const char musicSoundTestString14[ 7] = "DRY$OUT";
const char musicSoundTestString15[ 4] = "BASE";
const char musicSoundTestString16[11] = "CANT$LET$GO";
const char musicSoundTestString17[ 6] = "JUMPER";
const char musicSoundTestString18[12] = "TIME$MACHINE";
const char musicSoundTestString19[ 6] = "CYCLES";
const char musicSoundTestString1A[ 5] = "XSTEP";
const char musicSoundTestString1B[11] = "CLUTTERFUNK";
const char musicSoundTestString1C[10] = "EVERYTHING";
const char musicSoundTestString1D[10] = "ADVENTURES";
const char musicSoundTestString1E[ 8] = "CLUBSTEP";
const char musicSoundTestString1F[14] = "ELECTRODYNAMIX";
const char musicSoundTestString20[ 5] = "FORCE";
const char musicSoundTestString21[10] = "PROCESSING";
const char musicSoundTestString22[12] = "EVERYTHING$2";
const char musicSoundTestString23[ 9] = "DOMINATOR";
const char musicSoundTestString24[10] = "DEADLOCKED";
const char musicSoundTestString25[10] = "FINGERDASH";
const char musicSoundTestString26[ 4] = "DASH";
const char musicSoundTestString27[11] = "DESERT$CITY";
const char musicSoundTestString28[ 9] = "CHALLENGE";
const char musicSoundTestString29[ 8] = "PRACTICE";
const char musicSoundTestString2A[ 6] = "WEASEL";
const char musicSoundTestString2B[13] = "OF$LIGHT$PT$1";
const char musicSoundTestString2C[13] = "OF$LIGHT$PT$2";
const char musicSoundTestString2D[10] = "EXCITEMENT";
const char musicSoundTestString2E[ 3] = "CUT";
const char musicSoundTestString2F[ 5] = "SPACE";
const char musicSoundTestString30[13] = "HAUNTED$WOODS";
const char musicSoundTestString31[11] = "INFERNOPLEX";
const char musicSoundTestString32[10] = "JUST$RIGHT";
const char musicSoundTestString33[ 8] = "MIDNIGHT";
const char musicSoundTestString34[ 7] = "TYLENOL";
const char musicSoundTestString35[ 9] = "GREIF$CUT";
const char musicSoundTestString36[ 6] = "ROBTOP";
const char musicSoundTestString37[12] = "FOREVERBOUND";
const char musicSoundTestString38[ 4] = "DJVI";
const char musicSoundTestString39[ 4] = "STEP";
const char musicSoundTestString3A[10] = "WATERFLAME";
const char musicSoundTestString3B[ 7] = "DJ$NATE";
const char musicSoundTestString3C[ 4] = "F777";
const char musicSoundTestString3D[ 3] = "MDK";
const char musicSoundTestString3E[13] = "KEVIN$MACLEOD";
const char musicSoundTestString3F[12] = "OCULARNEBULA";
const char musicSoundTestString40[ 9] = "DIMRAIN47";
const char musicSoundTestString41[13] = "SEAGLOWINGPRO";
const char musicSoundTestString42[12] = "DETIOUSMUSIC";
const char musicSoundTestString43[14] = "DAN$HARRISON$B";
const char musicSoundTestString44[12] = "CORNANDBEANS";
const char musicSoundTestString45[ 8] = "KITSUNE2";
const char musicSoundTestString46[ 7] = "KAYOSZX";


const char* const xbgmtextsUpper[] = {
 ((void *) 0),
 musicSoundTestString00,
 musicSoundTestString01,
 ((void *) 0),
 ((void *) 0),
 musicSoundTestString02,
 ((void *) 0),
 ((void *) 0),
 ((void *) 0),
 ((void *) 0),
 ((void *) 0),
 ((void *) 0),
 musicSoundTestString03,
 musicSoundTestString04,
 ((void *) 0),
 ((void *) 0),
 musicSoundTestString05,
 musicSoundTestString06,
 musicSoundTestString03,
 musicSoundTestString07,
 ((void *) 0),
 ((void *) 0),
 ((void *) 0),
 ((void *) 0),
 musicSoundTestString08,
 ((void *) 0),
 musicSoundTestString09,
 musicSoundTestString0A,
 musicSoundTestString0A,
 musicSoundTestString0B,
 musicSoundTestString0C,
 musicSoundTestString0D,
 ((void *) 0),
 ((void *) 0),
 ((void *) 0),
 ((void *) 0),
 musicSoundTestString0E,
 musicSoundTestString0F,
};

const uint8_t xbgmtextsUpperSize[] = {
 0,
 sizeof(musicSoundTestString00),
 sizeof(musicSoundTestString01),
 0,
 0,
 sizeof(musicSoundTestString02),
 0,
 0,
 0,
 0,
 0,
 0,
 sizeof(musicSoundTestString03),
 sizeof(musicSoundTestString04),
 0,
 0,
 sizeof(musicSoundTestString05),
 sizeof(musicSoundTestString06),
 sizeof(musicSoundTestString03),
 sizeof(musicSoundTestString07),
 0,
 0,
 0,
 0,
 sizeof(musicSoundTestString08),
 0,
 sizeof(musicSoundTestString09),
 sizeof(musicSoundTestString0A),
 sizeof(musicSoundTestString0A),
 sizeof(musicSoundTestString0B),
 sizeof(musicSoundTestString0C),
 sizeof(musicSoundTestString0D),
 0,
 0,
 0,
 0,
 sizeof(musicSoundTestString0E),
 sizeof(musicSoundTestString0F),
};


const char* const xbgmtextsLower[] = {
 musicSoundTestString10,
 musicSoundTestString11,
 musicSoundTestString12,
 musicSoundTestString13,
 musicSoundTestString14,
 musicSoundTestString15,
 musicSoundTestString16,
 musicSoundTestString17,
 musicSoundTestString18,
 musicSoundTestString19,
 musicSoundTestString1A,
 musicSoundTestString1B,
 musicSoundTestString1C,
 musicSoundTestString1D,
 musicSoundTestString1E,
 musicSoundTestString1F,
 musicSoundTestString20,
 musicSoundTestString21,
 musicSoundTestString22,
 musicSoundTestString23,
 musicSoundTestString24,
 musicSoundTestString25,
 musicSoundTestString26,
 musicSoundTestString27,
 musicSoundTestString28,
 musicSoundTestString29,
 musicSoundTestString2A,
 musicSoundTestString2B,
 musicSoundTestString2C,
 musicSoundTestString2D,
 musicSoundTestString2E,
 musicSoundTestString2F,
 musicSoundTestString30,
 musicSoundTestString31,
 musicSoundTestString32,
 musicSoundTestString33,
 musicSoundTestString34,
 musicSoundTestString35,
};

const uint8_t xbgmtextsLowerSize[] = {
 sizeof(musicSoundTestString10),
 sizeof(musicSoundTestString11),
 sizeof(musicSoundTestString12),
 sizeof(musicSoundTestString13),
 sizeof(musicSoundTestString14),
 sizeof(musicSoundTestString15),
 sizeof(musicSoundTestString16),
 sizeof(musicSoundTestString17),
 sizeof(musicSoundTestString18),
 sizeof(musicSoundTestString19),
 sizeof(musicSoundTestString1A),
 sizeof(musicSoundTestString1B),
 sizeof(musicSoundTestString1C),
 sizeof(musicSoundTestString1D),
 sizeof(musicSoundTestString1E),
 sizeof(musicSoundTestString1F),
 sizeof(musicSoundTestString20),
 sizeof(musicSoundTestString21),
 sizeof(musicSoundTestString22),
 sizeof(musicSoundTestString23),
 sizeof(musicSoundTestString24),
 sizeof(musicSoundTestString25),
 sizeof(musicSoundTestString26),
 sizeof(musicSoundTestString27),
 sizeof(musicSoundTestString28),
 sizeof(musicSoundTestString29),
 sizeof(musicSoundTestString2A),
 sizeof(musicSoundTestString2B),
 sizeof(musicSoundTestString2C),
 sizeof(musicSoundTestString2D),
 sizeof(musicSoundTestString2E),
 sizeof(musicSoundTestString2F),
 sizeof(musicSoundTestString30),
 sizeof(musicSoundTestString31),
 sizeof(musicSoundTestString32),
 sizeof(musicSoundTestString33),
 sizeof(musicSoundTestString34),
 sizeof(musicSoundTestString35),
};


const char* const xbgmtextsOriginalArtist[] = {
 musicSoundTestString36,
 musicSoundTestString37,
 musicSoundTestString38,
 musicSoundTestString39,
 musicSoundTestString38,
 musicSoundTestString38,
 musicSoundTestString38,
 musicSoundTestString3A,
 musicSoundTestString3A,
 musicSoundTestString38,
 musicSoundTestString38,
 musicSoundTestString3A,
 musicSoundTestString3B,
 musicSoundTestString3A,
 musicSoundTestString3B,
 musicSoundTestString3B,
 musicSoundTestString3A,
 musicSoundTestString3A,
 musicSoundTestString3B,
 musicSoundTestString3A,
 musicSoundTestString3C,
 musicSoundTestString3D,
 musicSoundTestString3D,
 musicSoundTestString3E,
 musicSoundTestString36,
 musicSoundTestString3F,
 musicSoundTestString3E,
 musicSoundTestString40,
 musicSoundTestString40,
 musicSoundTestString41,
 musicSoundTestString42,
 musicSoundTestString41,
 musicSoundTestString3A,
 musicSoundTestString40,
 musicSoundTestString43,
 musicSoundTestString44,
 musicSoundTestString45,
 musicSoundTestString46,
};

const uint8_t xbgmtextsOriginalArtistSize[] = {
 sizeof(musicSoundTestString36),
 sizeof(musicSoundTestString37),
 sizeof(musicSoundTestString38),
 sizeof(musicSoundTestString39),
 sizeof(musicSoundTestString38),
 sizeof(musicSoundTestString38),
 sizeof(musicSoundTestString38),
 sizeof(musicSoundTestString3A),
 sizeof(musicSoundTestString3A),
 sizeof(musicSoundTestString38),
 sizeof(musicSoundTestString38),
 sizeof(musicSoundTestString3A),
 sizeof(musicSoundTestString3B),
 sizeof(musicSoundTestString3A),
 sizeof(musicSoundTestString3B),
 sizeof(musicSoundTestString3B),
 sizeof(musicSoundTestString3A),
 sizeof(musicSoundTestString3A),
 sizeof(musicSoundTestString3B),
 sizeof(musicSoundTestString3A),
 sizeof(musicSoundTestString3C),
 sizeof(musicSoundTestString3D),
 sizeof(musicSoundTestString3D),
 sizeof(musicSoundTestString3E),
 sizeof(musicSoundTestString36),
 sizeof(musicSoundTestString3F),
 sizeof(musicSoundTestString3E),
 sizeof(musicSoundTestString40),
 sizeof(musicSoundTestString40),
 sizeof(musicSoundTestString41),
 sizeof(musicSoundTestString42),
 sizeof(musicSoundTestString41),
 sizeof(musicSoundTestString3A),
 sizeof(musicSoundTestString40),
 sizeof(musicSoundTestString43),
 sizeof(musicSoundTestString44),
 sizeof(musicSoundTestString45),
 sizeof(musicSoundTestString46),
};
#line 340 "MUSIC/EXPORTS/lvlset_A/music_soundTestTables.h"
_Pragma ("code-name(push, \"RODATA\" )") _Pragma ("data-name(push, \"RODATA\" )") _Pragma ("rodata-name(push, \"RODATA\" )")



const uint8_t xbgmlookuptable[] = {
 10,
 31,
 23,
 5,
 32,
 19,
 16,
 36,
 6,
 28,
 33,
 1,
 17,
 11,
 24,
 14,
 18,
 20,
 9,
 12,
 21,
 7,
 2,
 15,
 37,
 3,
 34,
 22,
 8,
 25,
 35,
 26,
 0,
 4,
 27,
 29,
 13,
 30,
};
#line 405 "MUSIC/EXPORTS/lvlset_A/music_soundTestTables.h"
_Pragma ("code-name(pop)") _Pragma ("data-name(pop)") _Pragma ("rodata-name(pop)")
#line 7 "SAUCE/menustates/bgmtest.c"
#line 5 "MUSIC/EXPORTS/lvlset_A/sfx_soundTestTables.h"
const char sfxSoundTestString00[ 5] = "DEATH";
const char sfxSoundTestString01[ 5] = "CLICK";
const char sfxSoundTestString02[14] = "LEVEL$COMPLETE";
const char sfxSoundTestString03[ 4] = "COIN";
const char sfxSoundTestString04[10] = "CHEST$OPEN";
const char sfxSoundTestString05[ 4] = "ORBS";
const char sfxSoundTestString06[ 8] = "DIAMONDS";
const char sfxSoundTestString07[10] = "EXIT$LEVEL";
const char sfxSoundTestString08[11] = "START$LEVEL";
const char sfxSoundTestString09[ 7] = "INVALID";
const char sfxSoundTestString0A[15] = "ACHIEVEMENT$GET";


const char* const sfxtexts[] = {
 sfxSoundTestString00,
 sfxSoundTestString01,
 sfxSoundTestString02,
 sfxSoundTestString03,
 sfxSoundTestString04,
 sfxSoundTestString05,
 sfxSoundTestString06,
 sfxSoundTestString07,
 sfxSoundTestString08,
 sfxSoundTestString09,
 sfxSoundTestString0A,
};

const uint8_t sfxtextSizes[] = {
 sizeof(sfxSoundTestString00),
 sizeof(sfxSoundTestString01),
 sizeof(sfxSoundTestString02),
 sizeof(sfxSoundTestString03),
 sizeof(sfxSoundTestString04),
 sizeof(sfxSoundTestString05),
 sizeof(sfxSoundTestString06),
 sizeof(sfxSoundTestString07),
 sizeof(sfxSoundTestString08),
 sizeof(sfxSoundTestString09),
 sizeof(sfxSoundTestString0A),
};







#line 8 "SAUCE/menustates/bgmtest.c"

const unsigned char bgmtestscreen[];


void state_soundtest() {
   famistudio_music_stop();
   music_update();

 pal_bg(paletteMenu);

 ((*(uint8_t*) (0x2006) = ((((((0x2000>>8)&0xFF)))))), (*(uint8_t*) (0x2006) = ((((((0x2000)&0xFF)))))));
 vram_unrle(bgmtestscreen);

 song = 0;
 temptemp6 = 0;

 tmp4 = 0;
 settingvalue = 0;
 menuMusicCurrentlyPlaying=0;

 ppu_on_all();

 (_pal_fade_to((4<<8)|(((0)&0xFF))));

 while (1) {

  ppu_wait_nmi();
  oam_clear();
  (__asm__("lda #<%v \n ldx #>%v \n ldy #<.bank(%v) \n jsr crossPRGBankJump ", check_if_music_stopped, check_if_music_stopped, check_if_music_stopped), __asm__("lda ptr3 \n ldx ptr3+1"), __AX__);
  mouse_and_cursor();

  kandoframecnt++;
  if (kandoframecnt & 1 && mouse_timer) mouse_timer--;
  if (mouse.left_press) {
   if ((mouse.x >= 0x63 && mouse.x <= 0x8C)) {
    if (mouse.y >= 0x34 && mouse.y <= 0x3A) {
     settingvalue = 0;
    }
    else if ((mouse.y >= 0x6C && mouse.y <= 0x73)) {
     settingvalue = 1;
    }
   }
   if ((mouse.x >= 0x2E && mouse.x <= 0xCC)) {
    if ((mouse.y >= 0xB4 && mouse.y <= 0xBB)) {
     if (settingvalue == 1) { (__AX__ = (uint16_t)((((0)&0xFF)))<<8|tmp4, _sfx_play(__AX__)); }
     else {
      if (!temptemp6) { music_play(xbgmlookuptable[song]); temptemp6 = 1; songplaying = 1; }
      else { famistudio_music_stop(); music_update(); temptemp6 = 0; songplaying = 0; }
     }
    }
    if ((mouse.y >= 0xA4 && mouse.y <= 0xAB)) {
     menu_music = song; (__AX__ = (uint16_t)((((0)&0xFF)))<<8|5, _sfx_play(__AX__));
    }
   }
   if ((mouse.x >= 0x56 && mouse.x <= 0xA5) && (mouse.y >= 0x24 && mouse.y <= 0x2B)) {
    code_checker();
    if (gameState == 0xF0) return;
   }
   if ((mouse.y >= 0x4E && mouse.y <= 0x5C)) {
    if ((mouse.x >= 0x24 && mouse.x <= 0x2C)) {
     if (song == 0) {song = 38 - 1;} else song--; temptemp6 = 0; settingvalue = 0;
    }
    else if ((mouse.x >= 0xCC && mouse.x <= 0xD4)) {
     temptemp6 = 0; song++; if (song == 38) {song = 0;} settingvalue = 0;
    }
   }
   if ((mouse.y >= 0x86 && mouse.y <= 0x93)) {

    if ((mouse.x >= 0x24 && mouse.x <= 0x2C)) {
     if (tmp4 == 0) {tmp4 = 11 - 1;} else tmp4--; settingvalue = 1;
    }
    else if ((mouse.x >= 0xCC && mouse.x <= 0xD4)) {
     tmp4++; if (tmp4 == 11) {tmp4= 0;} settingvalue = 1;
    }
   }
   if ((mouse.x >= 0x35 && mouse.x <= 0xC4)) {
    if (mouse.y >= 0xC4 && mouse.y <= 0xCD) {
     tmp3--;
     ((__A__ = ' ', __asm__("sta sreg+0")), __AX__ = (0x2000|(((7)<<5)|(11))), _one_vram_buffer(__EAX__));
     ((__A__ = ' ', __asm__("sta sreg+0")), __AX__ = (0x2000|(((14)<<5)|(11))), _one_vram_buffer(__EAX__));
     menuMusicCurrentlyPlaying = 1;
     gameState = 0x01;
     return;
    }
    else if (mouse.y >= 0x3D && mouse.y <= 0x64) {
     if (!temptemp6) { music_play(xbgmlookuptable[song]); temptemp6 = 1; songplaying = 1; }
     else { famistudio_music_stop(); music_update(); temptemp6 = 0; songplaying = 0; }
    }
    else if (mouse.y >= 0x75 && mouse.y <= 0x9C) {
     (__AX__ = (uint16_t)((((0)&0xFF)))<<8|tmp4, _sfx_play(__AX__));
    }
   }
  }
 __A__ = ( __A__ = song<<1, __asm__("tay"), __asm__("lda %v+1, y", xbgmtextsUpper), __A__);
 if (__A__) (((const void ** const)xargs)[0] = xbgmtextsUpper[song], (__AX__ = ((((xbgmtextsUpperSize[song])&0xFF))<<8)|(((18)&0xFF)), __EAX__<<=16), __AX__ = (0x2000|(((8)<<5)|(7)))|(0x40<<8), _draw_padded_text(__EAX__));
 else ((__AX__ = ((((17)&0xFF))<<8)|((('$')&0xFF)), __EAX__<<=16), __AX__ = (0x2000|(((8)<<5)|(7)))|(0x40<<8), _one_vram_buffer_repeat(__EAX__));
 __A__ = ( __A__ = song<<1, __asm__("tay"), __asm__("lda %v+1, y", xbgmtextsLower), __A__);
 if (__A__) (((const void ** const)xargs)[0] = xbgmtextsLower[song], (__AX__ = ((((xbgmtextsLowerSize[song])&0xFF))<<8)|(((18)&0xFF)), __EAX__<<=16), __AX__ = (0x2000|(((9)<<5)|(7)))|(0x40<<8), _draw_padded_text(__EAX__));
 else ((__AX__ = ((((17)&0xFF))<<8)|((('$')&0xFF)), __EAX__<<=16), __AX__ = (0x2000|(((9)<<5)|(7)))|(0x40<<8), _one_vram_buffer_repeat(__EAX__));
 __A__ = ( __A__ = song<<1, __asm__("tay"), __asm__("lda %v+1, y", xbgmtextsOriginalArtist), __A__);
 if (__A__) (((const void ** const)xargs)[0] = xbgmtextsOriginalArtist[song], (__AX__ = ((((xbgmtextsOriginalArtistSize[song])&0xFF))<<8)|(((18)&0xFF)), __EAX__<<=16), __AX__ = (0x2000|(((14)<<5)|(7)))|(0x40<<8), _draw_padded_text(__EAX__));
 else ((__AX__ = ((((17)&0xFF))<<8)|((('$')&0xFF)), __EAX__<<=16), __AX__ = (0x2000|(((14)<<5)|(7)))|(0x40<<8), _one_vram_buffer_repeat(__EAX__));

 (((const void ** const)xargs)[0] = sfxtexts[tmp4 & 0x7F], (__AX__ = ((((sfxtextSizes[tmp4])&0xFF))<<8)|(((18)&0xFF)), __EAX__<<=16), __AX__ = (0x2000|(((19)<<5)|(7)))|(0x40<<8), _draw_padded_text(__EAX__));


  if (settingvalue == 0) {
   ((__A__ = 'c', __asm__("sta sreg+0")), __AX__ = (0x2000|(((6)<<5)|(11))), _one_vram_buffer(__EAX__));
   ((__A__ = ' ', __asm__("sta sreg+0")), __AX__ = (0x2000|(((17)<<5)|(11))), _one_vram_buffer(__EAX__));
   if (joypad1.press_right) { song++; temptemp6 = 0; if (song == 38) {song = 0;} }
   if (joypad1.press_left) { if (song == 0) {song = 38 - 1;} else song--; temptemp6 = 0; }
   if (joypad1.press_a) {
     if (!temptemp6) { music_play(xbgmlookuptable[song]); temptemp6 = 1; songplaying = 1; }
     else { famistudio_music_stop(); music_update(); temptemp6 = 0; songplaying = 0; }
   }
  }
  else if (settingvalue == 1) {
   ((__A__ = ' ', __asm__("sta sreg+0")), __AX__ = (0x2000|(((6)<<5)|(11))), _one_vram_buffer(__EAX__));
   ((__A__ = 'c', __asm__("sta sreg+0")), __AX__ = (0x2000|(((17)<<5)|(11))), _one_vram_buffer(__EAX__));
   if (joypad1.press_right) { tmp4++; if (tmp4 == 11) {tmp4= 0;} };
   if (joypad1.press_left) { if (tmp4 == 0) {tmp4 = 11 - 1;} else tmp4--; }
   if (joypad1.press_a) (__AX__ = (uint16_t)((((0)&0xFF)))<<8|tmp4, _sfx_play(__AX__));
  }

  if (joypad1.press_down) settingvalue ^= 1;
  if (joypad1.press_up) settingvalue ^= 1;

  if (joypad1.press_select) { menu_music = song; (__AX__ = (uint16_t)((((0)&0xFF)))<<8|5, _sfx_play(__AX__)); }
  if (joypad1.press_b) {
   tmp3--;
   ((__A__ = ' ', __asm__("sta sreg+0")), __AX__ = (0x2000|(((6)<<5)|(11))), _one_vram_buffer(__EAX__));
   ((__A__ = ' ', __asm__("sta sreg+0")), __AX__ = (0x2000|(((17)<<5)|(11))), _one_vram_buffer(__EAX__));
   menuMusicCurrentlyPlaying = 1;
   gameState = 0x01;
   return;
  }


  if (joypad1.press_start) {
   code_checker();
   if (gameState == 0xF0) return;
  }
 }
}

void code_checker() {
 last_gameState = gameState;
 (__AX__ = (uint16_t)((((0)&0xFF)))<<8|10, _sfx_play(__AX__));
 tmp3 = 1;


 if (song == 0x9 && tmp4 == 0x2 && kandokidshack3 == 0) {
  kandokidshack3++;
  tmp3--;
 }

 else if (song == 1 && tmp4 == 7 && kandokidshack3 == 1) {
  all_levels_complete = 0xFC;
  gameState = 0xF0;
  tmp3--;
 }
 else kandokidshack3 = 0;
#line 182 "SAUCE/menustates/bgmtest.c"
 if (tmp3) (__AX__ = (uint16_t)((((0)&0xFF)))<<8|9, _sfx_play(__AX__));
}





const unsigned char bgmtestscreen[482]={
0x01,0x02,0x01,0x04,0xae,0x02,0x01,0x13,0xae,0x02,0x01,0x09,0xaf,0x02,0x01,0x13,
0xaf,0x02,0x01,0x06,0x06,0x07,0x04,0x01,0x17,0x06,0x07,0x02,0x01,0x03,0x08,0x09,
0x05,0x01,0x17,0x08,0x09,0x02,0x01,0x03,0x0c,0xff,0x01,0x07,0xf3,0xef,0xf5,0xee,
0xe4,0xff,0xf4,0xe5,0xf3,0xf4,0xff,0x01,0x07,0x0d,0x02,0x01,0x03,0x0c,0xff,0x01,
0x19,0x0d,0x02,0x01,0x03,0x0c,0xff,0x01,0x09,0xed,0xf5,0xf3,0xe9,0xe3,0xff,0x01,
0x0a,0x0d,0x02,0x01,0x03,0x0c,0xff,0x01,0x03,0x5c,0xfe,0x01,0x0f,0x5d,0xff,0x01,
0x03,0x0d,0x02,0x01,0x03,0x0c,0xff,0xff,0x6e,0xff,0xfe,0x01,0x11,0xff,0x6f,0xff,
0xff,0x0d,0x02,0x01,0x03,0x0c,0xff,0xff,0x7e,0xff,0xfe,0x01,0x11,0xff,0x7f,0xff,
0xff,0x0d,0x02,0x01,0x03,0x0c,0xff,0x01,0x03,0x6c,0xfe,0x01,0x0f,0x6d,0xff,0x01,
0x03,0x0d,0x02,0x01,0x03,0x0c,0xff,0x01,0x19,0x0d,0x02,0x01,0x03,0x0c,0xff,0x01,
0x08,0xe1,0xf2,0xf4,0xe9,0xf3,0xf4,0xff,0x01,0x0a,0x0d,0x02,0x01,0x03,0x0c,0xff,
0x01,0x03,0x5c,0xfe,0x01,0x0f,0x5d,0xff,0x01,0x03,0x0d,0x02,0x01,0x03,0x0c,0xff,
0x01,0x03,0xfe,0x01,0x11,0xff,0x01,0x03,0x0d,0x02,0x01,0x03,0x0c,0xff,0x01,0x03,
0x6c,0xfe,0x01,0x0f,0x6d,0xff,0x01,0x03,0x0d,0x02,0x01,0x03,0x0c,0xff,0x01,0x19,
0x0d,0x02,0x01,0x03,0x0c,0xff,0x01,0x09,0xf3,0xef,0xf5,0xee,0xe4,0xff,0x01,0x0a,
0x0d,0x02,0x01,0x03,0x0c,0xff,0x01,0x03,0x5c,0xfe,0x01,0x0f,0x5d,0xff,0x01,0x03,
0x0d,0x02,0x01,0x03,0x0c,0xff,0xff,0x6e,0xff,0xfe,0x01,0x11,0xff,0x6f,0xff,0xff,
0x0d,0x02,0x01,0x03,0x0c,0xff,0xff,0x7e,0xff,0xfe,0x01,0x11,0xff,0x7f,0xff,0xff,
0x0d,0x02,0x01,0x03,0x0c,0xff,0x01,0x03,0x6c,0xfe,0x01,0x0f,0x6d,0xff,0x01,0x03,
0x0d,0x02,0x01,0x03,0x0c,0xff,0x01,0x19,0x0d,0x02,0x01,0x03,0x0c,0xff,0xff,0xf3,
0xe5,0xec,0xe5,0xe3,0xf4,0xe0,0xf3,0xe5,0xf4,0xff,0xed,0xe5,0xee,0xf5,0xff,0xed,
0xf5,0xf3,0xe9,0xe3,0xff,0x01,0x02,0x0d,0x02,0x01,0x03,0x0c,0xff,0xff,0xf0,0xf2,
0xe5,0xf3,0xf3,0xff,0xe1,0xff,0xf4,0xef,0xff,0xf0,0xec,0xe1,0xf9,0xff,0xe0,0xff,
0xf3,0xf4,0xef,0xf0,0xff,0xff,0x0d,0x02,0x01,0x03,0x0c,0xff,0x01,0x03,0xf0,0xf2,
0xe5,0xf3,0xf3,0xff,0xe2,0xff,0xf4,0xef,0xff,0xf2,0xe5,0xf4,0xf5,0xf2,0xee,0xff,
0x01,0x04,0x0d,0x02,0x01,0x03,0x0a,0x0b,0x04,0x01,0x09,0x06,0x0e,0x0e,0x07,0x04,
0x01,0x09,0x0a,0x0b,0x02,0x01,0x05,0x05,0x01,0x09,0x08,0x05,0x05,0x09,0x05,0x01,
0x09,0x02,0x01,0x43,0xff,0x5c,0x5f,0x01,0x03,0x53,0xff,0x77,0x00,0x01,0x05,0xdd,
0x77,0x00,0x01,0x05,0xdd,0x77,0x00,0x01,0x05,0xdd,0x77,0x00,0x01,0x05,0xdd,0x77,
0x00,0x01,0x05,0xdd,0xf7,0x50,0x50,0xd0,0x70,0x50,0x50,0xfd,0x0f,0x01,0x06,0x0f,
0x01,0x00
};

#line 33 "SAUCE/include_menus.h"
#line 41 "SAUCE/include_menus.h"
_Pragma ("code-name(\"XCD_BANK_06\" )") _Pragma ("data-name(\"XCD_BANK_06\" )") _Pragma ("rodata-name(\"XCD_BANK_06\" )")
#line 3 "SAUCE/defines/nametable/menunametable_XCD06.c"
const unsigned char leveldone[500]={
0x01,0x02,0x01,0x04,0xae,0x02,0x01,0x13,0xae,0x02,0x01,0x09,0xaf,0x02,0x01,0x13,
0xaf,0x02,0x01,0x06,0x06,0x07,0x04,0x01,0x17,0x06,0x07,0x02,0x01,0x03,0x08,0x09,
0x05,0x01,0x17,0x08,0x09,0x02,0x01,0x03,0x0c,0xff,0x01,0x19,0x0d,0x02,0x01,0x03,
0x0c,0xff,0x01,0x19,0x0d,0x02,0x01,0x03,0x0c,0xff,0x01,0x08,0x20,0x21,0x22,0x23,
0x24,0x21,0x22,0x20,0xff,0x01,0x08,0x0d,0x02,0x01,0x03,0x0c,0xff,0x01,0x08,0x30,
0x31,0x32,0x33,0x34,0x31,0x32,0x30,0xff,0x01,0x08,0x0d,0x02,0x01,0x03,0x0c,0xff,
0x01,0x08,0x40,0x41,0x42,0x43,0x44,0x41,0x42,0x40,0xff,0x01,0x08,0x0d,0x02,0x01,
0x03,0x0c,0xff,0x01,0x03,0x21,0x26,0x27,0x28,0x29,0x2a,0x2b,0x2c,0x2d,0x20,0x21,
0x22,0x2e,0x2f,0x21,0x22,0x57,0xff,0x01,0x04,0x0d,0x02,0x01,0x03,0x0c,0xff,0x01,
0x03,0x35,0x36,0x37,0x38,0x39,0x3a,0x3b,0x3c,0x3d,0x30,0x31,0x32,0x3e,0x3f,0x31,
0x32,0x67,0xff,0x01,0x04,0x0d,0x02,0x01,0x03,0x0c,0xff,0x01,0x03,0x45,0x46,0x47,
0x48,0x49,0x4a,0x4b,0x4c,0xff,0x40,0x41,0x42,0x4e,0x4f,0x41,0x42,0x77,0xff,0x01,
0x04,0x0d,0x02,0x01,0x03,0x0c,0xff,0x01,0x19,0x0d,0x02,0x01,0x03,0x0c,0xff,0x01,
0x05,0xe1,0xf4,0xf4,0xe5,0xed,0xf0,0xf4,0xf3,0x16,0xff,0x01,0x0a,0x0d,0x02,0x01,
0x03,0x0c,0xff,0x01,0x19,0x0d,0x02,0x01,0x03,0x0c,0xff,0x01,0x07,0xea,0xf5,0xed,
0xf0,0xf3,0x16,0xff,0x01,0x0b,0x0d,0x02,0x01,0x03,0x0c,0xff,0x01,0x19,0x0d,0x02,
0x01,0x03,0x0c,0xff,0x01,0x19,0x0d,0x02,0x01,0x03,0x0c,0xff,0x01,0x07,0x92,0x93,
0xff,0xff,0x92,0x93,0xff,0xff,0x92,0x93,0xff,0x01,0x07,0x0d,0x02,0x01,0x03,0x0c,
0xff,0x01,0x07,0xa2,0xa3,0xff,0xff,0xa2,0xa3,0xff,0xff,0xa2,0xa3,0xff,0x01,0x07,
0x0d,0x02,0x01,0x03,0x0c,0xff,0x01,0x19,0x0d,0x02,0x01,0x03,0x0c,0xff,0x01,0x19,
0x0d,0x02,0x01,0x03,0x0c,0xff,0x01,0x19,0x0d,0x02,0x01,0x03,0x0c,0xff,0x01,0x19,
0x0d,0x02,0x01,0x03,0x0c,0xff,0x01,0x19,0x0d,0x02,0x01,0x03,0x0c,0xff,0x01,0x03,
0xa4,0xa5,0xa6,0xa7,0xff,0x01,0x09,0xa4,0xa5,0xa6,0xa7,0xff,0x01,0x03,0x0d,0x02,
0x01,0x03,0x0a,0x0b,0x04,0x01,0x02,0x9c,0x9a,0x9b,0x9d,0x04,0x01,0x02,0x06,0x0e,
0x0e,0x07,0x04,0x01,0x02,0x9c,0x98,0x99,0x9d,0x04,0x01,0x02,0x0a,0x0b,0x02,0x01,
0x05,0x05,0x01,0x02,0xac,0xaa,0xab,0xad,0x05,0x01,0x02,0x08,0x05,0x05,0x09,0x05,
0x01,0x02,0xac,0xa8,0xa9,0xad,0x05,0x01,0x02,0x02,0x01,0x0a,0x84,0x85,0x86,0x87,
0x02,0x01,0x09,0x84,0x85,0x86,0x87,0x02,0x01,0x26,0xff,0x5c,0x5f,0x01,0x03,0x53,
0xff,0x77,0x00,0x00,0x50,0x50,0x00,0x00,0xdd,0x77,0x44,0x55,0x01,0x03,0x00,0xdd,
0x77,0x00,0x01,0x05,0xdd,0x77,0x00,0x40,0x50,0x50,0x10,0x00,0xdd,0x77,0x00,0x01,
0x05,0xdd,0xf7,0x54,0x65,0xd0,0x70,0x95,0x51,0xfd,0xff,0xf7,0xf5,0xff,0xff,0xf5,
0xfd,0xff,0x01,0x00
};
#line 77 "SAUCE/defines/nametable/menunametable_XCD06.c"
const unsigned char practicedone[520]={
0x01,0x02,0x01,0x04,0xae,0x02,0x01,0x13,0xae,0x02,0x01,0x09,0xaf,0x02,0x01,0x13,
0xaf,0x02,0x01,0x06,0x06,0x07,0x04,0x01,0x17,0x06,0x07,0x02,0x01,0x03,0x08,0x09,
0x05,0x01,0x17,0x08,0x09,0x02,0x01,0x03,0x0c,0xff,0x01,0x19,0x0d,0x02,0x01,0x03,
0x0c,0xff,0x01,0x19,0x0d,0x02,0x01,0x03,0x0c,0xff,0x01,0x04,0x2c,0x2d,0x2c,0x2d,
0x52,0x53,0x21,0x26,0x2e,0x2f,0x54,0x21,0x26,0x21,0x22,0xff,0x01,0x05,0x0d,0x02,
0x01,0x03,0x0c,0xff,0x01,0x04,0x3c,0x3d,0x50,0x51,0x62,0x63,0x35,0x36,0x3e,0x3f,
0x64,0x35,0x36,0x31,0x32,0xff,0x01,0x05,0x0d,0x02,0x01,0x03,0x0c,0xff,0x01,0x04,
0x4c,0xff,0x60,0x61,0x60,0x73,0x45,0x46,0x4e,0x4f,0x74,0x45,0x46,0x41,0x42,0xff,
0x01,0x05,0x0d,0x02,0x01,0x03,0x0c,0xff,0x01,0x03,0x21,0x26,0x27,0x28,0x29,0x2a,
0x2b,0x2c,0x2d,0x20,0x21,0x22,0x2e,0x2f,0x21,0x22,0x57,0xff,0x01,0x04,0x0d,0x02,
0x01,0x03,0x0c,0xff,0x01,0x03,0x35,0x36,0x37,0x38,0x39,0x3a,0x3b,0x3c,0x3d,0x30,
0x31,0x32,0x3e,0x3f,0x31,0x32,0x67,0xff,0x01,0x04,0x0d,0x02,0x01,0x03,0x0c,0xff,
0x01,0x03,0x45,0x46,0x47,0x48,0x49,0x4a,0x4b,0x4c,0xff,0x40,0x41,0x42,0x4e,0x4f,
0x41,0x42,0x77,0xff,0x01,0x04,0x0d,0x02,0x01,0x03,0x0c,0xff,0x01,0x19,0x0d,0x02,
0x01,0x03,0x0c,0xff,0x01,0x05,0xe1,0xf4,0xf4,0xe5,0xed,0xf0,0xf4,0xf3,0x16,0xff,
0x01,0x0a,0x0d,0x02,0x01,0x03,0x0c,0xff,0x01,0x19,0x0d,0x02,0x01,0x03,0x0c,0xff,
0x01,0x07,0xea,0xf5,0xed,0xf0,0xf3,0x16,0xff,0x01,0x0b,0x0d,0x02,0x01,0x03,0x0c,
0xff,0x01,0x19,0x0d,0x02,0x01,0x03,0x0c,0xff,0x01,0x19,0x0d,0x02,0x01,0x03,0x0c,
0xff,0x01,0x07,0x92,0x93,0xff,0xff,0x92,0x93,0xff,0xff,0x92,0x93,0xff,0x01,0x07,
0x0d,0x02,0x01,0x03,0x0c,0xff,0x01,0x07,0xa2,0xa3,0xff,0xff,0xa2,0xa3,0xff,0xff,
0xa2,0xa3,0xff,0x01,0x07,0x0d,0x02,0x01,0x03,0x0c,0xff,0x01,0x19,0x0d,0x02,0x01,
0x03,0x0c,0xff,0x01,0x19,0x0d,0x02,0x01,0x03,0x0c,0xff,0x01,0x19,0x0d,0x02,0x01,
0x03,0x0c,0xff,0x01,0x19,0x0d,0x02,0x01,0x03,0x0c,0xff,0x01,0x19,0x0d,0x02,0x01,
0x03,0x0c,0xff,0x01,0x03,0xa4,0xa5,0xa6,0xa7,0xff,0x01,0x09,0xa4,0xa5,0xa6,0xa7,
0xff,0x01,0x03,0x0d,0x02,0x01,0x03,0x0a,0x0b,0x04,0x01,0x02,0x9c,0x9a,0x9b,0x9d,
0x04,0x01,0x02,0x06,0x0e,0x0e,0x07,0x04,0x01,0x02,0x9c,0x98,0x99,0x9d,0x04,0x01,
0x02,0x0a,0x0b,0x02,0x01,0x05,0x05,0x01,0x02,0xac,0xaa,0xab,0xad,0x05,0x01,0x02,
0x08,0x05,0x05,0x09,0x05,0x01,0x02,0xac,0xa8,0xa9,0xad,0x05,0x01,0x02,0x02,0x01,
0x0a,0x84,0x85,0x86,0x87,0x02,0x01,0x09,0x84,0x85,0x86,0x87,0x02,0x01,0x26,0xff,
0x5c,0x5f,0x01,0x03,0x53,0xff,0x77,0x00,0xf0,0x01,0x03,0x00,0xdd,0x77,0xcc,0xff,
0x01,0x03,0x00,0xdd,0x77,0x00,0x01,0x05,0xdd,0x77,0x00,0x40,0x50,0x50,0x10,0x00,
0xdd,0x77,0x00,0x01,0x05,0xdd,0xf7,0x54,0x65,0xd0,0x70,0x95,0x51,0xfd,0xff,0xf7,
0xf5,0xff,0xff,0xf5,0xfd,0xff,0x01,0x00
};

#line 44 "SAUCE/include_menus.h"
#line 1 "SAUCE/menustates/funsettings.c"
void set_fun_settings();
#line 4 "SAUCE/defines/charmap/mainmenu_charmap.h"
_Pragma ("charmap (0x20, 0xFF)")



_Pragma ("charmap (0x24, 0xFE)")
_Pragma ("charmap (0x25, 0xDA)")




_Pragma ("charmap (0x2A, 0x8E)")




_Pragma ("charmap (0x2F, 0xE0)")
_Pragma ("charmap (0x30, 0xD0)")
_Pragma ("charmap (0x31, 0xD1)")
_Pragma ("charmap (0x32, 0xD2)")
_Pragma ("charmap (0x33, 0xD3)")
_Pragma ("charmap (0x34, 0xD4)")
_Pragma ("charmap (0x35, 0xD5)")
_Pragma ("charmap (0x36, 0xD6)")
_Pragma ("charmap (0x37, 0xD7)")
_Pragma ("charmap (0x38, 0xD8)")
_Pragma ("charmap (0x39, 0xD9)")
_Pragma ("charmap (0x3A, 0xFC)")






_Pragma ("charmap (0x41, 0xE1)")
_Pragma ("charmap (0x42, 0xE2)")
_Pragma ("charmap (0x43, 0xE3)")
_Pragma ("charmap (0x44, 0xE4)")
_Pragma ("charmap (0x45, 0xE5)")
_Pragma ("charmap (0x46, 0xE6)")
_Pragma ("charmap (0x47, 0xE7)")
_Pragma ("charmap (0x48, 0xE8)")
_Pragma ("charmap (0x49, 0xE9)")
_Pragma ("charmap (0x4A, 0xEA)")
_Pragma ("charmap (0x4B, 0xEB)")
_Pragma ("charmap (0x4C, 0xEC)")
_Pragma ("charmap (0x4D, 0xED)")
_Pragma ("charmap (0x4E, 0xEE)")
_Pragma ("charmap (0x4F, 0xEF)")
_Pragma ("charmap (0x50, 0xF0)")
_Pragma ("charmap (0x51, 0xF1)")
_Pragma ("charmap (0x52, 0xF2)")
_Pragma ("charmap (0x53, 0xF3)")
_Pragma ("charmap (0x54, 0xF4)")
_Pragma ("charmap (0x55, 0xF5)")
_Pragma ("charmap (0x56, 0xF6)")
_Pragma ("charmap (0x57, 0xF7)")
_Pragma ("charmap (0x58, 0xF8)")
_Pragma ("charmap (0x59, 0xF9)")
_Pragma ("charmap (0x5A, 0xFA)")






_Pragma ("charmap (0x61, 0x5E)")
_Pragma ("charmap (0x62, 0x5F)")
_Pragma ("charmap (0x63, 0x9F)")
_Pragma ("charmap (0x64, 0x8E)")
_Pragma ("charmap (0x65, 0xFE)")
_Pragma ("charmap (0x66, 0x0F)")
_Pragma ("charmap (0x67, 0x8F)")
_Pragma ("charmap (0x68, 0x5F)")
_Pragma ("charmap (0x69, 0x6F)")
_Pragma ("charmap (0x6A, 0xDA)")
_Pragma ("charmap (0x6B, 0xDB)")
_Pragma ("charmap (0x6C, 0xDC)")
_Pragma ("charmap (0x6D, 0xDD)")
_Pragma ("charmap (0x6E, 0xDE)")
_Pragma ("charmap (0x6F, 0xDF)")
_Pragma ("charmap (0x70, 0xE0)")
_Pragma ("charmap (0x71, 0xE1)")
_Pragma ("charmap (0x72, 0xE2)")
_Pragma ("charmap (0x73, 0xE3)")
_Pragma ("charmap (0x74, 0xE4)")
_Pragma ("charmap (0x75, 0xE5)")
_Pragma ("charmap (0x76, 0xE6)")
_Pragma ("charmap (0x77, 0xE7)")
_Pragma ("charmap (0x78, 0xE8)")
_Pragma ("charmap (0x79, 0xE9)")
_Pragma ("charmap (0x7A, 0xEA)")




#line 4 "SAUCE/menustates/funsettings.c"

const unsigned char gameboytext1[];
const unsigned char gameboytext2[];
const unsigned char gameboytext3[];
const unsigned char gameboytext4[];
const unsigned char gameboytext5[];
const unsigned char gameboytext6[];
const unsigned char gameboytext7[];
const unsigned char gameboytext8[];

const unsigned char* const gameboytexts[];

const unsigned char gameboy_text_size[];

const unsigned char funsettingscreen[];

void state_funsettings() {
 mmc3_set_2kb_chr_bank_0(0xFF);
 mmc3_set_2kb_chr_bank_1(96);

 pal_bg(paletteMenu);

 ((*(uint8_t*) (0x2006) = ((((((0x2000>>8)&0xFF)))))), (*(uint8_t*) (0x2006) = ((((((0x2000)&0xFF)))))));
 vram_unrle(funsettingscreen);
 ((__A__ = 'c', __asm__("sta sreg+0")), __AX__ = (0x2000|(((5)<<5)|(4))), _one_vram_buffer(__EAX__));


 settingvalue = 0;

 ppu_on_all();

 (_pal_fade_to((4<<8)|(((0)&0xFF))));

 while (1) {
  ppu_wait_nmi();
  oam_clear();
  (__asm__("lda #<%v \n ldx #>%v \n ldy #<.bank(%v) \n jsr crossPRGBankJump ", check_if_music_stopped, check_if_music_stopped, check_if_music_stopped), __asm__("lda ptr3 \n ldx ptr3+1"), __AX__);
  mouse_and_cursor();

  if (mouse.left_press) {
   if (mouse.x >= 0x2D && mouse.x <= 0xDD) {
    if (mouse.y >= 0x24 && mouse.y <= 0x2C) {
     settingvalue = 0; set_fun_settings();
    }
    else if (mouse.y >= 0x34 && mouse.y <= 0x3C) {
     settingvalue = 1; set_fun_settings();
    }
    else if (mouse.y >= 0x44 && mouse.y <= 0x4C) {
     settingvalue = 2; set_fun_settings();
    }
    else if (mouse.y >= 0x54 && mouse.y <= 0x5C) {
     settingvalue = 3; set_fun_settings();
    }
    else if (mouse.y >= 0x64 && mouse.y <= 0x6C) {
     settingvalue = 4; set_fun_settings();
    }
    else if (mouse.y >= 0x74 && mouse.y <= 0x7C) {
     settingvalue = 5; set_fun_settings();
    }
    else if (mouse.y >= 0x84 && mouse.y <= 0x8C) {
     settingvalue = 6; set_fun_settings();
    }
    else if (mouse.y >= 0x94 && mouse.y <= 0x9C) {
     settingvalue = 7; set_fun_settings();
    }
    else if (mouse.y >= 0xA4 && mouse.y <= 0xAC) {
     settingvalue = 8; set_fun_settings();
    }

   }
   if ((mouse.x >= 0x1D && mouse.x <= 0xDD) && (mouse.y >= 0xBC && mouse.y <= 0xC4)) {
    gameState = last_gameState;
    return;
   }

  }
  if (invisible) ((__A__ = 'g', __asm__("sta sreg+0")), __AX__ = (0x2000|(((5)<<5)|(26))), _one_vram_buffer(__EAX__));
  else ((__A__ = 'f', __asm__("sta sreg+0")), __AX__ = (0x2000|(((5)<<5)|(26))), _one_vram_buffer(__EAX__));

  if ((options & 0x04)) ((__A__ = 'g', __asm__("sta sreg+0")), __AX__ = (0x2000|(((7)<<5)|(26))), _one_vram_buffer(__EAX__));
  else ((__A__ = 'f', __asm__("sta sreg+0")), __AX__ = (0x2000|(((7)<<5)|(26))), _one_vram_buffer(__EAX__));

  if (retro_mode) ((__A__ = 'g', __asm__("sta sreg+0")), __AX__ = (0x2000|(((9)<<5)|(26))), _one_vram_buffer(__EAX__));
  else ((__A__ = 'f', __asm__("sta sreg+0")), __AX__ = (0x2000|(((9)<<5)|(26))), _one_vram_buffer(__EAX__));

  if (discomode) ((__A__ = 'g', __asm__("sta sreg+0")), __AX__ = (0x2000|(((11)<<5)|(26))), _one_vram_buffer(__EAX__));
  else ((__A__ = 'f', __asm__("sta sreg+0")), __AX__ = (0x2000|(((11)<<5)|(26))), _one_vram_buffer(__EAX__));

  if (invisblocks) ((__A__ = 'g', __asm__("sta sreg+0")), __AX__ = (0x2000|(((13)<<5)|(26))), _one_vram_buffer(__EAX__));
  else ((__A__ = 'f', __asm__("sta sreg+0")), __AX__ = (0x2000|(((13)<<5)|(26))), _one_vram_buffer(__EAX__));

  if (cam_seesaw) ((__A__ = 'g', __asm__("sta sreg+0")), __AX__ = (0x2000|(((15)<<5)|(26))), _one_vram_buffer(__EAX__));
  else ((__A__ = 'f', __asm__("sta sreg+0")), __AX__ = (0x2000|(((15)<<5)|(26))), _one_vram_buffer(__EAX__));

  if (cursedmusic & 0x40) ((__A__ = 'g', __asm__("sta sreg+0")), __AX__ = (0x2000|(((19)<<5)|(26))), _one_vram_buffer(__EAX__));
  else ((__A__ = 'f', __asm__("sta sreg+0")), __AX__ = (0x2000|(((19)<<5)|(26))), _one_vram_buffer(__EAX__));

  if (practice_music_sync) ((__A__ = 'g', __asm__("sta sreg+0")), __AX__ = (0x2000|(((21)<<5)|(26))), _one_vram_buffer(__EAX__));
  else ((__A__ = 'f', __asm__("sta sreg+0")), __AX__ = (0x2000|(((21)<<5)|(26))), _one_vram_buffer(__EAX__));





  __A__ = ( __A__ = gameboy_mode<<1, __asm__("tay"), __asm__("lda %v+1, y", gameboytexts), __A__);
  if (__A__) { (((const void ** const)xargs)[0] = gameboytexts[gameboy_mode & 0x7F], (__AX__ = ((((gameboy_text_size[gameboy_mode])&0xFF))<<8)|(((8)&0xFF)), __EAX__<<=16), __AX__ = (0x2000|(((17)<<5)|(19)))|(0x40<<8), _draw_padded_text(__EAX__)); ((__A__ = 'g', __asm__("sta sreg+0")), __AX__ = (0x2000|(((17)<<5)|(26))), _one_vram_buffer(__EAX__)); }
  else { ((__AX__ = ((((8)&0xFF))<<8)|((('$')&0xFF)), __EAX__<<=16), __AX__ = (0x2000|(((17)<<5)|(19)))|(0x40<<8), _one_vram_buffer_repeat(__EAX__)); ((__A__ = 'f', __asm__("sta sreg+0")), __AX__ = (0x2000|(((17)<<5)|(26))), _one_vram_buffer(__EAX__)); }



  tmp1 = settingvalue;

  if (joypad1.press & (0x01 | 0x04)) {
   if (settingvalue == 8) { settingvalue = 0; }
   else { settingvalue++; }
  }

  if (joypad1.press & (0x02 | 0x08)) {
   if (settingvalue == 0) { settingvalue = 8; }
   else { settingvalue--; }
  }

  if (tmp1 != settingvalue) {


   ((__A__ = ' ', __asm__("sta sreg+0")), __AX__ = (0x2000|(((5)<<5)|(4)))+((tmp1<<8)>>2), _one_vram_buffer(__EAX__));
   ((__A__ = 'c', __asm__("sta sreg+0")), __AX__ = (0x2000|(((5)<<5)|(4)))+((settingvalue<<8)>>2), _one_vram_buffer(__EAX__));
  }

  ((__A__ = 'X'-0x1B, __asm__("sta sreg+0")), __AX__ = (0x2000|(((11)<<5)|(26))), _one_vram_buffer(__EAX__));
  if (discomode & 0x02) { ((__A__ = '2' - 0x20, __asm__("sta sreg+0")), __AX__ = (0x2000|(((11)<<5)|(25))), _one_vram_buffer(__EAX__)); }
  else if (discomode & 0x04) { ((__A__ = '3' - 0x20, __asm__("sta sreg+0")), __AX__ = (0x2000|(((11)<<5)|(25))), _one_vram_buffer(__EAX__));}
  else if (discomode & 0x08) { ((__A__ = '4' - 0x20, __asm__("sta sreg+0")), __AX__ = (0x2000|(((11)<<5)|(25))), _one_vram_buffer(__EAX__));}
  else if (discomode & 0x10) { ((__A__ = '5' - 0x20, __asm__("sta sreg+0")), __AX__ = (0x2000|(((11)<<5)|(25))), _one_vram_buffer(__EAX__));}
  else if (discomode & 0x01) { ((__A__ = '1' - 0x20, __asm__("sta sreg+0")), __AX__ = (0x2000|(((11)<<5)|(25))), _one_vram_buffer(__EAX__));}
  else { ((__A__ = ' '-0x01, __asm__("sta sreg+0")), __AX__ = (0x2000|(((11)<<5)|(25))), _one_vram_buffer(__EAX__)); ((__A__ = 0x0F, __asm__("sta sreg+0")), __AX__ = (0x2000|(((11)<<5)|(26))), _one_vram_buffer(__EAX__)); }

  if (joypad1.press & (0x10 | 0x80)) {
   set_fun_settings();
  }

  if (joypad1.press_b) {
   gameState = last_gameState;
   return;
  }

  color_emphasis(gameboy_check_table[gameboy_mode]);


  kandoframecnt++;
  if (kandoframecnt & 1 && mouse_timer) mouse_timer--;

 }
}

void set_fun_settings() {
 switch (settingvalue) {
  case 0x00: invisible ^= 1; break;
  case 0x01: options ^= 0x04; break;
  case 0x02: retro_mode ^= 1; break;
  case 0x03:
   if (discomode & 0x10) discomode = 0;
   else {
    discomode = discomode << 1;
    if (discomode == 0) ++discomode;
   }

   break;
  case 0x04: invisblocks ^= 1; break;
  case 0x05: cam_seesaw = (cam_seesaw > 0 ? 0 : 1); break;
  case 0x06: gameboy_mode = (gameboy_mode == 8 ? 0 : gameboy_mode + 1); break;
  case 0x07: cursedmusic ^= 0x40; break;
  case 0x08: practice_music_sync ^= 0x01; break;
 };
}

const unsigned char gameboytext1[]="$$GREY";
const unsigned char gameboytext2[]="$$$RED";
const unsigned char gameboytext3[]="$GREEN";
const unsigned char gameboytext4[]="$$BLUE";
const unsigned char gameboytext5[]="YELLOW";
const unsigned char gameboytext6[]="PURPLE";
const unsigned char gameboytext7[]="$$CYAN";
const unsigned char gameboytext8[]="$$DARK";

const unsigned char* const gameboytexts[] = {
 0, gameboytext1, gameboytext2, gameboytext3, gameboytext4, gameboytext5, gameboytext6, gameboytext7, gameboytext8
};

const unsigned char gameboy_text_size[] = {
 0,
 sizeof(gameboytext1) - 1,
 sizeof(gameboytext2) - 1,
 sizeof(gameboytext3) - 1,
 sizeof(gameboytext4) - 1,
 sizeof(gameboytext5) - 1,
 sizeof(gameboytext6) - 1,
 sizeof(gameboytext7) - 1,
 sizeof(gameboytext8) - 1
};

const unsigned char funsettingscreen[527]={
0x01,0x02,0x01,0x04,0xae,0x02,0x01,0x13,0xae,0x02,0x01,0x09,0xaf,0x02,0x01,0x13,
0xaf,0x02,0x01,0x06,0x06,0x07,0x04,0x01,0x17,0x06,0x07,0x02,0x01,0x03,0x08,0x09,
0x05,0x01,0x17,0x08,0x09,0x02,0x01,0x03,0x0c,0xff,0x01,0x06,0xe6,0xf5,0xee,0xff,
0xf3,0xe5,0xf4,0xf4,0xe9,0xee,0xe7,0xf3,0xff,0x01,0x06,0x0d,0x02,0x01,0x03,0x0c,
0xff,0x01,0x02,0x7c,0xc3,0xc8,0xdb,0xc3,0xcd,0xc3,0xbc,0xc6,0xbf,0x02,0xc7,0xc9,
0xbe,0xbf,0x02,0x01,0x04,0x0f,0x7d,0xff,0x0d,0x02,0x01,0x03,0x0c,0xff,0x01,0x19,
0x0d,0x02,0x01,0x03,0x0c,0xff,0x01,0x02,0x7c,0xca,0xc6,0xbb,0xce,0xc0,0xc9,0xcc,
0xc7,0xbf,0xcc,0x02,0xc7,0xc9,0xbe,0xbf,0x02,0x01,0x03,0x0f,0x7d,0xff,0x0d,0x02,
0x01,0x03,0x0c,0xff,0x01,0x19,0x0d,0x02,0x01,0x03,0x0c,0xff,0x01,0x02,0x7c,0xcc,
0xbf,0xce,0xcc,0xc9,0x02,0xc7,0xc9,0xbe,0xbf,0x02,0x01,0x08,0x0f,0x7d,0xff,0x0d,
0x02,0x01,0x03,0x0c,0xff,0x01,0x19,0x0d,0x02,0x01,0x03,0x0c,0xff,0x01,0x02,0x7c,
0xbe,0xc3,0xcd,0xbd,0xc9,0x02,0xc7,0xc9,0xbe,0xbf,0x02,0x01,0x08,0x0f,0x7d,0xff,
0x0d,0x02,0x01,0x03,0x0c,0xff,0x01,0x19,0x0d,0x02,0x01,0x03,0x0c,0xff,0x01,0x02,
0x7c,0xbc,0xc6,0xc3,0xc8,0xbe,0x02,0xc7,0xc9,0xbe,0xbf,0x02,0x01,0x08,0x0f,0x7d,
0xff,0x0d,0x02,0x01,0x03,0x0c,0xff,0x01,0x19,0x0d,0x02,0x01,0x03,0x0c,0xff,0x01,
0x02,0x7c,0xbd,0xbb,0xc7,0xfe,0xcd,0xbf,0xbf,0xcd,0xbb,0xdc,0x02,0x01,0x08,0x0f,
0x7d,0xff,0x0d,0x02,0x01,0x03,0x0c,0xff,0x01,0x19,0x0d,0x02,0x01,0x03,0x0c,0xff,
0x01,0x02,0x7c,0xc1,0xbb,0xc7,0xbf,0xbc,0xc9,0xde,0x02,0xc7,0xc9,0xbe,0xbf,0x02,
0x01,0x06,0x0f,0x7d,0xff,0x0d,0x02,0x01,0x03,0x0c,0xff,0x01,0x19,0x0d,0x02,0x01,
0x03,0x0c,0xff,0x01,0x02,0x7c,0xbd,0xcf,0xcc,0xcd,0xbf,0xbe,0x02,0xc7,0xcf,0xcd,
0xc3,0xbd,0x02,0x01,0x06,0x0f,0x7d,0xff,0x0d,0x02,0x01,0x03,0x0c,0xff,0x01,0x19,
0x0d,0x02,0x01,0x03,0x0c,0xff,0x01,0x02,0x7c,0xca,0xcc,0xbb,0xbd,0xce,0xc3,0xbd,
0xbf,0x02,0xc7,0xcf,0xcd,0xc3,0xbd,0x02,0xcd,0xde,0xc8,0xbd,0x0f,0x7d,0xff,0x0d,
0x02,0x01,0x03,0x0c,0xff,0x01,0x19,0x0d,0x02,0x01,0x03,0x0c,0xff,0x01,0x03,0xf0,
0xf2,0xe5,0xf3,0xf3,0xff,0xe1,0xff,0xf4,0xef,0xff,0xf4,0xef,0xe7,0xe7,0xec,0xe5,
0xff,0x01,0x04,0x0d,0x02,0x01,0x03,0x0c,0xff,0xf0,0xf2,0xe5,0xf3,0xf3,0xff,0xe2,
0xff,0xf4,0xef,0xff,0xf3,0xe1,0xf6,0xe5,0xff,0xe0,0xff,0xf2,0xe5,0xf4,0xf5,0xf2,
0xee,0xff,0x0d,0x02,0x01,0x03,0x0c,0xff,0x01,0x19,0x0d,0x02,0x01,0x03,0x0a,0x0b,
0x04,0x01,0x09,0x06,0x0e,0x0e,0x07,0x04,0x01,0x09,0x0a,0x0b,0x02,0x01,0x05,0x05,
0x01,0x09,0x08,0x05,0x05,0x09,0x05,0x01,0x09,0x02,0x01,0x43,0xff,0x5c,0x5f,0x01,
0x03,0x53,0xff,0x77,0x00,0x01,0x04,0x44,0xdd,0x77,0x00,0x01,0x04,0x04,0xdd,0x77,
0x00,0x01,0x04,0x44,0xdd,0x77,0x00,0x01,0x04,0x40,0xdd,0x77,0x00,0x01,0x04,0x04,
0xdd,0xf7,0x50,0x50,0xd0,0x70,0x50,0x50,0xfd,0x0f,0x01,0x06,0x0f,0x01,0x00
};
#line 54 "SAUCE/include_menus.h"
#line 3 "SAUCE/menustates/refreshmenu.c"
const uint8_t difficulty_pal_A[];
const uint8_t difficulty_pal_B[];
#line 4 "SAUCE/defines/charmap/color1_charmap.h"
_Pragma ("charmap (0x20, 0xFE)")




_Pragma ("charmap (0x25, 0xBA)")
#line 19 "SAUCE/defines/charmap/color1_charmap.h"
_Pragma ("charmap (0x2F, 0xFB)")
_Pragma ("charmap (0x30, 0xB0)")
_Pragma ("charmap (0x31, 0xB1)")
_Pragma ("charmap (0x32, 0xB2)")
_Pragma ("charmap (0x33, 0xB3)")
_Pragma ("charmap (0x34, 0xB4)")
_Pragma ("charmap (0x35, 0xB5)")
_Pragma ("charmap (0x36, 0xB6)")
_Pragma ("charmap (0x37, 0xB7)")
_Pragma ("charmap (0x38, 0xB8)")
_Pragma ("charmap (0x39, 0xB9)")
_Pragma ("charmap (0x3A, 0xFC)")






_Pragma ("charmap (0x41, 0xBB)")
_Pragma ("charmap (0x42, 0xBC)")
_Pragma ("charmap (0x43, 0xBD)")
_Pragma ("charmap (0x44, 0xBE)")
_Pragma ("charmap (0x45, 0xBF)")
_Pragma ("charmap (0x46, 0xC0)")
_Pragma ("charmap (0x47, 0xC1)")
_Pragma ("charmap (0x48, 0xC2)")
_Pragma ("charmap (0x49, 0xC3)")
_Pragma ("charmap (0x4A, 0xC4)")
_Pragma ("charmap (0x4B, 0xC5)")
_Pragma ("charmap (0x4C, 0xC6)")
_Pragma ("charmap (0x4D, 0xC7)")
_Pragma ("charmap (0x4E, 0xC8)")
_Pragma ("charmap (0x4F, 0xC9)")
_Pragma ("charmap (0x50, 0xCA)")
_Pragma ("charmap (0x51, 0xCB)")
_Pragma ("charmap (0x52, 0xCC)")
_Pragma ("charmap (0x53, 0xCD)")
_Pragma ("charmap (0x54, 0xCE)")
_Pragma ("charmap (0x55, 0xCF)")
_Pragma ("charmap (0x56, 0xDB)")
_Pragma ("charmap (0x57, 0xDC)")
_Pragma ("charmap (0x58, 0xDD)")
_Pragma ("charmap (0x59, 0xDE)")
_Pragma ("charmap (0x5A, 0xDF)")



_Pragma ("charmap (0x5E, 0x8F)")
_Pragma ("charmap (0x5F, 0x0F)")

_Pragma ("charmap (0x61, 0x90)")
_Pragma ("charmap (0x62, 0x91)")
_Pragma ("charmap (0x63, 0xA0)")
_Pragma ("charmap (0x64, 0xA1)")

_Pragma ("charmap (0x65, 0x92)")
_Pragma ("charmap (0x66, 0x93)")
_Pragma ("charmap (0x67, 0xA2)")
_Pragma ("charmap (0x68, 0xA3)")

_Pragma ("charmap (0x69, 0x94)")
_Pragma ("charmap (0x6A, 0x95)")
_Pragma ("charmap (0x6B, 0xA4)")
_Pragma ("charmap (0x6C, 0xA5)")

_Pragma ("charmap (0x6D, 0x96)")
_Pragma ("charmap (0x6E, 0x97)")
_Pragma ("charmap (0x6F, 0xA6)")
_Pragma ("charmap (0x70, 0xA7)")

_Pragma ("charmap (0x71, 0x98)")
_Pragma ("charmap (0x72, 0x99)")
_Pragma ("charmap (0x73, 0xA8)")
_Pragma ("charmap (0x74, 0xA9)")

_Pragma ("charmap (0x75, 0x9A)")
_Pragma ("charmap (0x76, 0x9B)")
_Pragma ("charmap (0x77, 0xAA)")
_Pragma ("charmap (0x78, 0xAB)")

_Pragma ("charmap (0x79, 0x4E)")
_Pragma ("charmap (0x7A, 0x4F)")




#line 7 "SAUCE/menustates/refreshmenu.c"
#line 4 "LEVELS/include/lvlset_A/menutext.h"
const char levelText00[ 7] = "STEREO ";
const char levelText01[ 7] = "BACK ON";
const char levelText02[10] = "BASE AFTER";
const char levelText03[ 9] = "THEORY OF";
const char levelText04[10] = "ELECTROMAN";
const char levelText05[ 7] = "HEXAGON";
const char levelText06[ 5] = "BLAST";
const char levelText07[11] = "GEOMETRICAL";
const char levelText08[ 3] = "THE";
const char levelText09[ 7] = "DORABAE";
const char levelText0A[ 9] = "GROUND TO";
const char levelText0B[ 9] = "FUNNYGAME";
const char levelText0C[ 7] = "LOST IN";
const char levelText0D[ 9] = "BLOODBATH";
const char levelText0E[ 7] = "RAINBOW";
const char levelText0F[13] = "EXTRAORDINARY";
const char levelText10[13] = "THE LIGHTNING";
const char levelText11[ 7] = "MADNESS";
const char levelText12[ 5] = "TRACK";
const char levelText13[10] = "POLARGEIST";
const char levelText14[ 7] = "DRY OUT";
const char levelText15[ 4] = "BASE";
const char levelText16[11] = "CANT LET GO";
const char levelText17[ 6] = "JUMPER";
const char levelText18[12] = "TIME MACHINE";
const char levelText19[ 6] = "CYCLES";
const char levelText1A[ 5] = "XSTEP";
const char levelText1B[11] = "CLUTTERFUNK";
const char levelText1C[10] = "EVERYTHING";
const char levelText1D[10] = "ADVENTURES";
const char levelText1E[ 8] = "CLUBSTEP";
const char levelText1F[15] = " ELECTRODYNAMIX";
const char levelText20[ 5] = "FORCE";
const char levelText21[10] = "PROCESSING";
const char levelText22[12] = "EVERYTHING 2";
const char levelText23[ 9] = "DOMINATOR";
const char levelText24[10] = "DEADLOCKED";
const char levelText25[10] = "FINGERDASH";
const char levelText26[ 4] = "DASH";
const char levelText27[ 9] = "THE TOWER";
const char levelText28[10] = "THE SEWERS";
const char levelText29[ 9] = "CHALLENGE";
const char levelText2A[ 6] = "RETRAY";
const char levelText2B[10] = "LEVEL EASY";
const char levelText2C[ 6] = "BASIC4";
const char levelText2D[ 6] = "BASIC6";
const char levelText2E[ 7] = "DREAMER";
const char levelText2F[ 5] = "SPACE";
const char levelText30[ 7] = "SUBZERO";
const char levelText31[10] = "KAPPACLYSM";
const char levelText32[ 8] = "SUNSHINE";
const char levelText33[10] = "REVOLUTION";
const char levelText34[ 7] = "HOLIDAY";
const char levelText35[ 9] = "THE WOODS";
const char levelText36[ 6] = "BUT NO";
const char levelText37[ 7] = "TYLENOL";
const char levelText38[ 5] = "GREIF";
const char levelText39[10] = "EXCITEMENT";
const char levelText3A[ 4] = "ROAD";
const char levelText3B[13] = "THE NIGHTMARE";
const char levelText3C[11] = "FIRE TEMPLE";


const char* const levelTextsUpper[] = {
 levelText00,
 levelText01,
 ((void *) 0),
 ((void *) 0),
 levelText02,
 ((void *) 0),
 ((void *) 0),
 ((void *) 0),
 ((void *) 0),
 ((void *) 0),
 ((void *) 0),
 levelText03,
 levelText04,
 ((void *) 0),
 ((void *) 0),
 levelText05,
 levelText06,
 levelText03,
 levelText07,
 ((void *) 0),
 ((void *) 0),
 ((void *) 0),
 ((void *) 0),
 ((void *) 0),
 levelText08,
 ((void *) 0),
 ((void *) 0),
 levelText09,
 levelText09,
 ((void *) 0),
 levelText0A,
 ((void *) 0),
 ((void *) 0),
 ((void *) 0),
 ((void *) 0),
 levelText0B,
 levelText0C,
 levelText0D,
 levelText0E,
 ((void *) 0),
 levelText0F,
 levelText10,
 ((void *) 0),
 ((void *) 0),
};

const uint8_t levelTextsUpperSize[] = {
 sizeof(levelText00),
 sizeof(levelText01),
 0,
 0,
 sizeof(levelText02),
 0,
 0,
 0,
 0,
 0,
 0,
 sizeof(levelText03),
 sizeof(levelText04),
 0,
 0,
 sizeof(levelText05),
 sizeof(levelText06),
 sizeof(levelText03),
 sizeof(levelText07),
 0,
 0,
 0,
 0,
 0,
 sizeof(levelText08),
 0,
 0,
 sizeof(levelText09),
 sizeof(levelText09),
 0,
 sizeof(levelText0A),
 0,
 0,
 0,
 0,
 sizeof(levelText0B),
 sizeof(levelText0C),
 sizeof(levelText0D),
 sizeof(levelText0E),
 0,
 sizeof(levelText0F),
 sizeof(levelText10),
 0,
 0,
};


const char* const levelTextsLower[] = {
 levelText11,
 levelText12,
 levelText13,
 levelText14,
 levelText15,
 levelText16,
 levelText17,
 levelText18,
 levelText19,
 levelText1A,
 levelText1B,
 levelText1C,
 levelText1D,
 levelText1E,
 levelText1F,
 levelText20,
 levelText21,
 levelText22,
 levelText23,
 levelText24,
 levelText25,
 levelText26,
 levelText27,
 levelText28,
 levelText29,
 levelText2A,
 levelText2B,
 levelText2C,
 levelText2D,
 levelText2E,
 levelText2F,
 levelText30,
 levelText31,
 levelText32,
 levelText33,
 levelText34,
 levelText35,
 levelText36,
 levelText37,
 levelText38,
 levelText39,
 levelText3A,
 levelText3B,
 levelText3C,
};

const uint8_t levelTextsLowerSize[] = {
 sizeof(levelText11),
 sizeof(levelText12),
 sizeof(levelText13),
 sizeof(levelText14),
 sizeof(levelText15),
 sizeof(levelText16),
 sizeof(levelText17),
 sizeof(levelText18),
 sizeof(levelText19),
 sizeof(levelText1A),
 sizeof(levelText1B),
 sizeof(levelText1C),
 sizeof(levelText1D),
 sizeof(levelText1E),
 sizeof(levelText1F),
 sizeof(levelText20),
 sizeof(levelText21),
 sizeof(levelText22),
 sizeof(levelText23),
 sizeof(levelText24),
 sizeof(levelText25),
 sizeof(levelText26),
 sizeof(levelText27),
 sizeof(levelText28),
 sizeof(levelText29),
 sizeof(levelText2A),
 sizeof(levelText2B),
 sizeof(levelText2C),
 sizeof(levelText2D),
 sizeof(levelText2E),
 sizeof(levelText2F),
 sizeof(levelText30),
 sizeof(levelText31),
 sizeof(levelText32),
 sizeof(levelText33),
 sizeof(levelText34),
 sizeof(levelText35),
 sizeof(levelText36),
 sizeof(levelText37),
 sizeof(levelText38),
 sizeof(levelText39),
 sizeof(levelText3A),
 sizeof(levelText3B),
 sizeof(levelText3C),
};
#line 8 "SAUCE/menustates/refreshmenu.c"

const char coin_counter[][3];




void refreshmenu() {
 tmp5 = ((level&1)<<2)<<8;
 set_scroll_x(((level-tmp4)&1)<<8);

 __A__ = ( __A__ = level<<1, __asm__("tay"), __asm__("lda %v+1, y", levelTextsUpper), __A__);
 if (__A__) (((const void ** const)xargs)[0] = levelTextsUpper[level & 0x7F], (__AX__ = ((((levelTextsUpperSize[level])&0xFF))<<8)|(((17)&0xFF)), __EAX__<<=16), __AX__ = (0x2000|(((10)<<5)|(8)))|(tmp5 & 0xFF00)|(0x40<<8), _draw_padded_text(__EAX__));
 else ((__AX__ = ((((17)&0xFF))<<8)|(((' ')&0xFF)), __EAX__<<=16), __AX__ = (0x2000|(((10)<<5)|(8)))|(tmp5 & 0xFF00)|(0x40<<8), _one_vram_buffer_repeat(__EAX__));

 (((const void ** const)xargs)[0] = levelTextsLower[level & 0x7F], (__AX__ = ((((levelTextsLowerSize[level])&0xFF))<<8)|(((17)&0xFF)), __EAX__<<=16), __AX__ = (0x2000|(((11)<<5)|(8)))|(tmp5 & 0xFF00)|(0x40<<8), _draw_padded_text(__EAX__));

 if (LEVELCOMPLETE[level]) { ((__A__ = 'y', __asm__("sta sreg+0")), __AX__ = (0x2000|(((9)<<5)|(7)))|(tmp5 & 0xFF00), _one_vram_buffer(__EAX__));
 ((__A__ = 'z', __asm__("sta sreg+0")), __AX__ = (0x2000|(((9)<<5)|(8)))|(tmp5 & 0xFF00), _one_vram_buffer(__EAX__)); }
 else ((__AX__ = ((((2)&0xFF))<<8)|(((' ')&0xFF)), __EAX__<<=16), __AX__ = (0x2000|(((9)<<5)|(7)))|(tmp5 & 0xFF00)|(0x40<<8), _one_vram_buffer_repeat(__EAX__));

 {
  tmp1 = difficulty_list[level];
  ( PAL_BUF_RAW[0x0a&0x1F] = (difficulty_pal_A[tmp1]), __A__ = (difficulty_pal_A[tmp1]), __asm__("tay"), __asm__("lda (%v), y", PAL_PTR), PAL_BUF[0x0a&0x1F] = __A__);
  ( PAL_BUF_RAW[0x0b&0x1F] = (difficulty_pal_B[tmp1]), __A__ = (difficulty_pal_B[tmp1]), __asm__("tay"), __asm__("lda (%v), y", PAL_PTR), PAL_BUF[0x0b&0x1F] = __A__);
  ++PAL_UPDATE;;

  tmp1 = (tmp1 << 1) + 'a';
  ((__A__ = tmp1, __asm__("sta sreg+0")), __AX__ = (0x2000|(((10)<<5)|(7)))|(tmp5 & 0xFF00), _one_vram_buffer(__EAX__));
  ((__A__ = ++tmp1, __asm__("sta sreg+0")), __AX__ = (0x2000|(((10)<<5)|(8)))|(tmp5 & 0xFF00), _one_vram_buffer(__EAX__));
  ((__A__ = (tmp1 += ('c'-'b')), __asm__("sta sreg+0")), __AX__ = (0x2000|(((11)<<5)|(7)))|(tmp5 & 0xFF00), _one_vram_buffer(__EAX__));
  ((__A__ = ++tmp1, __asm__("sta sreg+0")), __AX__ = (0x2000|(((11)<<5)|(8)))|(tmp5 & 0xFF00), _one_vram_buffer(__EAX__));


 }

  ((__AX__ = stars_list[level], __EAX__<<=16), xargs[0] = 2, xargs[1] = '0', xargs[2] = ' ', __AX__ = (0x2000|(((9)<<5)|(22)))|(tmp5 & 0xFF00)|(0x40<<8), _printDecimal(__EAX__));
#line 52 "SAUCE/menustates/refreshmenu.c"
  tmp3 = level % 9;
  ( PAL_BUF_RAW[0&0x1F] = (colors_list[tmp3]), __A__ = (colors_list[tmp3]), __asm__("tay"), __asm__("lda (%v), y", PAL_PTR), PAL_BUF[0&0x1F] = __A__);
  ( PAL_BUF_RAW[0xE&0x1F] = (colors_list[tmp3]), __A__ = (colors_list[tmp3]), __asm__("tay"), __asm__("lda (%v), y", PAL_PTR), PAL_BUF[0xE&0x1F] = __A__);

  pal_spr(paletteLVLSelectSP);
  ( PAL_BUF_RAW[0x10&0x1F] = (colors_list[tmp3]), __A__ = (colors_list[tmp3]), __asm__("tay"), __asm__("lda (%v), y", PAL_PTR), PAL_BUF[0x10&0x1F] = __A__);
  ( PAL_BUF_RAW[0x1E&0x1F] = (colors_list[tmp3]), __A__ = (colors_list[tmp3]), __asm__("tay"), __asm__("lda (%v), y", PAL_PTR), PAL_BUF[0x1E&0x1F] = __A__);
  ++PAL_UPDATE;;

  coins = 0;



  tmp7 = (((((((coin3_obtained[level] << 1)&0xFF)) | coin2_obtained[level]) << 1)&0xFF)) | coin1_obtained[level];
  tmp7 = (((tmp7<<1)&0xFF)) + tmp7;

  ((__AX__ = (uintptr_t)(const char * const)coin_counter+tmp7, __EAX__<<=16), xargs[0] = 3, __AX__ = (0x2000|(((12)<<5)|(22)))|(tmp5 & 0xFF00)|(0x40<<8), _multi_vram_buffer(__EAX__));

}



 const uint8_t difficulty_pal_A[] ={
  0x21,
  0x2A,
  0x28,
  0x16,
  0x24,
  0x16,
  0x28,
 };

 const uint8_t difficulty_pal_B[] ={
  0x06,
  0x30,
  0x30,
  0x30,
  0x06,
  0x30,
  0x0F,
 };
#line 118 "SAUCE/menustates/refreshmenu.c"
const char coin_counter[][3] = {
  "___",
  "^__",
  "_^_",
  "^^_",
  "__^",
  "^_^",
  "_^^",
  "^^^",
};
#line 56 "SAUCE/include_menus.h"
#line 7 "SAUCE/menustates/progressbar_pt2.c"
void draw_progress_bar() {


 drawBarFlag--;

 if (tmp7 >= 100 / 20) {
  if (!(level & 1)) {
   ((__A__ = 0x8c, __asm__("sta sreg+0")), __AX__ = (0x2000|(((tmp2)<<5)|(tmp1))), _one_vram_buffer(__EAX__));
  } else {
   ((__A__ = 0x8c, __asm__("sta sreg+0")), __AX__ = (0x2400|(((tmp2)<<5)|(tmp1))), _one_vram_buffer(__EAX__));
  }
  *((uint8_t*)&tmp6+1) = (tmp7 >= 100 ? 100 - 100 / 20 : tmp7);


  *((uint8_t*)&tmpA+1) = 0;
  do {
   *((uint8_t*)&tmp6+1) -= 100 / 20;
   *((uint8_t*)&tmpA+1) += 1;
  } while (*((uint8_t*)&tmp6+1) >= 100 / 20);

  if (!(level & 1)) {
   ((__AX__ = ((((*((uint8_t*)&tmpA+1))&0xFF))<<8)|(((0x6b)&0xFF)), __EAX__<<=16), __AX__ = (0x2000|(((tmp2)<<5)|(tmp1 + 1)))|(0x40<<8), _one_vram_buffer_repeat(__EAX__));
   ((__AX__ = ((((20 - *((uint8_t*)&tmpA+1))&0xFF))<<8)|(((0x02)&0xFF)), __EAX__<<=16), __AX__ = (0x2000|(((tmp2)<<5)|(tmp1 + *((uint8_t*)&tmpA+1))))|(0x40<<8), _one_vram_buffer_repeat(__EAX__));
  } else {
   ((__AX__ = ((((*((uint8_t*)&tmpA+1))&0xFF))<<8)|(((0x6b)&0xFF)), __EAX__<<=16), __AX__ = (0x2400|(((tmp2)<<5)|(tmp1 + 1)))|(0x40<<8), _one_vram_buffer_repeat(__EAX__));
   ((__AX__ = ((((20 - *((uint8_t*)&tmpA+1))&0xFF))<<8)|(((0x02)&0xFF)), __EAX__<<=16), __AX__ = (0x2400|(((tmp2)<<5)|(tmp1 + *((uint8_t*)&tmpA+1))))|(0x40<<8), _one_vram_buffer_repeat(__EAX__));
  }
 } else {
  if (!(level & 1)) {
   ((__A__ = 0x7c, __asm__("sta sreg+0")), __AX__ = (0x2000|(((tmp2)<<5)|(tmp1))), _one_vram_buffer(__EAX__));
   ((__AX__ = ((((20 - 2)&0xFF))<<8)|(((0x02)&0xFF)), __EAX__<<=16), __AX__ = (0x2000|(((tmp2)<<5)|(tmp1 + 1)))|(0x40<<8), _one_vram_buffer_repeat(__EAX__));
  } else {
   ((__A__ = 0x7c, __asm__("sta sreg+0")), __AX__ = (0x2400|(((tmp2)<<5)|(tmp1))), _one_vram_buffer(__EAX__));
   ((__AX__ = ((((20 - 2)&0xFF))<<8)|(((0x02)&0xFF)), __EAX__<<=16), __AX__ = (0x2400|(((tmp2)<<5)|(tmp1 + 1)))|(0x40<<8), _one_vram_buffer_repeat(__EAX__));
  }
 }

 if (tmp7 >= 100) {
  if (!(level & 1)) {
   ((__A__ = 0x8d, __asm__("sta sreg+0")), __AX__ = (0x2000|(((tmp2)<<5)|(tmp1 + (20 - 1)))), _one_vram_buffer(__EAX__));
  } else {
   ((__A__ = 0x8d, __asm__("sta sreg+0")), __AX__ = (0x2400|(((tmp2)<<5)|(tmp1 + (20 - 1)))), _one_vram_buffer(__EAX__));
  }
 } else {
  if (!(level & 1)) {
   ((__A__ = 0x7d, __asm__("sta sreg+0")), __AX__ = (0x2000|(((tmp2)<<5)|(tmp1 + (20 - 1)))), _one_vram_buffer(__EAX__));
  } else {
   ((__A__ = 0x7d, __asm__("sta sreg+0")), __AX__ = (0x2400|(((tmp2)<<5)|(tmp1 + (20 - 1)))), _one_vram_buffer(__EAX__));
  }
 }

}





void calculate_sprite_pos() {
 *((uint8_t*)&tmp5+1) = tmp1;
 *((uint8_t*)&tmp5) = 0;
 tmp3 = 1;

 if (tmp7 != 0) {
  do {
   tmp3++;
   tmp5 += ((8 * 20 * 10) / (100) * 256) / 10;
  } while (tmp3 < tmp7);
 }

 tmp1 = *((uint8_t*)&tmp5+1);
}
#line 60 "SAUCE/include_menus.h"




_Pragma ("code-name(\"XCD_BANK_02\" )") _Pragma ("data-name(\"XCD_BANK_02\" )") _Pragma ("rodata-name(\"XCD_BANK_02\" )")
#line 1 "SAUCE/defines/palette/palettes_XCD02.c"
const uint8_t paletteSettings[16] = {
 0x17,0x0f,0x10,0x30,
 0x11,0x0f,0x2a,0x3A,
 0x17,0x0F,0x16,0x26,
 0x17,0x0f,0x11,0x21
};


const unsigned char palette_Credits[16]={
 0x0C,0x0f,0x10,0x30,0x0C,0x0f,0x2a,0x3A,0x0C,0x28,0x17,0x0f,0x0C,0x0f,0x0C,0x21
};
#line 22 "SAUCE/defines/palette/palettes_XCD02.c"

#line 67 "SAUCE/include_menus.h"
#line 2 "SAUCE/defines/nametable/menunametable_XCD02.c"
const unsigned char settingscreen[529]={
0x01,0x02,0x02,0x06,0x07,0x04,0x01,0x17,0x06,0x07,0x02,0x01,0x03,0x08,0x09,0x05,
0x01,0x17,0x08,0x09,0x02,0x01,0x03,0x0c,0xff,0x01,0x08,0xf3,0xe5,0xf4,0xf4,0xe9,
0xee,0xe7,0xf3,0xff,0x01,0x08,0x0d,0x02,0x01,0x03,0x0c,0xff,0x01,0x02,0x7c,0xb2,
0x02,0xca,0xc6,0xbb,0xde,0xbf,0xcc,0x02,0x01,0x0a,0x0f,0x7d,0xff,0x0d,0x02,0x01,
0x03,0x0c,0xff,0x01,0x19,0x0d,0x02,0x01,0x03,0x0c,0xff,0x01,0x02,0x7c,0xca,0xb1,
0x02,0xbd,0xc9,0xc8,0xce,0xcc,0xc9,0xc6,0xcd,0x02,0xca,0xb2,0x02,0x01,0x04,0x0f,
0x7d,0xff,0x0d,0x02,0x01,0x03,0x0c,0xff,0x01,0x19,0x0d,0x02,0x01,0x03,0x0c,0xff,
0x01,0x02,0x7c,0xcd,0xc9,0xcf,0xc8,0xbe,0x02,0xbf,0xc0,0xc0,0xbf,0xbd,0xce,0xcd,
0x02,0x01,0x05,0x0f,0x7d,0xff,0x0d,0x02,0x01,0x03,0x0c,0xff,0x01,0x19,0x0d,0x02,
0x01,0x03,0x0c,0xff,0x01,0x02,0x7c,0xc7,0xcf,0xcd,0xc3,0xbd,0x02,0x01,0x0d,0x0f,
0x7d,0xff,0x0d,0x02,0x01,0x03,0x0c,0xff,0x01,0x19,0x0d,0x02,0x01,0x03,0x0c,0xff,
0x01,0x02,0x7c,0xbd,0xc6,0xc3,0xbd,0xc5,0x02,0xcd,0xc9,0xcf,0xc8,0xbe,0x02,0x01,
0x07,0x0f,0x7d,0xff,0x0d,0x02,0x01,0x03,0x0c,0xff,0x01,0x19,0x0d,0x02,0x01,0x03,
0x0c,0xff,0x01,0x02,0x7c,0xdb,0xc3,0xcd,0xcf,0xbb,0xc6,0x02,0xbf,0xc0,0xc0,0xbf,
0xbd,0xce,0xcd,0x02,0x01,0x04,0x0f,0x7d,0xff,0x0d,0x02,0x01,0x03,0x0c,0xff,0x01,
0x19,0x0d,0x02,0x01,0x03,0x0c,0xff,0x01,0x02,0x7c,0xbf,0xdd,0xce,0xcc,0xbb,0x02,
0xce,0xcc,0xbb,0xc3,0xc6,0xcd,0x02,0x01,0x06,0x0f,0x7d,0xff,0x0d,0x02,0x01,0x03,
0x0c,0xff,0x01,0x19,0x0d,0x02,0x01,0x03,0x0c,0xff,0x01,0x02,0x7c,0xbb,0xcf,0xce,
0xc9,0x02,0xbd,0xc2,0xbf,0xbd,0xc5,0xca,0xc9,0xc3,0xc8,0xce,0xcd,0x02,0x01,0x02,
0x0f,0x7d,0xff,0x0d,0x02,0x01,0x03,0x0c,0xff,0x01,0x19,0x0d,0x02,0x01,0x03,0x0c,
0xff,0x01,0x02,0x7c,0xcf,0xc8,0xcd,0xce,0xbb,0xbc,0xc6,0xbf,0x02,0xc0,0xcf,0xc6,
0xc6,0x02,0xcd,0xca,0xbf,0xbf,0xbe,0x0f,0x7d,0xff,0x0d,0x02,0x01,0x03,0x0c,0xff,
0x01,0x19,0x0d,0x02,0x01,0x03,0x0c,0xff,0x01,0x02,0x7c,0xdc,0xc3,0xca,0xbf,0x02,
0xcd,0xbb,0xdb,0xbf,0x02,0x01,0x0a,0x7d,0xff,0x0d,0x02,0x01,0x03,0x0c,0xff,0x01,
0x0d,0xe1,0xff,0x18,0xff,0xf3,0xf4,0xe1,0xf2,0xf4,0xff,0x01,0x02,0x0d,0x02,0x01,
0x03,0x0c,0xff,0x01,0x19,0x0d,0x02,0x01,0x03,0x0c,0xff,0xf0,0xf2,0xe5,0xf3,0xf3,
0xff,0xe2,0xff,0xf4,0xef,0xff,0xf3,0xe1,0xf6,0xe5,0xff,0xe0,0xff,0xf2,0xe5,0xf4,
0xf5,0xf2,0xee,0xff,0x0d,0x02,0x01,0x03,0x0c,0xff,0x01,0x19,0x0d,0x02,0x01,0x03,
0x0a,0x0b,0x04,0x01,0x09,0x06,0x0e,0x0e,0x07,0x04,0x01,0x09,0x0a,0x0b,0x02,0x01,
0x05,0x05,0x01,0x09,0x08,0x05,0x05,0x09,0x05,0x01,0x09,0x02,0x01,0x43,0x7f,0x05,
0x01,0x04,0x45,0xdf,0x77,0x00,0x01,0x04,0x44,0xdd,0x77,0x00,0x01,0x04,0x44,0xdd,
0x77,0x00,0x01,0x04,0x44,0xdd,0x77,0x00,0x01,0x04,0x40,0xdd,0x77,0x08,0x0a,0x0a,
0x00,0x00,0x40,0xdd,0xf7,0x50,0x50,0xd0,0x70,0x50,0x50,0xfd,0x0f,0x01,0x07,0x01,
0x00
};


const unsigned char Credits[368]={
0x01,0xfe,0x01,0x3f,0xff,0x01,0x27,0x20,0x21,0x22,0x23,0x24,0x25,0x26,0x27,0x28,
0x29,0x22,0x23,0x22,0x2b,0x2c,0x2c,0xff,0x01,0x0f,0x30,0x31,0x32,0x33,0x34,0x35,
0x36,0x37,0x38,0x39,0x32,0x33,0x3a,0x3b,0x3c,0x3d,0xff,0x01,0x0f,0x40,0xff,0x42,
0x43,0x44,0x45,0x46,0x47,0x48,0x49,0x42,0x43,0x4a,0x4b,0x4c,0x4c,0xff,0x01,0x2d,
0xe1,0xee,0xff,0xf5,0xee,0xef,0xe6,0xe6,0xe9,0xe3,0xe9,0xe1,0xec,0xff,0xe4,0xe5,
0xed,0xe1,0xeb,0xe5,0xff,0x01,0x0b,0xef,0xe6,0xff,0xe7,0xe5,0xef,0xed,0xe5,0xf4,
0xf2,0xf9,0xff,0xe4,0xe1,0xf3,0xe8,0xff,0xe6,0xef,0xf2,0xff,0x01,0x0b,0xf4,0xe8,
0xe5,0xff,0xee,0xe5,0xf3,0xff,0xe2,0xf9,0xff,0xf4,0xe6,0xe4,0xf3,0xef,0xe6,0xf4,
0xff,0x01,0x2e,0xf4,0xef,0xf0,0xff,0xe3,0xef,0xee,0xf4,0xf2,0xe9,0xe2,0xf5,0xf4,
0xef,0xf2,0xf3,0xff,0x01,0x2f,0x18,0xeb,0xe1,0xee,0xe4,0xef,0xf7,0xef,0xee,0xf4,
0xf5,0xff,0x01,0x14,0x18,0xf5,0xf3,0xe5,0xf2,0xf3,0xee,0xe9,0xf0,0xe5,0xf2,0xff,
0x01,0x14,0x18,0xe1,0xec,0xe5,0xf8,0xed,0xf5,0xf3,0xe8,0xff,0x01,0x16,0x18,0xe6,
0xe9,0xe3,0xf5,0xf3,0xff,0xe8,0xef,0xf5,0xf3,0xe5,0xf0,0xec,0xe1,0xee,0xf4,0xff,
0x01,0x04,0x6f,0x6f,0xff,0x01,0x07,0x18,0xe1,0xec,0xe5,0xe6,0xf5,0xee,0xeb,0xf9,
0xff,0x01,0x0c,0x7f,0x7f,0xff,0x01,0x07,0x18,0xf3,0xe5,0xe1,0xe7,0xec,0xef,0xf7,
0xe9,0xee,0xe7,0xf0,0xf2,0xef,0xff,0x01,0x11,0x18,0xe5,0xec,0xe1,0xee,0xe7,0xe5,
0xec,0xd3,0xd7,0xd8,0xff,0x01,0x14,0x18,0xeb,0xe1,0xf7,0xe1,0xe9,0xe9,0xe4,0xe1,
0xf7,0xee,0xff,0x01,0x14,0x18,0xf6,0xe9,0xeb,0xf2,0xe9,0xee,0xef,0xf8,0xff,0x01,
0x16,0x18,0xe3,0xec,0xef,0xf5,0xe4,0xd5,0xd4,0xff,0x01,0x58,0xe7,0xe5,0xef,0xed,
0xe5,0xf4,0xf2,0xf9,0xff,0xe4,0xe1,0xf3,0xe8,0xff,0xe9,0xf3,0xff,0x01,0x0e,0x1f,
0xd2,0xd0,0xd1,0xd3,0xff,0xf2,0xef,0xe2,0xf4,0xef,0xf0,0xff,0xe7,0xe1,0xed,0xe5,
0xf3,0xff,0x01,0x26,0xfe,0x01,0x3f,0x00,0x00,0x50,0x01,0x03,0x00,0x01,0x03,0xa5,
0x01,0x02,0x05,0x00,0x01,0x24,0xa0,0x01,0x02,0x20,0x00,0x01,0x07,0x00,0x01,0x00
};

const unsigned char Credits2[566]={
0x01,0xfe,0x01,0x3f,0xff,0x01,0x20,0xef,0xf2,0xe9,0xe7,0xe9,0xee,0xe1,0xec,0xff,
0x01,0x08,0xe3,0xef,0xee,0xf4,0xf2,0xe9,0xe2,0xf5,0xf4,0xe9,0xee,0xe7,0xff,0x01,
0x02,0xed,0xf5,0xf3,0xe9,0xe3,0xff,0xe3,0xf2,0xe5,0xe4,0xe9,0xf4,0xf3,0xff,0x01,
0x03,0xf0,0xf2,0xef,0xe7,0xf2,0xe1,0xed,0xed,0xe5,0xf2,0xf3,0xff,0x01,0x23,0xe6,
0xef,0xf2,0xe5,0xf6,0xe5,0xf2,0xe2,0xef,0xf5,0xee,0xe4,0xff,0x01,0x04,0xeb,0xe1,
0xee,0xe4,0xef,0xf7,0xef,0xee,0xf4,0xf5,0xff,0x01,0x04,0xe4,0xea,0xf6,0xe9,0xff,
0x01,0x0c,0xf5,0xf3,0xe5,0xf2,0xf3,0xee,0xe9,0xf0,0xe5,0xf2,0xff,0x01,0x04,0xf7,
0xe1,0xf4,0xe5,0xf2,0xe6,0xec,0xe1,0xed,0xe5,0xff,0x01,0x06,0xe1,0xec,0xe5,0xf8,
0xed,0xf5,0xf3,0xe8,0xff,0x01,0x06,0xe4,0xea,0x18,0xee,0xe1,0xf4,0xe5,0xff,0x01,
0x09,0xe1,0xec,0xe5,0xe6,0xf5,0xee,0xeb,0xf9,0xff,0x01,0x06,0xe6,0xd7,0x01,0x02,
0xff,0x01,0x0c,0xea,0xf2,0xef,0xf7,0xe5,0xe2,0xef,0xf9,0xff,0x01,0x06,0xef,0xe3,
0xf5,0xec,0xe1,0xf2,0xee,0xe5,0xe2,0xf5,0xec,0xe1,0xff,0x01,0x04,0xe1,0xe1,0xf2,
0xf4,0xd1,0xd2,0xd5,0xd6,0xff,0x01,0x06,0xf3,0xe8,0xeb,0x18,0xed,0xe4,0xeb,0x18,
0xee,0xeb,0xff,0x01,0x15,0xe1,0xee,0xe4,0xff,0xed,0xef,0xf2,0xe5,0xff,0x18,0xff,
0xf3,0xe5,0xe5,0xff,0xed,0xf5,0xf3,0xe9,0xe3,0xff,0x01,0x16,0xf4,0xe5,0xf3,0xf4,
0xff,0xf3,0xe3,0xf2,0xe5,0xe5,0xee,0xff,0x01,0x09,0xec,0xe5,0xf6,0xe5,0xec,0xf3,
0xff,0x01,0x39,0xf3,0xe5,0xe1,0xe7,0xec,0xef,0xf7,0xe9,0xee,0xe7,0xf0,0xf2,0xef,
0xff,0x01,0x03,0xf5,0xf3,0xe5,0xf2,0xf3,0xee,0xe9,0xf0,0xe5,0xf2,0xff,0x01,0x04,
0xeb,0xe1,0xf7,0xe1,0xe9,0xe9,0xe4,0xe1,0xf7,0xee,0xff,0x01,0x06,0xeb,0xe1,0xee,
0xe4,0xef,0xf7,0xef,0xee,0xf4,0xf5,0xff,0x01,0x04,0xe5,0xec,0xe1,0xee,0xe7,0xe5,
0xec,0xd3,0xd7,0xd8,0xff,0x01,0x06,0xe3,0xec,0xef,0xf5,0xe4,0xd5,0xd4,0xff,0x01,
0x07,0xe6,0xe9,0xe3,0xf5,0xf3,0xff,0x01,0x0b,0xe1,0xfa,0xf5,0xec,0xe1,0xed,0xe1,
0xfa,0xe9,0xe7,0xe8,0xff,0x01,0x03,0xe3,0xec,0xe9,0xe3,0xeb,0xe5,0xf2,0xf4,0xf9,
0xff,0x01,0x07,0xf0,0xe1,0xf2,0xf1,0xf5,0xe5,0xeb,0xe1,0xe9,0xfa,0xe1,0xff,0x01,
0x03,0xe1,0xec,0xe5,0xe6,0xf5,0xee,0xeb,0xf9,0xff,0x01,0x08,0xe3,0xf2,0xe1,0xe6,
0xf4,0xf9,0xff,0xea,0xf5,0xed,0xf0,0xe5,0xf2,0xff,0xff,0xf3,0xe3,0xf2,0xe1,0xf4,
0xe3,0xe8,0xff,0x01,0x09,0xec,0xe5,0xed,0xef,0xee,0xe1,0xe9,0xe4,0xff,0x01,0x06,
0xe2,0xe1,0xee,0xe1,0xee,0xe1,0xd6,0xd0,0x01,0x02,0xff,0x01,0x06,0xee,0xe5,0xf2,
0xe4,0xe2,0xef,0xf9,0xd6,0xd2,0xd8,0xff,0x01,0x04,0xe2,0xe9,0xe7,0xe6,0xec,0xef,
0xf0,0xf0,0xe1,0xd3,0xd8,0xd5,0xff,0x01,0x04,0xe1,0xf2,0xe1,0xee,0xe4,0xef,0xed,
0xe4,0xf5,0xe4,0xe5,0xff,0x01,0x03,0xf0,0xe1,0xf2,0xf1,0xf5,0xe5,0xeb,0xe1,0xe9,
0xfa,0xe1,0xff,0x01,0x02,0x5e,0x5f,0xff,0xed,0xf5,0xf4,0xe9,0xf8,0xef,0xec,0xe1,
0xf8,0xff,0x01,0x05,0xe1,0xe1,0xf2,0xef,0xee,0xff,0xe3,0xe8,0xe5,0xee,0xff,0x01,
0x03,0x5e,0x5f,0xff,0x01,0x0e,0xfe,0x01,0x3f,0xa0,0x01,0x07,0x0a,0x01,0x02,0x02,
0x08,0x0a,0x0a,0x02,0x00,0x01,0x03,0x02,0x00,0x01,0x02,0xa0,0xa0,0x00,0xaa,0x01,
0x02,0x00,0x01,0x21,0x01,0x00
};




const unsigned char Credits3[435]={
0x01,0xfe,0x01,0x3f,0xff,0xe3,0xef,0xee,0xf4,0xf2,0xe9,0xe2,0xf5,0xf4,0xe9,0xee,
0xe7,0xff,0x01,0x04,0xe9,0xe3,0xef,0xee,0xf3,0xff,0xe1,0xee,0xe4,0xff,0x01,0x05,
0xed,0xf5,0xf3,0xe9,0xe3,0xe9,0xe1,0xee,0xf3,0xff,0x01,0x07,0xe7,0xf2,0xe1,0xf0,
0xe8,0xe9,0xe3,0xf3,0xff,0x01,0x26,0xe5,0xec,0xe1,0xee,0xe7,0xe5,0xec,0xd3,0xd7,
0xd8,0xff,0x01,0x06,0xfa,0xe5,0xe5,0x03,0xf3,0xe3,0xef,0xf4,0xf4,0xff,0x01,0x05,
0xf6,0xe9,0xeb,0xf2,0xe9,0xee,0xef,0xf8,0xff,0x01,0x08,0xe1,0xe4,0xf2,0xec,0xf5,
0xe3,0xd0,0xd9,0xd6,0xff,0x01,0x05,0xe3,0xec,0xef,0xf5,0xe4,0xd5,0xd4,0xff,0x01,
0x09,0xe6,0xe9,0xe3,0xf5,0xf3,0xff,0x01,0x09,0xf3,0xe5,0xe1,0xe7,0xec,0xef,0xf7,
0xe9,0xee,0xe7,0xf0,0xf2,0xef,0xff,0x01,0x03,0xe4,0xe4,0xb6,0xc2,0xe4,0xe4,0xff,
0x01,0x08,0xe3,0xf2,0xe1,0xe6,0xf4,0xf9,0xff,0xea,0xf5,0xed,0xf0,0xe5,0xf2,0xff,
0x01,0x03,0xe2,0xe1,0xee,0xe1,0xee,0xe1,0xd6,0xd0,0x01,0x02,0xff,0x01,0x04,0xf5,
0xf3,0xe5,0xf2,0xf3,0xee,0xe9,0xf0,0xe5,0xf2,0xff,0x01,0x06,0xe1,0xec,0xe5,0xe6,
0xf5,0xee,0xeb,0xf9,0xff,0x01,0x06,0xe1,0xec,0xe5,0xf8,0xed,0xf5,0xf3,0xe8,0xff,
0x01,0x08,0xec,0xe5,0xed,0xef,0xee,0xe1,0xe9,0xe4,0xff,0x01,0x06,0xfa,0xe5,0xee,
0xe9,0xf4,0xe8,0xd3,0xd0,0xd2,0xff,0x01,0x07,0xe2,0xec,0xe1,0xe3,0xe5,0xe3,0xe1,
0xf0,0xf4,0xe1,0xe9,0xee,0xee,0xff,0xff,0xe1,0xf1,0xf5,0xe1,0xed,0xe1,0xf2,0xe9,
0xee,0xe5,0xff,0x01,0x06,0xf2,0xe5,0xe4,0xe7,0xe4,0xff,0x01,0x09,0xee,0xe5,0xf2,
0xe4,0xe2,0xef,0xf9,0xd6,0xd2,0xd8,0xff,0x01,0x06,0xf0,0xf3,0x03,0xec,0xef,0xec,
0xff,0x01,0x08,0xf3,0xf5,0xf3,0xf3,0xf9,0xf3,0xf9,0xff,0x01,0x09,0xee,0xef,0xf4,
0xe1,0xf0,0xef,0xf4,0xe1,0xf4,0xef,0xd6,0xd4,0xff,0x01,0x02,0xe3,0xec,0xe9,0xe3,
0xeb,0xe5,0xf2,0xf4,0xf9,0xff,0x01,0x07,0xe2,0xe9,0xe7,0xe6,0xec,0xef,0xf0,0xf0,
0xe1,0xd3,0xd8,0xd5,0xff,0x01,0x02,0xfa,0xf5,0xeb,0xe9,0xee,0xee,0xf9,0xeb,0xff,
0x01,0x08,0xec,0xe5,0xf8,0xe9,0xff,0xe2,0xe1,0xf4,0xe3,0xe8,0xff,0x01,0x04,0xf2,
0xe1,0xee,0xe5,0xe4,0xef,0xed,0xff,0x01,0x18,0xe4,0xf7,0xe5,0xe4,0xe9,0xf4,0xff,
0x01,0x19,0xea,0xe1,0xe5,0xfa,0xf5,0xff,0x01,0x1a,0xeb,0xe1,0xe2,0xe5,0xfa,0xff,
0x01,0x1a,0xe1,0xe2,0xf3,0xf4,0xf2,0xe1,0xe3,0xf4,0xff,0xd6,0xd4,0xff,0x01,0xb3,
0xfe,0x01,0x3f,0xa0,0x01,0x02,0x20,0x80,0xa0,0xa0,0x00,0x01,0x0c,0x02,0x00,0x01,
0x2a,0x01,0x00
};

#line 68 "SAUCE/include_menus.h"
#line 1 "SAUCE/menustates/instructions.c"
void mouse_and_cursor();

const unsigned char palette_Credits[];

const unsigned char instructions[];

void state_instructions(){
 oam_clear();

 (xargs[0] = 98, _mmc3_set_8kb_chr());
 mmc3_set_2kb_chr_bank_0(0xFF);
 mmc3_set_2kb_chr_bank_1(96);

 pal_bg(palette_Credits);

 ((*(uint8_t*) (0x2006) = ((((((0x2000>>8)&0xFF)))))), (*(uint8_t*) (0x2006) = ((((((0x2000)&0xFF)))))));
 vram_unrle(instructions);

 ppu_on_all();

 (_pal_fade_to((4<<8)|(((0)&0xFF))));

 do {
  oam_clear();
  mouse_and_cursor();

  ppu_wait_nmi();

  newrand();
  kandoframecnt++;
 } while (!joypad1.press

   && !(mouse.status_computed & 0x10)

  );
 gameState = 0x01;
 return;
}

const unsigned char instructions[452]={
0x04,0xfe,0x04,0x3f,0xff,0x04,0x07,0x20,0x21,0x22,0x23,0x24,0x25,0x26,0x27,0x28,
0x29,0x22,0x23,0x22,0x2b,0x2c,0x2c,0xff,0x04,0x0f,0x30,0x31,0x32,0x33,0x34,0x35,
0x36,0x37,0x38,0x39,0x32,0x33,0x3a,0x3b,0x3c,0x3d,0xff,0x04,0x0f,0x40,0xff,0x42,
0x43,0x44,0x45,0x46,0x47,0x48,0x49,0x42,0x43,0x4a,0x4b,0x4c,0x4c,0xff,0x04,0x28,
0xe1,0xff,0xef,0xf2,0xff,0xed,0xef,0xf5,0xf3,0xe5,0xff,0xec,0xe5,0xe6,0xf4,0xff,
0xf4,0xef,0xff,0xea,0xf5,0xed,0xf0,0xe0,0xe6,0xec,0xf9,0xff,0x04,0x24,0xf3,0xf4,
0xe1,0xf2,0xf4,0xff,0xef,0xf2,0xff,0xed,0xef,0xf5,0xf3,0xe5,0xff,0xf2,0xe9,0xe7,
0xe8,0xf4,0xff,0xf4,0xef,0xff,0xf0,0xe1,0xf5,0xf3,0xe5,0xff,0x04,0x2a,0xf0,0xf2,
0xe1,0xe3,0xf4,0xe9,0xe3,0xe5,0xff,0xed,0xef,0xe4,0xe5,0xff,0x04,0x2a,0xf0,0xe1,
0xf5,0xf3,0xe5,0xff,0xe0,0xff,0xf0,0xf2,0xe5,0xf3,0xf3,0xff,0xe2,0xff,0xef,0xf2,
0xff,0xed,0xef,0xf5,0xf3,0xe5,0xff,0xec,0xe5,0xe6,0xf4,0xff,0x04,0x22,0xee,0xe5,
0xf7,0xff,0xe3,0xe8,0xe5,0xe3,0xeb,0xf0,0xef,0xe9,0xee,0xf4,0xf3,0xff,0xe3,0xe1,
0xee,0xff,0xe2,0xe5,0xff,0xf0,0xec,0xe1,0xe3,0xe5,0xe4,0xff,0x04,0x02,0xf7,0xe9,
0xf4,0xe8,0xef,0xf5,0xf4,0xff,0xf0,0xe1,0xf5,0xf3,0xe9,0xee,0xe7,0xff,0xf7,0xe9,
0xf4,0xe8,0xff,0xe2,0xff,0x04,0x2e,0xe4,0xe5,0xec,0xe5,0xf4,0xe5,0xff,0xe3,0xe8,
0xe5,0xe3,0xeb,0xf0,0xef,0xe9,0xee,0xf4,0xf3,0xff,0x04,0x28,0xf0,0xf2,0xe5,0xf3,
0xf3,0xff,0xf3,0xe5,0xec,0xe5,0xe3,0xf4,0xff,0xef,0xf2,0xff,0xe8,0xef,0xec,0xe4,
0xff,0xed,0xef,0xf5,0xf3,0xe5,0xff,0xec,0xe5,0xe6,0xf4,0xff,0xe1,0xee,0xe4,0xff,
0xf0,0xf2,0xe5,0xf3,0xf3,0xff,0xed,0xef,0xf5,0xf3,0xe5,0xff,0xf2,0xe9,0xe7,0xe8,
0xf4,0xff,0x04,0x2a,0xe3,0xe8,0xe5,0xe3,0xeb,0xf0,0xef,0xe9,0xee,0xf4,0xf3,0xff,
0xf3,0xf4,0xef,0xf2,0xe5,0xff,0xec,0xe1,0xf3,0xf4,0xff,0xd8,0xff,0xf0,0xef,0xe9,
0xee,0xf4,0xf3,0xff,0x04,0x29,0xe5,0xf8,0xe9,0xf4,0xff,0xec,0xe5,0xf6,0xe5,0xec,
0xff,0x04,0x2c,0xf0,0xe1,0xf5,0xf3,0xe5,0xe0,0xf3,0xe5,0xec,0xe5,0xe3,0xf4,0xff,
0xe0,0xe8,0xef,0xec,0xe4,0xff,0xed,0xef,0xf5,0xf3,0xe5,0xff,0xf2,0xe9,0xe7,0xe8,
0xf4,0xff,0x04,0x20,0xfe,0x04,0x3f,0x00,0x00,0x50,0x04,0x03,0x00,0x00,0x10,0x40,
0x55,0x55,0x05,0xf5,0xf1,0x00,0x85,0xa1,0xa4,0xa5,0xa5,0x61,0x5f,0x03,0x0f,0x03,
0x0f,0x07,0x50,0x55,0x05,0x01,0xf4,0x7a,0x5a,0x1a,0xfa,0x7a,0x50,0x50,0x00,0x0f,
0x07,0x05,0x05,0x09,0x02,0x00,0xf0,0x78,0x5a,0xda,0xfa,0x50,0x04,0x02,0x00,0x04,
0x06,0x00,0x04,0x00
};


#line 69 "SAUCE/include_menus.h"
#line 1 "SAUCE/menustates/settings.c"
void mouse_and_cursor();
void set_settings();
#line 4 "SAUCE/defines/charmap/mainmenu_charmap.h"
_Pragma ("charmap (0x20, 0xFF)")



_Pragma ("charmap (0x24, 0xFE)")
_Pragma ("charmap (0x25, 0xDA)")




_Pragma ("charmap (0x2A, 0x8E)")




_Pragma ("charmap (0x2F, 0xE0)")
_Pragma ("charmap (0x30, 0xD0)")
_Pragma ("charmap (0x31, 0xD1)")
_Pragma ("charmap (0x32, 0xD2)")
_Pragma ("charmap (0x33, 0xD3)")
_Pragma ("charmap (0x34, 0xD4)")
_Pragma ("charmap (0x35, 0xD5)")
_Pragma ("charmap (0x36, 0xD6)")
_Pragma ("charmap (0x37, 0xD7)")
_Pragma ("charmap (0x38, 0xD8)")
_Pragma ("charmap (0x39, 0xD9)")
_Pragma ("charmap (0x3A, 0xFC)")






_Pragma ("charmap (0x41, 0xE1)")
_Pragma ("charmap (0x42, 0xE2)")
_Pragma ("charmap (0x43, 0xE3)")
_Pragma ("charmap (0x44, 0xE4)")
_Pragma ("charmap (0x45, 0xE5)")
_Pragma ("charmap (0x46, 0xE6)")
_Pragma ("charmap (0x47, 0xE7)")
_Pragma ("charmap (0x48, 0xE8)")
_Pragma ("charmap (0x49, 0xE9)")
_Pragma ("charmap (0x4A, 0xEA)")
_Pragma ("charmap (0x4B, 0xEB)")
_Pragma ("charmap (0x4C, 0xEC)")
_Pragma ("charmap (0x4D, 0xED)")
_Pragma ("charmap (0x4E, 0xEE)")
_Pragma ("charmap (0x4F, 0xEF)")
_Pragma ("charmap (0x50, 0xF0)")
_Pragma ("charmap (0x51, 0xF1)")
_Pragma ("charmap (0x52, 0xF2)")
_Pragma ("charmap (0x53, 0xF3)")
_Pragma ("charmap (0x54, 0xF4)")
_Pragma ("charmap (0x55, 0xF5)")
_Pragma ("charmap (0x56, 0xF6)")
_Pragma ("charmap (0x57, 0xF7)")
_Pragma ("charmap (0x58, 0xF8)")
_Pragma ("charmap (0x59, 0xF9)")
_Pragma ("charmap (0x5A, 0xFA)")






_Pragma ("charmap (0x61, 0x5E)")
_Pragma ("charmap (0x62, 0x5F)")
_Pragma ("charmap (0x63, 0x9F)")
_Pragma ("charmap (0x64, 0x8E)")
_Pragma ("charmap (0x65, 0xFE)")
_Pragma ("charmap (0x66, 0x0F)")
_Pragma ("charmap (0x67, 0x8F)")
_Pragma ("charmap (0x68, 0x5F)")
_Pragma ("charmap (0x69, 0x6F)")
_Pragma ("charmap (0x6A, 0xDA)")
_Pragma ("charmap (0x6B, 0xDB)")
_Pragma ("charmap (0x6C, 0xDC)")
_Pragma ("charmap (0x6D, 0xDD)")
_Pragma ("charmap (0x6E, 0xDE)")
_Pragma ("charmap (0x6F, 0xDF)")
_Pragma ("charmap (0x70, 0xE0)")
_Pragma ("charmap (0x71, 0xE1)")
_Pragma ("charmap (0x72, 0xE2)")
_Pragma ("charmap (0x73, 0xE3)")
_Pragma ("charmap (0x74, 0xE4)")
_Pragma ("charmap (0x75, 0xE5)")
_Pragma ("charmap (0x76, 0xE6)")
_Pragma ("charmap (0x77, 0xE7)")
_Pragma ("charmap (0x78, 0xE8)")
_Pragma ("charmap (0x79, 0xE9)")
_Pragma ("charmap (0x7A, 0xEA)")




#line 5 "SAUCE/menustates/settings.c"
#line 20 "SAUCE/menustates/settings.c"
void state_settings() {
 mmc3_set_2kb_chr_bank_0(0xFF);
 mmc3_set_2kb_chr_bank_1(96);

 pal_bg(paletteSettings);

 ((*(uint8_t*) (0x2006) = ((((((0x2000>>8)&0xFF)))))), (*(uint8_t*) (0x2006) = ((((((0x2000)&0xFF)))))));
 vram_unrle(settingscreen);

 ((__A__ = 'c', __asm__("sta sreg+0")), __AX__ = (0x2000|(((3)<<5)|(4))), _one_vram_buffer(__EAX__));

 if (framerate == 1) {
  ((__AX__ = ((((27-6+1)&0xFF))<<8)|(((0xFF)&0xFF)), __EAX__<<=16), __AX__ = (0x2000|(((3+16)<<5)|(6)))|(0x40<<8), _one_vram_buffer_repeat(__EAX__));
 }

 settingvalue = 0;

 ppu_on_all();
 (_pal_fade_to((4<<8)|(((0)&0xFF))));

 while (1) {
  ppu_wait_nmi();
  oam_clear();
  mouse_and_cursor();


  if (twoplayer) ((__A__ = 'g', __asm__("sta sreg+0")), __AX__ = (0x2000|(((3+(0*2))<<5)|(26))), _one_vram_buffer(__EAX__));
  else ((__A__ = 'f', __asm__("sta sreg+0")), __AX__ = (0x2000|(((3+(0*2))<<5)|(26))), _one_vram_buffer(__EAX__));

  if (options & 0x01) ((__A__ = 'g', __asm__("sta sreg+0")), __AX__ = (0x2000|(((3+(1*2))<<5)|(26))), _one_vram_buffer(__EAX__));
  else ((__A__ = 'f', __asm__("sta sreg+0")), __AX__ = (0x2000|(((3+(1*2))<<5)|(26))), _one_vram_buffer(__EAX__));

  if (options & 0x40) ((__A__ = 'f', __asm__("sta sreg+0")), __AX__ = (0x2000|(((3+(2*2))<<5)|(26))), _one_vram_buffer(__EAX__));
  else ((__A__ = 'g', __asm__("sta sreg+0")), __AX__ = (0x2000|(((3+(2*2))<<5)|(26))), _one_vram_buffer(__EAX__));

  if (options & 0x80) ((__A__ = 'f', __asm__("sta sreg+0")), __AX__ = (0x2000|(((3+(3*2))<<5)|(26))), _one_vram_buffer(__EAX__));
  else ((__A__ = 'g', __asm__("sta sreg+0")), __AX__ = (0x2000|(((3+(3*2))<<5)|(26))), _one_vram_buffer(__EAX__));

  if (options & 0x02) ((__A__ = 'g', __asm__("sta sreg+0")), __AX__ = (0x2000|(((3+(4*2))<<5)|(26))), _one_vram_buffer(__EAX__));
  else ((__A__ = 'f', __asm__("sta sreg+0")), __AX__ = (0x2000|(((3+(4*2))<<5)|(26))), _one_vram_buffer(__EAX__));

  if (viseffects) ((__A__ = 'g', __asm__("sta sreg+0")), __AX__ = (0x2000|(((3+(5*2))<<5)|(26))), _one_vram_buffer(__EAX__));
  else ((__A__ = 'f', __asm__("sta sreg+0")), __AX__ = (0x2000|(((3+(5*2))<<5)|(26))), _one_vram_buffer(__EAX__));

  if (trails == 1) ((__A__ = 'g', __asm__("sta sreg+0")), __AX__ = (0x2000|(((3+(6*2))<<5)|(26))), _one_vram_buffer(__EAX__));
  else if (trails == 2) ((__A__ = '*', __asm__("sta sreg+0")), __AX__ = (0x2000|(((3+(6*2))<<5)|(26))), _one_vram_buffer(__EAX__));
  else ((__A__ = 'f', __asm__("sta sreg+0")), __AX__ = (0x2000|(((3+(6*2))<<5)|(26))), _one_vram_buffer(__EAX__));

  if (auto_practicepoints) ((__A__ = 'g', __asm__("sta sreg+0")), __AX__ = (0x2000|(((3+(7*2))<<5)|(26))), _one_vram_buffer(__EAX__));
  else ((__A__ = 'f', __asm__("sta sreg+0")), __AX__ = (0x2000|(((3+(7*2))<<5)|(26))), _one_vram_buffer(__EAX__));

  if (framerate != 1) {
   if (options & 0x10) ((__A__ = 'g', __asm__("sta sreg+0")), __AX__ = (0x2000|(((3+(8*2))<<5)|(26))), _one_vram_buffer(__EAX__));
   else ((__A__ = 'f', __asm__("sta sreg+0")), __AX__ = (0x2000|(((3+(8*2))<<5)|(26))), _one_vram_buffer(__EAX__));
  }

  tmp1 = settingvalue;

  if (mouse.left_press) {
   if (mouse.x >= 0x2D && mouse.x <= 0xDD) {
    if (mouse.y >= 0x14 && mouse.y <= 0x1C) {
     settingvalue = 0; set_settings();
    } else if (mouse.y >= 0x24 && mouse.y <= 0x2C) {
     settingvalue = 1; set_settings();
    } else if (mouse.y >= 0x34 && mouse.y <= 0x3C) {
     settingvalue = 2; set_settings();
    } else if (mouse.y >= 0x44 && mouse.y <= 0x4C) {
     settingvalue = 3; set_settings();
    } else if (mouse.y >= 0x54 && mouse.y <= 0x5C) {
     settingvalue = 4; set_settings();
    } else if (mouse.y >= 0x64 && mouse.y <= 0x6C) {
     settingvalue = 5; set_settings();
    } else if (mouse.y >= 0x74 && mouse.y <= 0x7C) {
     settingvalue = 6; set_settings();
    } else if (mouse.y >= 0x84 && mouse.y <= 0x8C) {
     settingvalue = 7; set_settings();
    } else if (mouse.y >= 0x94 && mouse.y <= 0x9C) {
     settingvalue = 8; set_settings();
    }
   }
   if ((mouse.x >= 0x1D && mouse.x <= 0xDD) && (mouse.y >= 0xBC && mouse.y <= 0xC4)) {
    break;
   }

  }

  if (joypad1.press & (0x01 | 0x04)) {
   if (settingvalue == 9)
    settingvalue = 0;
   else if (framerate == 1 && settingvalue == 8-1)
    settingvalue = 8+1;
   else
    settingvalue++;
  }

  if (joypad1.press & (0x02 | 0x08)) {
   if (settingvalue == 0)
    settingvalue = 9;
   else if (framerate == 1 && settingvalue == 8+1)
     settingvalue = 8-1;
   else
    settingvalue--;
  }

  if (tmp1 != settingvalue) {


   ((__A__ = ' ', __asm__("sta sreg+0")), __AX__ = (0x2000|(((3)<<5)|(4)))+( (tmp1<<8)>>2), _one_vram_buffer(__EAX__));
   ((__A__ = 'c', __asm__("sta sreg+0")), __AX__ = (0x2000|(((3)<<5)|(4)))+((settingvalue<<8)>>2), _one_vram_buffer(__EAX__));
  }

  if (joypad1.press & (0x80 | 0x10)) {
   set_settings();
  }
  if (options & 0x04) {
   twoplayer = 0;
   ((__A__ = 'X', __asm__("sta sreg+0")), __AX__ = (0x2000|(((7)<<5)|(26))), _one_vram_buffer(__EAX__));
  }
  if (twoplayer) options &= ~0x04;

  if (joypad1.press_b) {
   break;
  }
  kandoframecnt++;
  if (kandoframecnt & 1 && mouse_timer) mouse_timer--;

 }
 gameState = 0x01;
}

const uint8_t xbgmlookuptable[];

void set_settings() {
 switch (settingvalue) {
  case 0:
   twoplayer ^= 1; break;
  case 1:
   options ^= 0x01; break;
  case 2:
   options ^= 0x40; break;
  case 3:

   options ^= 0x80; if (options & 0x80) { famistudio_music_stop(); music_update(); } else { music_play(xbgmlookuptable[menu_music]); } break;



  case 4:
   options ^= 0x02; break;
  case 5:
   viseffects ^= 1; if (!viseffects) trails = 0; break;
  case 6:
   trails = trails == 2 ? 0 : trails + 1; break;
  case 7:
   auto_practicepoints ^= 1; break;
  case 8:
   options ^= 0x10; break;
  case 9:
   if (joypad1.a && joypad1.press_start) {
    setdefaultoptions();
    __asm__("JMP ($FFFC)");
   }
   break;
 }
}
#line 71 "SAUCE/include_menus.h"
#line 1 "SAUCE/menustates/credits.c"
void mouse_and_cursor();
#line 4 "SAUCE/defines/charmap/mainmenu_charmap.h"
_Pragma ("charmap (0x20, 0xFF)")



_Pragma ("charmap (0x24, 0xFE)")
_Pragma ("charmap (0x25, 0xDA)")




_Pragma ("charmap (0x2A, 0x8E)")




_Pragma ("charmap (0x2F, 0xE0)")
_Pragma ("charmap (0x30, 0xD0)")
_Pragma ("charmap (0x31, 0xD1)")
_Pragma ("charmap (0x32, 0xD2)")
_Pragma ("charmap (0x33, 0xD3)")
_Pragma ("charmap (0x34, 0xD4)")
_Pragma ("charmap (0x35, 0xD5)")
_Pragma ("charmap (0x36, 0xD6)")
_Pragma ("charmap (0x37, 0xD7)")
_Pragma ("charmap (0x38, 0xD8)")
_Pragma ("charmap (0x39, 0xD9)")
_Pragma ("charmap (0x3A, 0xFC)")






_Pragma ("charmap (0x41, 0xE1)")
_Pragma ("charmap (0x42, 0xE2)")
_Pragma ("charmap (0x43, 0xE3)")
_Pragma ("charmap (0x44, 0xE4)")
_Pragma ("charmap (0x45, 0xE5)")
_Pragma ("charmap (0x46, 0xE6)")
_Pragma ("charmap (0x47, 0xE7)")
_Pragma ("charmap (0x48, 0xE8)")
_Pragma ("charmap (0x49, 0xE9)")
_Pragma ("charmap (0x4A, 0xEA)")
_Pragma ("charmap (0x4B, 0xEB)")
_Pragma ("charmap (0x4C, 0xEC)")
_Pragma ("charmap (0x4D, 0xED)")
_Pragma ("charmap (0x4E, 0xEE)")
_Pragma ("charmap (0x4F, 0xEF)")
_Pragma ("charmap (0x50, 0xF0)")
_Pragma ("charmap (0x51, 0xF1)")
_Pragma ("charmap (0x52, 0xF2)")
_Pragma ("charmap (0x53, 0xF3)")
_Pragma ("charmap (0x54, 0xF4)")
_Pragma ("charmap (0x55, 0xF5)")
_Pragma ("charmap (0x56, 0xF6)")
_Pragma ("charmap (0x57, 0xF7)")
_Pragma ("charmap (0x58, 0xF8)")
_Pragma ("charmap (0x59, 0xF9)")
_Pragma ("charmap (0x5A, 0xFA)")






_Pragma ("charmap (0x61, 0x5E)")
_Pragma ("charmap (0x62, 0x5F)")
_Pragma ("charmap (0x63, 0x9F)")
_Pragma ("charmap (0x64, 0x8E)")
_Pragma ("charmap (0x65, 0xFE)")
_Pragma ("charmap (0x66, 0x0F)")
_Pragma ("charmap (0x67, 0x8F)")
_Pragma ("charmap (0x68, 0x5F)")
_Pragma ("charmap (0x69, 0x6F)")
_Pragma ("charmap (0x6A, 0xDA)")
_Pragma ("charmap (0x6B, 0xDB)")
_Pragma ("charmap (0x6C, 0xDC)")
_Pragma ("charmap (0x6D, 0xDD)")
_Pragma ("charmap (0x6E, 0xDE)")
_Pragma ("charmap (0x6F, 0xDF)")
_Pragma ("charmap (0x70, 0xE0)")
_Pragma ("charmap (0x71, 0xE1)")
_Pragma ("charmap (0x72, 0xE2)")
_Pragma ("charmap (0x73, 0xE3)")
_Pragma ("charmap (0x74, 0xE4)")
_Pragma ("charmap (0x75, 0xE5)")
_Pragma ("charmap (0x76, 0xE6)")
_Pragma ("charmap (0x77, 0xE7)")
_Pragma ("charmap (0x78, 0xE8)")
_Pragma ("charmap (0x79, 0xE9)")
_Pragma ("charmap (0x7A, 0xEA)")




#line 4 "SAUCE/menustates/credits.c"



  const unsigned char ver[] = "DEMO";



 const unsigned char verNum[] = {'1', 0x18, '2', 0x18, '8'};
#line 20 "SAUCE/menustates/credits.c"
void credits_loop() {
 oam_clear();

  mouse_and_cursor();

 newrand();
    kandoframecnt++;
#line 34 "SAUCE/menustates/credits.c"
 if (!forced_credits &&
  (joypad1.press || ((mouse.connected)
   ? mouse.left_press || mouse.right_press
   : joypad2.press))) {
   gameState = 0x01; return;
 }






 ppu_wait_nmi();
 tmp1++;
 if (kandoframecnt & 1 && mouse_timer) mouse_timer--;
}

void state_credits(){
 oam_clear();

 (xargs[0] = 98, _mmc3_set_8kb_chr());
 mmc3_set_2kb_chr_bank_0(0xFF);
 mmc3_set_2kb_chr_bank_1(96);

    pal_bg(palette_Credits);

 ((*(uint8_t*) (0x2006) = ((((((0x2000>>8)&0xFF)))))), (*(uint8_t*) (0x2006) = ((((((0x2000)&0xFF)))))));
 vram_unrle(Credits);
 ((*(uint8_t*) (0x2006) = ((((((0x2400>>8)&0xFF)))))), (*(uint8_t*) (0x2006) = ((((((0x2400)&0xFF)))))));
 vram_unrle(Credits2);

  ((*(uint8_t*) (0x2006) = ((((((0x2c00>>8)&0xFF)))))), (*(uint8_t*) (0x2006) = ((((((0x2c00)&0xFF)))))));
  vram_unrle(Credits3);


 ((__AX__ = (uintptr_t)ver, __EAX__<<=16), xargs[0] = sizeof(ver)-1, __AX__ = (0x2000|(((24)<<5)|(1)))|(0x40<<8), _multi_vram_buffer(__EAX__));
 ((__AX__ = (uintptr_t)verNum, __EAX__<<=16), xargs[0] = sizeof(verNum), __AX__ = (0x2000|(((24)<<5)|(6)))|(0x40<<8), _multi_vram_buffer(__EAX__));

 ppu_on_all();
 ppu_wait_nmi();

 (_pal_fade_to((4<<8)|(((0)&0xFF))));
#line 85 "SAUCE/menustates/credits.c"
 ppu_wait_nmi();

 tmp1 = 0;
 do {
  credits_loop();
  if (gameState != 0x00) return;
 } while (tmp1 != 0);



  do {
   credits_loop();
   set_scroll_x(tmp1<<2);
   if (gameState != 0x00) return;
  } while (tmp1 < 64);

  set_scroll_x(256);
  tmp1 = 0;
  do {
   credits_loop();
   if (gameState != 0x00) return;
  } while (tmp1 != 0);


  do {
   credits_loop();
   set_scroll_y(tmp1<<2);
   if (gameState != 0x00) return;
  } while (tmp1 < (0xF0 >> 2));

  tmp1 = 0;
  set_scroll_y(256);


 do {
  credits_loop();
  if (gameState != 0x00) return;
 } while (tmp1 != 0);

 forced_credits = 0;
 gameState = 0x01;

 return;

}
#line 79 "SAUCE/include_menus.h"
_Pragma ("code-name(pop)") _Pragma ("data-name(pop)") _Pragma ("rodata-name(pop)")
#line 97 "SAUCE/include.h"
#line 6 "SAUCE/gamestates/state_game.h"
void decrement_was_on_slope();
void end_level_debug();
void movement();
void movement2();
void everything_else();
void mouse_and_cursor();
extern uint8_t famistudio_song_speed;
const uint8_t BG_Table[]={
 0x11,
 0x12,
 0x13,
 0x14,
 0x15,
 0x16,
 0x17,
 0x18,
 0x19,
 0x1A,
 0x1B,
 0x1C
};

const uint8_t G_Table[]={
 0x21,
 0x22,
 0x23,
 0x24,
 0x25,
 0x26,
 0x27,
 0x28,
 0x29,
 0x2A,
 0x2B,
 0x2C
};

void check_for_cube_data_2_set() {
 if ((controllingplayer->press & (0x80 | 0x08)) && currplayer_vel_y != 0 && (gamemode != 0x03 && gamemode != 0x01)) ( __A__ = currplayer, __asm__("tay"), __A__ = cube_data[currplayer] | 0x02, __asm__("sta %v, y", cube_data));
}

void runthecolls();
void set_player_banks();

extern unsigned char* PARALLAX_CHR;





void state_game(){



 coin1_timer = 0;
 coin2_timer = 0;
 coin3_timer = 0;
 kandokidshack = 0;
 kandokidshack2 = 0;
 kandokidshack3 = 0;
 kandokidshack4 = 0;
 animating = 0;
 orbactive = 0;
 nocamlock = 0;
 currplayer = 0;
 END_LEVEL_TIMER = 0;
 kandoframecnt = 0;
 practice_point_count = 0;
 (((const void ** const)xargs)[0] = trail_sprites_visible, (__AX__ = (uintptr_t)sizeof(trail_sprites_visible), __EAX__<<=16), __A__ = 0, _memfill(__EAX__));
 (((const void ** const)xargs)[0] = attemptCounter, (__AX__ = (uintptr_t)sizeof(attemptCounter), __EAX__<<=16), __A__ = 0, _memfill(__EAX__));

 outline_color = 0x30;

 lastgcolortype = 0xFF;
 lastbgcolortype = 0xFF;

 if (trueFramerate == 0 && options & 0x10)
  framerate = 0;
 else
  framerate = 1;



 use_auto_chrswitch = 1;

 pal_bg(paletteDefault);
 pal_spr(paletteDefaultSP);

 (__A__ = 0, __asm__("sta ptr3 "), (__asm__("lda #<%v \n ldx #>%v \n ldy #<.bank(%v) \n jsr crossPRGBankJump ", load_ground, load_ground, load_ground), __asm__("lda ptr3 \n ldx ptr3+1"), __AX__));

 oam_clear();

 controllingplayer = &joypad1;

 mmc3_set_prg_bank_1((__asm__("ldx #0\nlda #<.bank(%v)", reset_level), __A__));
 reset_level();

 scroll_y = spawn_scroll_y_pos;
 seam_scroll_y = (spawn_scroll_y_pos - 0x78);
 set_scroll_y(scroll_y);

 player_y[0] = spawn_y_pos;
 player_y[1] = spawn_y_pos;
 currplayer_y = spawn_y_pos;

 update_currplayer_table_idx();



 iconbank = (icon<<1) + 40;

 ( PAL_BUF_RAW[0x0A&0x1F] = (0x0F), __A__ = (0x0F), __asm__("tay"), __asm__("lda (%v), y", PAL_PTR), PAL_BUF[0x0A&0x1F] = __A__);
 ( PAL_BUF_RAW[0x0B&0x1F] = (icon_colors[0]), __A__ = (icon_colors[0]), __asm__("tay"), __asm__("lda (%v), y", PAL_PTR), PAL_BUF[0x0B&0x1F] = __A__);

 (((const void ** const)xargs)[0] = player_old_posy, (__AX__ = (uintptr_t)sizeof(player_old_posy), __EAX__<<=16), __A__ = 0, _memfill(__EAX__));

 switch (discomode) {
  default:
   ( PAL_BUF_RAW[0x1D&0x1F] = (icon_colors[2]), __A__ = (icon_colors[2]), __asm__("tay"), __asm__("lda (%v), y", PAL_PTR), PAL_BUF[0x1D&0x1F] = __A__);
   ( PAL_BUF_RAW[0x1E&0x1F] = (icon_colors[0]), __A__ = (icon_colors[0]), __asm__("tay"), __asm__("lda (%v), y", PAL_PTR), PAL_BUF[0x1E&0x1F] = __A__);
   ( PAL_BUF_RAW[0x1F&0x1F] = (icon_colors[1]), __A__ = (icon_colors[1]), __asm__("tay"), __asm__("lda (%v), y", PAL_PTR), PAL_BUF[0x1F&0x1F] = __A__);
   break;
  case 0x01: discorefreshrate = 0x3F; break;
  case 0x02: discorefreshrate = 0x1F; break;
  case 0x04: discorefreshrate = 0x0F; break;
  case 0x08: discorefreshrate = 0x07; break;
  case 0x10: discorefreshrate = 0x03; break;

 };

 ++PAL_UPDATE;;

    while (1) {



  newrand();
  if (kandokidshack2 && !(kandoframecnt & 0x0F)) { icon == 26-1 ? icon = 0 : icon++; iconbank = (icon<<1) + 40; }
  ( PAL_BUF_RAW[3&0x1F] = (outline_color), __A__ = (outline_color), __asm__("tay"), __asm__("lda (%v), y", PAL_PTR), PAL_BUF[3&0x1F] = __A__);
  ( PAL_BUF_RAW[7&0x1F] = (outline_color), __A__ = (outline_color), __asm__("tay"), __asm__("lda (%v), y", PAL_PTR), PAL_BUF[7&0x1F] = __A__);
  ++PAL_UPDATE;;


  if ((kandoframecnt & 0x1F) == 0x10 ) mmc3_set_2kb_chr_bank_1(current_deco_type + 2);
  else if ((kandoframecnt & 0x1F) == 0x00) mmc3_set_2kb_chr_bank_1(current_deco_type);

  if (((options & 0x04) || force_platformer) && !practice_point_count) {

   if (famistudio_song_speed == 0x80) music_play(song);
  }
#line 175 "SAUCE/gamestates/state_game.h"
  if (((forced_trails == 2) || trails == 2 || !(kandoframecnt & 0x1))) {
   if (!(kandoframecnt & 1)) {
    if (old_trail_scroll_y >= scroll_y) {
     tmp6 = calculate_linear_scroll_y(((__AX__ = scroll_y, __EAX__<<=16), __A__ = (((((old_trail_scroll_y)&0xFF)))), __AX__<<=8, __AX__ |= (((((old_trail_scroll_y>>8)&0xFF)))), _sub_scroll_y_ext(__EAX__)));
    } else {
     tmp6 = calculate_linear_scroll_y(((__AX__ = old_trail_scroll_y, __EAX__<<=16), __A__ = (((((scroll_y)&0xFF)))), __AX__<<=8, __AX__ |= (((((scroll_y>>8)&0xFF)))), _sub_scroll_y_ext(__EAX__)));
     tmp6 ^= 0xFFFF; tmp6++;
    }
    tmp3 = 7;
    do {
     tmp5 = player_old_posy[tmp3] + tmp6;
     if (*((uint8_t*)&tmp5+1) != 0) *((uint8_t*)&tmp5) = 0;
     (&player_old_posy[1])[tmp3] = tmp5;
     --tmp3;
    } while ((int8_t)tmp3 >= 0);
    player_old_posy[0] = *((uint8_t*)&player_y[0]+1);
    old_trail_scroll_y = scroll_y;
   }
  }
  if (discomode && !(kandoframecnt & discorefreshrate)) {

   tmp3 = G_Table[discoframe] + 0x80;
   tmp2 = (tmp3 & 0x3F);
   ( PAL_BUF_RAW[0&0x1F] = (tmp2), __A__ = (tmp2), __asm__("tay"), __asm__("lda (%v), y", PAL_PTR), PAL_BUF[0&0x1F] = __A__);
   ( PAL_BUF_RAW[1&0x1F] = ((__A__ = tmp2, __asm__("tay"), __asm__("lda palBrightTable%s, y", 3), __A__)), __A__ = ((__A__ = tmp2, __asm__("tay"), __asm__("lda palBrightTable%s, y", 3), __A__)), __asm__("tay"), __asm__("lda (%v), y", PAL_PTR), PAL_BUF[1&0x1F] = __A__);
   ( PAL_BUF_RAW[9&0x1F] = ((__A__ = tmp2, __asm__("tay"), __asm__("lda palBrightTable%s, y", 3), __A__)), __A__ = ((__A__ = tmp2, __asm__("tay"), __asm__("lda palBrightTable%s, y", 3), __A__)), __asm__("tay"), __asm__("lda (%v), y", PAL_PTR), PAL_BUF[9&0x1F] = __A__);

   tmp3 = 0xC0 + BG_Table[discoframe];
   tmp2 = (tmp3 & 0x3F);
   ( PAL_BUF_RAW[6&0x1F] = (tmp2), __A__ = (tmp2), __asm__("tay"), __asm__("lda (%v), y", PAL_PTR), PAL_BUF[6&0x1F] = __A__);
   ( PAL_BUF_RAW[5&0x1F] = ((__A__ = tmp2, __asm__("tay"), __asm__("lda palBrightTable%s, y", 3), __A__)), __A__ = ((__A__ = tmp2, __asm__("tay"), __asm__("lda palBrightTable%s, y", 3), __A__)), __asm__("tay"), __asm__("lda (%v), y", PAL_PTR), PAL_BUF[5&0x1F] = __A__);
   ( PAL_BUF_RAW[0x0D&0x1F] = ((__A__ = tmp2, __asm__("tay"), __asm__("lda palBrightTable%s, y", 3), __A__)), __A__ = ((__A__ = tmp2, __asm__("tay"), __asm__("lda palBrightTable%s, y", 3), __A__)), __asm__("tay"), __asm__("lda (%v), y", PAL_PTR), PAL_BUF[0x0D&0x1F] = __A__);
   ++PAL_UPDATE;;

   discoframe++;
   if (discoframe == 12) discoframe = 0;
  }

  kandoframecnt++;
  if (slowmode && (kandokidshack4 == 15)) {
    if ((kandoframecnt & 3)) {
     ppu_wait_nmi();
     check_for_cube_data_2_set();

    }
    else { everything_else(); }
  }
  else if ((slowmode || (kandokidshack4 == 15)) && !(kandoframecnt & 1)) {
   ppu_wait_nmi();
   if (!(kandokidshack4 == 15)) music_update();
   check_for_cube_data_2_set();

  }
  else {
   everything_else();
  }


    oam_clear();

  mmc3_set_prg_bank_1((__asm__("ldx #0\nlda #<.bank(%v)", draw_screen), __A__));
  draw_screen();
  mmc3_set_prg_bank_1((__asm__("ldx #0\nlda #<.bank(%v)", draw_sprites), __A__));
  draw_sprites();

  if (kandodebugmode) { if (mouse_timer) ((__AX__ = ((((mouse.y - 1)&0xFF))<<8)|(((mouse.x)&0xFF)), __EAX__<<=16), __A__ = (0xAD), __AX__ <<= 8, __A__ |= 2, _oam_spr(__EAX__)); }


  if (level_resetting_flag) level_resetting_flag--;
  timewarp_done = 0;

  if ((DEBUG_MODE == 1) || (DEBUG_MODE == 2)) gray_line();
  if (!DEBUG_MODE && kandodebugmode != 2) {
  if (*((uint8_t*)&player_x[0]+1) > 0x20) {
   if (cube_data[0] & 1 || cube_data[1] & 1) {
    death_animation();
    mmc3_set_prg_bank_1((__asm__("ldx #0\nlda #<.bank(%v)", reset_level), __A__));
    reset_level();
#line 263 "SAUCE/gamestates/state_game.h"
   }
  } else cube_data[0] = cube_data[1] = 0;
 }

        if (gameState != 0x02) return;
 if (mouse_timer) mouse_timer--;

    }

}

void runthecolls() {
 if (!invincible_counter) {
  x_movement_coll();
 }

 if (processXMovement) {
  x_movement();
 }



 if (!invincible_counter) {
  (__asm__("lda #<%v \n ldx #>%v \n ldy #<.bank(%v) \n jsr crossPRGBankJump ", bg_coll_death, bg_coll_death, bg_coll_death), __asm__("lda ptr3 \n ldx ptr3+1"), __AX__);
 }
}

void set_player_banks() {
  if (!retro_mode) {
   iconbank1 = 20; iconbank2 = 24; iconbank3 = iconbank;
  }
  else {
   iconbank1 = 22; iconbank2 = 26; iconbank3 = 18;
  }

  if ((gamemode == 0x08 && !retro_mode) || gamemode == 0x0A) mmc3_set_2kb_chr_bank_0(92);
  else if ((currplayer_mini && (gamemode != 0x00 && gamemode != 0x02 && gamemode != 0x04 && gamemode != 0x0B)) || (gamemode == 0x07) || (gamemode == 0x06 || gamemode == 0x0A || gamemode == 0x09)) mmc3_set_2kb_chr_bank_0(iconbank2);
  else if (gamemode == 0x00 || gamemode == 0x01 || gamemode == 0x03) mmc3_set_2kb_chr_bank_0(iconbank3);
  else if (gamemode == 0x0B) mmc3_set_2kb_chr_bank_0(94);
  else mmc3_set_2kb_chr_bank_0(iconbank1);

}


void mouse_and_cursor() {
 if (mouse.connected) {
  if ((mouse.status_raw & (0x40 | 0x80)) || mouse.x != prev_mouse_x || mouse.y != prev_mouse_y) mouse_timer = 120;
  if (mouse.right_press) joypad1.press_b = true;
  if (mouse.right) joypad1.b = true;
  if (!(kandoframecnt & 0x07)) mouseframe += mouseframe == 7 ? -7 : 1;
  if (kandoframecnt > 0xFC) kandoframecnt = 0;
  if (gameState != 0x02) { if (mouse_timer) ((__AX__ = ((((mouse.y - 1)&0xFF))<<8)|(((mouse.x)&0xFF)), __EAX__<<=16), __A__ = (0xA1 + (2*mouseframe)), __AX__ <<= 8, __A__ |= 2, _oam_spr(__EAX__)); }

  prev_mouse_x = mouse.x;
  prev_mouse_y = mouse.y;
 }
}

void everything_else() {




   ppu_wait_nmi();
   music_update();

   orbhitonthisframe[0] = 0;
   orbhitonthisframe[1] = 0;
   if (!twoplayer && !(mouse.status_computed & 0x80)) {

    joypad2.hold = joypad1.hold;
    joypad2.press = joypad1.press;
    joypad2.release = joypad1.release;
   };


   set_player_banks();

   if (nullscapes_active && !(kandoframecnt & 7)) nullscapes_orb_type++;
   if (nullscapes_active == 1 && nullscapes_orb_type >= 4) nullscapes_orb_type = 0;
   else if (nullscapes_active == 2 && nullscapes_orb_type >= 6) nullscapes_orb_type = 0;
   else if (!nullscapes_active && nullscapes_orb_type >= 1) nullscapes_orb_type = 0;

   if (!kandodebugmode) {


   }
   else {
    mouse_and_cursor();
   }

   if (mouse.connected) {
    if (mouse.left_press) joypad1.press_a = 1;
    if (mouse.left) joypad1.a = 1;
   }

   if (options & 0x04 || force_platformer) twoplayer = 0;

   if ((options & 0x01) && twoplayer) {

    joypad2.hold = joypad1.hold<<1;
    joypad2.press = joypad1.press<<1;
    dual = 1;
   }
   else if (twoplayer) {

    dual = 1;
   }

   if (!(joypad1.hold & (0x80 | 0x08))) {
    if (dashing[0]) currplayer_vel_y = 0;
    dashing[0] = 0;
   }


   if (kandodebugmode) {

    if (mouse.left) {
     kandodebugmode = 2;

     target_x_scroll_stop = 0xE000;
     curr_x_scroll_stop = 0xE000;
     *((uint8_t*)&currplayer_y+1) = (mouse.y + *((uint8_t*)&scroll_y+1)) - 10;
     *((uint8_t*)&currplayer_x+1) = mouse.x - 10 < 0 ? mouse.x : mouse.x - 10;
     if (*((uint8_t*)&currplayer_x+1) > 226) *((uint8_t*)&currplayer_x+1) = 226;

    }
    else {
     kandodebugmode = 1;
     target_x_scroll_stop = 0x5000;
     cube_data[0] = 0;
    }

   }


   if (options & 0x02) {
    if (joypad1.press_a || joypad1.press_up) {
     (__AX__ = (uint16_t)((((0)&0xFF)))<<8|1, _sfx_play(__AX__));
    }
   }



   if (joypad1.press_start || (mouse.right_press && !(mouse.status_raw & 0x40))) {
    pauseStatus = 1;
    famistudio_music_pause(1);
    famistudio_update();
    color_emphasis(0xe0);
    mouse.right_press = 0;
    joypad1.press = 0;
    exittimer = 0;





    kandokidshack3 = 0;
    kandokidshack4 = 0;
    while (!(joypad1.press & 0x10) && !(mouse.status_computed & 0x08)) {
     if (VRAM_UPDATE == 1) {
      ppu_wait_nmi();
     }

     VRAM_UPDATE = 1;

     if (mouse.right) exittimer++;
     else exittimer = 0;


     if ((joypad1.up) && (joypad1.press_b)) {
      kandokidshack3++;
     }
     if ((joypad1.down) && (joypad1.press_b)) {
      kandokidshack4++;
     }


     if ((controllingplayer->press_b || mouse.left_press) && !(controllingplayer->hold & (0x08 | 0x04))) {
      famistudio_music_pause(0);
      mmc3_set_prg_bank_1((__asm__("ldx #0\nlda #<.bank(%v)", store_practice_state), __A__));
      store_practice_state();

      joypad1.press = 0x10;
      orbed[currplayer] = 1;
     }
     if (joypad1.select || exittimer == 100) {
      gameState = 0x06;
      (__AX__ = (uint16_t)((((0)&0xFF)))<<8|7, _sfx_play(__AX__));
      music_update();
      color_emphasis(gameboy_check_table[gameboy_mode]);
      pauseStatus = 0;
      return;
     }
     if ((joypad1.press_left) && DEBUG_MODE) {
      gravity_mod == 4 ? gravity_mod = 0 : gravity_mod++;
     }


     if ((joypad1.down) && (joypad1.press_a)) {
      kandokidshack++;
     }
     else if ((joypad1.up) && (joypad1.press_a)) {
      kandokidshack2++;
     }


     else if ((joypad1.press_a) && DEBUG_MODE) {
      nocamlock = 1;

      gamemode == 0x0B ? gamemode = 0x00 : gamemode++;



      cube_data[0] = 0;
      ppu_off();
      set_player_banks();
      oam_clear();
      (__asm__("lda #<%v \n ldx #>%v \n ldy #<.bank(%v) \n jsr crossPRGBankJump ", drawplayerone, drawplayerone, drawplayerone), __asm__("lda ptr3 \n ldx ptr3+1"), __AX__);
      mmc3_set_prg_bank_1((__asm__("ldx #0\nlda #<.bank(%v)", draw_sprites), __A__));
      draw_sprites();
      ppu_on_all();
     }
    }
    pauseStatus = 0;
    color_emphasis(gameboy_check_table[gameboy_mode]);
    famistudio_music_pause(0);
    if (kandokidshack != 9) kandokidshack = 0;
    if (kandokidshack2 != 7) kandokidshack2 = 0;
    if ((DEBUG_MODE != 2 && DEBUG_MODE != 3) && kandokidshack3 == 12) { DEBUG_MODE = !DEBUG_MODE; cheated = 1; }
    if ((DEBUG_MODE == 1) && kandokidshack3 == (0b00010010 + 0b00001100)) DEBUG_MODE = 2;
    if ((DEBUG_MODE == 2) && kandokidshack4 == (0b00001001 + 0b00011010 + 0b01000111 - 0b01000000)) DEBUG_MODE = 3;
    else if (kandokidshack3 == 20) { kandodebugmode ^= 1; cheated = 1; }
    else kandokidshack3 = 0;
   }




   if (joypad1.press_select && practice_point_count == 0)
    {
     DEBUG_MODE = !DEBUG_MODE;
     cheated = 1;
     cube_data[0] &= 2;
     cube_data[1] &= 2;

    }

  if (practice_point_count > 1 && (joypad1.press_select || (mouse.left && mouse.right_press)) && !(joypad1.hold & (0x08 | 0x04))) {
   curr_practice_point--;
   if (latest_practice_point) latest_practice_point--;
   if (curr_practice_point >= practice_point_count)
    curr_practice_point = practice_point_count - 1;
  }

  if ((controllingplayer->press_b) && practice_point_count && !(twoplayer && (options & 0x01))) (__asm__("lda #<%v \n ldx #>%v \n ldy #<.bank(%v) \n jsr crossPRGBankJump ", store_practice_state, store_practice_state, store_practice_state), __asm__("lda ptr3 \n ldx ptr3+1"), __AX__);


  if (auto_practicepoints && auto_practicepoint_timer) auto_practicepoint_timer--;

  if (practicebuffer) practicebuffer--;

  if (practice_point_count && !auto_practicepoint_timer) {
   if (gamemode == 0 || gamemode == 2 || gamemode == 4 || gamemode == 5 || gamemode == 8) {
    if (currplayer_vel_y == 0) (__asm__("lda #<%v \n ldx #>%v \n ldy #<.bank(%v) \n jsr crossPRGBankJump ", store_practice_state, store_practice_state, store_practice_state), __asm__("lda ptr3 \n ldx ptr3+1"), __AX__); practicebuffer = 4;
   }
   else (__asm__("lda #<%v \n ldx #>%v \n ldy #<.bank(%v) \n jsr crossPRGBankJump ", store_practice_state, store_practice_state, store_practice_state), __asm__("lda ptr3 \n ldx ptr3+1"), __AX__);
  }


  if (joypad1.press_right && DEBUG_MODE && !(options & 0x04) && !force_platformer) {
   (currplayer_gravity ^= 0xFF);
   update_currplayer_table_idx();
  }

  if (joypad1.press_down && DEBUG_MODE) {
   currplayer_mini ^= 1;
   update_currplayer_table_idx();
  }

  if (joypad1.select && DEBUG_MODE) {
      if (++END_LEVEL_TIMER > 60) {
    (__asm__("lda #<%v \n ldx #>%v \n ldy #<.bank(%v) \n jsr crossPRGBankJump ", end_level_debug, end_level_debug, end_level_debug), __asm__("lda ptr3 \n ldx ptr3+1"), __AX__);
      }
  } else {
      END_LEVEL_TIMER = 0;
  }




  (__asm__("lda #<%v \n ldx #>%v \n ldy #<.bank(%v) \n jsr crossPRGBankJump ", decrement_was_on_slope, decrement_was_on_slope, decrement_was_on_slope), __asm__("lda ptr3 \n ldx ptr3+1"), __AX__);

  check_for_cube_data_2_set();

 if (orbed[currplayer]) {
  if (!(controllingplayer->hold & (0x80 | 0x08)) && !(mouse.status_raw & 0x40)) orbed[currplayer] = 0;
 }

  (__asm__("lda #<%v \n ldx #>%v \n ldy #<.bank(%v) \n jsr crossPRGBankJump ", sprite_collide, sprite_collide, sprite_collide), __asm__("lda ptr3 \n ldx ptr3+1"), __AX__);

  if (retro_mode) { if (gamemode == 0x00) gamemode = 0x04; }
#line 572 "SAUCE/gamestates/state_game.h"
  (__asm__("lda #<%v \n ldx #>%v \n ldy #<.bank(%v) \n jsr crossPRGBankJump ", movement, movement, movement), __asm__("lda ptr3 \n ldx ptr3+1"), __AX__);

  processXMovement = 1;

  runthecolls();

  processXMovement = 0;

  dblocked[currplayer] = 0;
  if (invincible_counter) invincible_counter--;

  (__asm__("lda #<%v \n ldx #>%v \n ldy #<.bank(%v) \n jsr crossPRGBankJump ", do_the_scroll_thing, do_the_scroll_thing, do_the_scroll_thing), __asm__("lda ptr3 \n ldx ptr3+1"), __AX__);

  check_spr_objects();



  mmc3_set_prg_bank_1((__asm__("ldx #0\nlda #<.bank(%v)", sprite_collide), __A__));
  {
   player_x[0] = currplayer_x;
   player_y[0] = currplayer_y;
   player_vel_x[0] = currplayer_vel_x;
   player_vel_y[0] = currplayer_vel_y;
   player_gravity[0] = currplayer_gravity;
   player_mini[0] = currplayer_mini;
   slope_frames[0] = currplayer_slope_frames;
   was_on_slope_counter[0] = currplayer_was_on_slope_counter;
   slope_type[0] = currplayer_slope_type;
   last_slope_type[0] = currplayer_last_slope_type;
  }


  if (dual) {
   currplayer = 1;
   if (!(joypad2.hold & (0x80 | 0x08))) {
    if (dashing[1]) currplayer_vel_y = currplayer_gravity ? -0x0100 : 0x0100;
    dashing[1] = 0;
   }
   if (twoplayer || !(mouse.status_computed & 0x80)) controllingplayer = &joypad2;


   {
    currplayer_x = player_x[1];
    currplayer_y = player_y[1];
    currplayer_vel_x = player_vel_x[1];
    currplayer_vel_y = player_vel_y[1];
    currplayer_gravity = player_gravity[1];
    currplayer_mini = player_mini[1];
    currplayer_slope_frames = slope_frames[1];
    currplayer_was_on_slope_counter = was_on_slope_counter[1];
    currplayer_slope_type = slope_type[1];
    currplayer_last_slope_type = last_slope_type[1];
    update_currplayer_table_idx();
   }

   if (controllingplayer->press_right && DEBUG_MODE && !(options & 0x04) && !force_platformer) { (currplayer_gravity ^= 0xFF); update_currplayer_table_idx(); }
   check_for_cube_data_2_set();

   (__asm__("lda #<%v \n ldx #>%v \n ldy #<.bank(%v) \n jsr crossPRGBankJump ", decrement_was_on_slope, decrement_was_on_slope, decrement_was_on_slope), __asm__("lda ptr3 \n ldx ptr3+1"), __AX__);
   if (orbed[currplayer]) {
    if (!(controllingplayer->hold & (0x80 | 0x08))) orbed[currplayer] = 0;
   }

   (__asm__("lda #<%v \n ldx #>%v \n ldy #<.bank(%v) \n jsr crossPRGBankJump ", sprite_collide, sprite_collide, sprite_collide), __asm__("lda ptr3 \n ldx ptr3+1"), __AX__);






   (__asm__("lda #<%v \n ldx #>%v \n ldy #<.bank(%v) \n jsr crossPRGBankJump ", movement, movement, movement), __asm__("lda ptr3 \n ldx ptr3+1"), __AX__);

   if (dual && ((options & 0x04) || force_platformer) && !twoplayer) { currplayer_x = player_x[0]; currplayer_vel_x = player_vel_x[0]; }
   else if (dual && !(options & 0x04) && !force_platformer) { currplayer_x = player_x[0]; currplayer_vel_x = player_vel_x[0]; }

   processXMovement = 0;
   runthecolls();
   processXMovement = 1;
   dblocked[currplayer] = 0;
   currplayer = 0;


   controllingplayer = &joypad1;

   {
    player_x[1] = currplayer_x;
    player_y[1] = currplayer_y;
    player_vel_x[1] = currplayer_vel_x;
    player_vel_y[1] = currplayer_vel_y;
    player_gravity[1] = currplayer_gravity;
    player_mini[1] = currplayer_mini;
    slope_frames[1] = currplayer_slope_frames;
    was_on_slope_counter[1] = currplayer_was_on_slope_counter;
    slope_type[1] = currplayer_slope_type;
    last_slope_type[1] = currplayer_last_slope_type;

    currplayer_x = player_x[0];
    currplayer_y = player_y[0];
    currplayer_vel_x = player_vel_x[0];
    currplayer_vel_y = player_vel_y[0];
    currplayer_gravity = player_gravity[0];
    currplayer_mini = player_mini[0];
    currplayer_slope_frames = slope_frames[0];
    currplayer_was_on_slope_counter = was_on_slope_counter[0];
    currplayer_slope_type = slope_type[0];
    currplayer_last_slope_type = last_slope_type[0];
    update_currplayer_table_idx();
  }
 }
}

#line 104 "SAUCE/include.h"
#line 1 "SAUCE/gamestates/state_lvldone.h"
_Pragma ("code-name(push, \"XCD_BANK_06\" )") _Pragma ("data-name(push, \"XCD_BANK_06\" )") _Pragma ("rodata-name(push, \"XCD_BANK_06\" )")

void checkcointimer();
void checkcoinproceed();
void lvl_done_update();
#line 4 "SAUCE/defines/charmap/bgm_charmap.h"
_Pragma ("charmap (0x20, 0xFF)")



_Pragma ("charmap (0x24, 0xFE)")
_Pragma ("charmap (0x25, 0xDA)")




_Pragma ("charmap (0x2A, 0x8E)")




_Pragma ("charmap (0x2F, 0xE0)")
_Pragma ("charmap (0x30, 0xB0)")
_Pragma ("charmap (0x31, 0xB1)")
_Pragma ("charmap (0x32, 0xB2)")
_Pragma ("charmap (0x33, 0xB3)")
_Pragma ("charmap (0x34, 0xB4)")
_Pragma ("charmap (0x35, 0xB5)")
_Pragma ("charmap (0x36, 0xB6)")
_Pragma ("charmap (0x37, 0xB7)")
_Pragma ("charmap (0x38, 0xB8)")
_Pragma ("charmap (0x39, 0xB9)")
_Pragma ("charmap (0x3A, 0xFC)")






_Pragma ("charmap (0x41, 0xBB)")
_Pragma ("charmap (0x42, 0xBC)")
_Pragma ("charmap (0x43, 0xBD)")
_Pragma ("charmap (0x44, 0xBE)")
_Pragma ("charmap (0x45, 0xBF)")
_Pragma ("charmap (0x46, 0xC0)")
_Pragma ("charmap (0x47, 0xC1)")
_Pragma ("charmap (0x48, 0xC2)")
_Pragma ("charmap (0x49, 0xC3)")
_Pragma ("charmap (0x4A, 0xC4)")
_Pragma ("charmap (0x4B, 0xC5)")
_Pragma ("charmap (0x4C, 0xC6)")
_Pragma ("charmap (0x4D, 0xC7)")
_Pragma ("charmap (0x4E, 0xC8)")
_Pragma ("charmap (0x4F, 0xC9)")
_Pragma ("charmap (0x50, 0xCA)")
_Pragma ("charmap (0x51, 0xCB)")
_Pragma ("charmap (0x52, 0xCC)")
_Pragma ("charmap (0x53, 0xCD)")
_Pragma ("charmap (0x54, 0xCE)")
_Pragma ("charmap (0x55, 0xCF)")
_Pragma ("charmap (0x56, 0xDB)")
_Pragma ("charmap (0x57, 0xDC)")
_Pragma ("charmap (0x58, 0xDD)")
_Pragma ("charmap (0x59, 0xDE)")
_Pragma ("charmap (0x5A, 0xDF)")






_Pragma ("charmap (0x61, 0x5E)")
_Pragma ("charmap (0x62, 0x5F)")
_Pragma ("charmap (0x63, 0x9F)")
_Pragma ("charmap (0x64, 0x8E)")
_Pragma ("charmap (0x65, 0xFE)")
_Pragma ("charmap (0x66, 0x0F)")
_Pragma ("charmap (0x67, 0x8F)")
_Pragma ("charmap (0x68, 0x5F)")
_Pragma ("charmap (0x69, 0x6F)")
_Pragma ("charmap (0x6A, 0xDA)")
_Pragma ("charmap (0x6B, 0xDB)")
_Pragma ("charmap (0x6C, 0xDC)")
_Pragma ("charmap (0x6D, 0xDD)")
_Pragma ("charmap (0x6E, 0xDE)")
_Pragma ("charmap (0x6F, 0xDF)")
_Pragma ("charmap (0x70, 0xE0)")
_Pragma ("charmap (0x71, 0xE1)")
_Pragma ("charmap (0x72, 0xE2)")
_Pragma ("charmap (0x73, 0xE3)")
_Pragma ("charmap (0x74, 0xE4)")
_Pragma ("charmap (0x75, 0xE5)")
_Pragma ("charmap (0x76, 0xE6)")
_Pragma ("charmap (0x77, 0xE7)")
_Pragma ("charmap (0x78, 0xE8)")
_Pragma ("charmap (0x79, 0xE9)")
_Pragma ("charmap (0x7A, 0xEA)")




#line 8 "SAUCE/gamestates/state_lvldone.h"

const char cheater[] = "CHEATER";
const uint8_t cheatersize = sizeof(cheater) - 1;

void state_lvldone() {






 oam_clear();

 mmc3_set_1kb_chr_bank_0(106);
 mmc3_set_1kb_chr_bank_1(110);
 mmc3_set_1kb_chr_bank_2(106+2);
 mmc3_set_1kb_chr_bank_3(106+3);
 mmc3_set_2kb_chr_bank_1(96);


 pal_bright(4);
 pal_bg(paletteMenu);
 ( PAL_BUF_RAW[0x0A&0x1F] = (0x2A), __A__ = (0x2A), __asm__("tay"), __asm__("lda (%v), y", PAL_PTR), PAL_BUF[0x0A&0x1F] = __A__);
 ( PAL_BUF_RAW[0x0B&0x1F] = (0x21), __A__ = (0x21), __asm__("tay"), __asm__("lda (%v), y", PAL_PTR), PAL_BUF[0x0B&0x1F] = __A__);
 ++PAL_UPDATE;;

 pal_spr(paletteDefaultSP);


    ((*(uint8_t*) (0x2006) = ((((((0x2800>>8)&0xFF)))))), (*(uint8_t*) (0x2006) = ((((((0x2800)&0xFF)))))));
 ((__A__ = ((((((((0x3c0)&0xFF)))))&0xFF)), __asm__("sta sreg+0")), __AX__ = (((((((((0x3c0>>8)&0xFF)))))&0xFF)) << 8) | (((0xfe)&0xFF)), _vram_fill(__EAX__));
 ((__A__ = ((((((((0x3f)&0xFF)))))&0xFF)), __asm__("sta sreg+0")), __AX__ = (((((((((0x3f>>8)&0xFF)))))&0xFF)) << 8) | (((0x00)&0xFF)), _vram_fill(__EAX__));


 ((*(uint8_t*) (0x2006) = ((((((0x2000>>8)&0xFF)))))), (*(uint8_t*) (0x2006) = ((((((0x2000)&0xFF)))))));
 if (practice_point_count) {
  vram_unrle(practicedone);
 } else {
  vram_unrle(leveldone);
 }

 ((__A__ = 0xD0, __asm__("sta sreg+0")), __AX__ = (0x2000|(((13)<<5)|(20))), _display_attempt_counter(__EAX__));
 if (DEBUG_MODE || kandokidshack || kandokidshack3 || kandokidshack4 || cheated) (((const void ** const)xargs)[0] = cheater, (__AX__ = ((((cheatersize)&0xFF))<<8)|(((18)&0xFF)), __EAX__<<=16), __AX__ = (0x2000|(((14)<<5)|(7)))|(0x40<<8), _draw_padded_text(__EAX__));



 hexToDec(jumps);
 tmp1 = 0;
 if (hexToDecOutputBuffer[4]) {
  ((__A__ = 0xD0+hexToDecOutputBuffer[4], __asm__("sta sreg+0")), __AX__ = (0x2000|(((15)<<5)|(18))), _one_vram_buffer(__EAX__));
  tmp1++;
 }

 if (hexToDecOutputBuffer[4] | hexToDecOutputBuffer[3]) {
  ((__A__ = 0xD0+hexToDecOutputBuffer[3], __asm__("sta sreg+0")), __AX__ = (0x2000|(((15)<<5)|(18+tmp1))), _one_vram_buffer(__EAX__));
  tmp1++;
 }

 if (hexToDecOutputBuffer[4] | hexToDecOutputBuffer[3] | hexToDecOutputBuffer[2]) {
  ((__A__ = 0xD0+hexToDecOutputBuffer[2], __asm__("sta sreg+0")), __AX__ = (0x2000|(((15)<<5)|(18+tmp1))), _one_vram_buffer(__EAX__));
  tmp1++;
 }

 if (hexToDecOutputBuffer[4] | hexToDecOutputBuffer[3] | hexToDecOutputBuffer[2] | hexToDecOutputBuffer[1]) {
  ((__A__ = 0xD0+hexToDecOutputBuffer[1], __asm__("sta sreg+0")), __AX__ = (0x2000|(((15)<<5)|(18+tmp1))), _one_vram_buffer(__EAX__));
  tmp1++;
 }
 ((__A__ = 0xD0+hexToDecOutputBuffer[0], __asm__("sta sreg+0")), __AX__ = (0x2000|(((15)<<5)|(18+tmp1))), _one_vram_buffer(__EAX__));
 flush_vram_update2();

 tmp4 = 0x20;



 tmp2 = 0;

 if (!DEBUG_MODE && !kandokidshack && !kandokidshack3 && !kandokidshack4 && !practice_point_count) {
  LEVELCOMPLETE[level] = 1;

  if (coins & 0x01) coin1_obtained[level] = 1;
  if (coins & 0x02) coin2_obtained[level] = 1;
  if (coins & 0x04) coin3_obtained[level] = 1;

  level_completeness_normal[level] = 100;
 } else {
  (&level_completeness_normal[0x80])[level] = 100;
 }
#line 4 "SAUCE/defines/charmap/endlevel_charmap.h"
_Pragma ("charmap (0x20, 0xFF)")



_Pragma ("charmap (0x24, 0xFE)")
_Pragma ("charmap (0x25, 0xDA)")




_Pragma ("charmap (0x2A, 0x8E)")




_Pragma ("charmap (0x2F, 0xE0)")
_Pragma ("charmap (0x30, 0xD0)")
_Pragma ("charmap (0x31, 0xD1)")
_Pragma ("charmap (0x32, 0xD2)")
_Pragma ("charmap (0x33, 0xD3)")
_Pragma ("charmap (0x34, 0xD4)")
_Pragma ("charmap (0x35, 0xD5)")
_Pragma ("charmap (0x36, 0xD6)")
_Pragma ("charmap (0x37, 0xD7)")
_Pragma ("charmap (0x38, 0xD8)")
_Pragma ("charmap (0x39, 0xD9)")
_Pragma ("charmap (0x3A, 0xFC)")






_Pragma ("charmap (0x41, 0xE1)")
_Pragma ("charmap (0x42, 0xE2)")
_Pragma ("charmap (0x43, 0xE3)")
_Pragma ("charmap (0x44, 0xE4)")
_Pragma ("charmap (0x45, 0xE5)")
_Pragma ("charmap (0x46, 0xE6)")
_Pragma ("charmap (0x47, 0xE7)")
_Pragma ("charmap (0x48, 0xE8)")
_Pragma ("charmap (0x49, 0xE9)")
_Pragma ("charmap (0x4A, 0xEA)")
_Pragma ("charmap (0x4B, 0xEB)")
_Pragma ("charmap (0x4C, 0xEC)")
_Pragma ("charmap (0x4D, 0xED)")
_Pragma ("charmap (0x4E, 0xEE)")
_Pragma ("charmap (0x4F, 0xEF)")
_Pragma ("charmap (0x50, 0xF0)")
_Pragma ("charmap (0x51, 0xF1)")
_Pragma ("charmap (0x52, 0xF2)")
_Pragma ("charmap (0x53, 0xF3)")
_Pragma ("charmap (0x54, 0xF4)")
_Pragma ("charmap (0x55, 0xF5)")
_Pragma ("charmap (0x56, 0xF6)")
_Pragma ("charmap (0x57, 0xF7)")
_Pragma ("charmap (0x58, 0xF8)")
_Pragma ("charmap (0x59, 0xF9)")
_Pragma ("charmap (0x5A, 0xFA)")






_Pragma ("charmap (0x61, 0xD1)")
_Pragma ("charmap (0x62, 0xD2)")
_Pragma ("charmap (0x63, 0xD3)")
_Pragma ("charmap (0x64, 0xD4)")
_Pragma ("charmap (0x65, 0xD5)")
_Pragma ("charmap (0x66, 0xD6)")
_Pragma ("charmap (0x67, 0xD7)")
_Pragma ("charmap (0x68, 0xD8)")
_Pragma ("charmap (0x69, 0xD9)")
_Pragma ("charmap (0x6A, 0xDA)")
_Pragma ("charmap (0x6B, 0xDB)")
_Pragma ("charmap (0x6C, 0xDC)")
_Pragma ("charmap (0x6D, 0xDD)")
_Pragma ("charmap (0x6E, 0xDE)")
_Pragma ("charmap (0x6F, 0xDF)")
_Pragma ("charmap (0x70, 0xE0)")
_Pragma ("charmap (0x71, 0xE1)")
_Pragma ("charmap (0x72, 0xE2)")
_Pragma ("charmap (0x73, 0xE3)")
_Pragma ("charmap (0x74, 0xE4)")
_Pragma ("charmap (0x75, 0xE5)")
_Pragma ("charmap (0x76, 0xE6)")
_Pragma ("charmap (0x77, 0xE7)")
_Pragma ("charmap (0x78, 0xE8)")
_Pragma ("charmap (0x79, 0xE9)")
_Pragma ("charmap (0x7A, 0xEA)")




#line 97 "SAUCE/gamestates/state_lvldone.h"

 tmp1 = 0;
 tmpptr1 = ((void *) 0);

 tmp5 = 0x0000;
 tmp6 = 0xf000;

    set_scroll_x(0);
    set_scroll_y(0xe8);

    ppu_on_all();

 (__AX__ = (uint16_t)((((0)&0xFF)))<<8|2, _sfx_play(__AX__));
 menuselection = 1;





 while (1) {
  ppu_wait_nmi();



  kandoframecnt++;

  if (kandoframecnt & 1 && mouse_timer) mouse_timer--;
  switch (tmp2) {
  case 0:
   tmp5 += 0x40;
   tmp6 -= tmp5;
   set_scroll_y(*((uint8_t*)&tmp6+1));

   if (*((uint8_t*)&tmp6+1) < 10) {
    tmp2 = 1;
    tmp5 = -0x0600;
   }
   break;
  case 1:
   tmp5 += 0x40;
   tmp6 -= tmp5;
   set_scroll_y(*((uint8_t*)&tmp6+1));
   if (*((uint8_t*)&tmp6+1) < 5 && !(*((uint8_t*)&tmp5+1) & 0x80)) {
    tmp2 = 2;
    tmp5 = -0x0300;
   }
   break;
  case 2:
   tmp5 += 0x40;
   tmp6 -= tmp5;
   set_scroll_y(*((uint8_t*)&tmp6+1));
   if (*((uint8_t*)&tmp6+1) < 3 && !(*((uint8_t*)&tmp5+1) & 0x80)) {
    tmp2 = 3;
    set_scroll_y(0);
   }
   break;
  case 3:


   kandokidshack = 0;
   kandokidshack2 = 0;

   tmp2 = 0;
   do {

    __A__ = tmp2; __asm__("tay");
    __A__ = kandokidshack;
    __asm__("clc \n adc %v, y", coin1_obtained);
    __asm__("clc \n adc %v, y", coin2_obtained);
    __asm__("clc \n adc %v, y", coin3_obtained);
    kandokidshack = __A__;

    if (LEVELCOMPLETE[tmp2]) kandokidshack2 += stars_list[tmp2];
    tmp2++;
   }



   while (tmp2 < (25+19));


   tmp2 = 0;
   tmp2 = 4;
   tmp1 = 1;
   break;
  case 4:
   if (coins & 0x01){
    ((__A__ = 0x90, __asm__("sta sreg+0")), __AX__ = (0x2000|(((18)<<5)|(11))), _one_vram_buffer(__EAX__));
    ((__A__ = 0x91, __asm__("sta sreg+0")), __AX__ = (0x2000|(((18)<<5)|(12))), _one_vram_buffer(__EAX__));
    ((__A__ = 0xA0, __asm__("sta sreg+0")), __AX__ = (0x2000|(((19)<<5)|(11))), _one_vram_buffer(__EAX__));
    ((__A__ = 0xA1, __asm__("sta sreg+0")), __AX__ = (0x2000|(((19)<<5)|(12))), _one_vram_buffer(__EAX__));
    checkcointimer();
   }
   tmp1--;
   checkcoinproceed();
   break;
  case 5:
   if (coins & 0x02){
    ((__A__ = 0x90, __asm__("sta sreg+0")), __AX__ = (0x2000|(((18)<<5)|(15))), _one_vram_buffer(__EAX__));
    ((__A__ = 0x91, __asm__("sta sreg+0")), __AX__ = (0x2000|(((18)<<5)|(16))), _one_vram_buffer(__EAX__));
    ((__A__ = 0xA0, __asm__("sta sreg+0")), __AX__ = (0x2000|(((19)<<5)|(15))), _one_vram_buffer(__EAX__));
    ((__A__ = 0xA1, __asm__("sta sreg+0")), __AX__ = (0x2000|(((19)<<5)|(16))), _one_vram_buffer(__EAX__));
    checkcointimer();
   }
   tmp1--;
   checkcoinproceed();
   break;
  case 6:
   if (coins & 0x04){
    ((__A__ = 0x90, __asm__("sta sreg+0")), __AX__ = (0x2000|(((18)<<5)|(19))), _one_vram_buffer(__EAX__));
    ((__A__ = 0x91, __asm__("sta sreg+0")), __AX__ = (0x2000|(((18)<<5)|(20))), _one_vram_buffer(__EAX__));
    ((__A__ = 0xA0, __asm__("sta sreg+0")), __AX__ = (0x2000|(((19)<<5)|(19))), _one_vram_buffer(__EAX__));
    ((__A__ = 0xA1, __asm__("sta sreg+0")), __AX__ = (0x2000|(((19)<<5)|(20))), _one_vram_buffer(__EAX__));
    checkcointimer();
   }
   tmp1--;
   checkcoinproceed();
   break;
  case 7:
   lvl_done_update();
   oam_clear();

   mouse_and_cursor();

   if (mouse.left_press) {
    if (mouse.y >= 0xC5 && mouse.y <= 0xE3) {
     if (mouse.x >= 0x36 && mouse.x <= 0x53) {
      (__AX__ = (uint16_t)((((0)&0xFF)))<<8|8, _sfx_play(__AX__));
      gameState = 0x02;

      coins = 0;
      return;
     }
     if (mouse.x >= 0xA6 && mouse.x <= 0xc3) {
      (__AX__ = (uint16_t)((((0)&0xFF)))<<8|7, _sfx_play(__AX__));
      music_update();
      gameState = 0x06;
      menuselection = 0;

      menuMusicCurrentlyPlaying = 0;
      return;
     }
    }
   }


   if (joypad1.press_left || joypad1.press_right) { menuselection ^= 1; lvl_done_update(); }
   if (joypad1.press_start || joypad1.press_a){
    if (menuselection) {




     (__AX__ = (uint16_t)((((0)&0xFF)))<<8|7, _sfx_play(__AX__));
     music_update();
     gameState = 0x06;
     menuselection = 0;


     menuMusicCurrentlyPlaying = 0;
     return;

    } else {

     (__AX__ = (uint16_t)((((0)&0xFF)))<<8|8, _sfx_play(__AX__));
     gameState = 0x02;
     coins = 0;


     return;
    }

   }






  }
  kandoframecnt++;
  if (kandoframecnt & 1 && mouse_timer) mouse_timer--;

 }





}
#line 4 "SAUCE/defines/charmap/endlevel_charmap.h"
_Pragma ("charmap (0x20, 0xFF)")



_Pragma ("charmap (0x24, 0xFE)")
_Pragma ("charmap (0x25, 0xDA)")




_Pragma ("charmap (0x2A, 0x8E)")




_Pragma ("charmap (0x2F, 0xE0)")
_Pragma ("charmap (0x30, 0xD0)")
_Pragma ("charmap (0x31, 0xD1)")
_Pragma ("charmap (0x32, 0xD2)")
_Pragma ("charmap (0x33, 0xD3)")
_Pragma ("charmap (0x34, 0xD4)")
_Pragma ("charmap (0x35, 0xD5)")
_Pragma ("charmap (0x36, 0xD6)")
_Pragma ("charmap (0x37, 0xD7)")
_Pragma ("charmap (0x38, 0xD8)")
_Pragma ("charmap (0x39, 0xD9)")
_Pragma ("charmap (0x3A, 0xFC)")






_Pragma ("charmap (0x41, 0xE1)")
_Pragma ("charmap (0x42, 0xE2)")
_Pragma ("charmap (0x43, 0xE3)")
_Pragma ("charmap (0x44, 0xE4)")
_Pragma ("charmap (0x45, 0xE5)")
_Pragma ("charmap (0x46, 0xE6)")
_Pragma ("charmap (0x47, 0xE7)")
_Pragma ("charmap (0x48, 0xE8)")
_Pragma ("charmap (0x49, 0xE9)")
_Pragma ("charmap (0x4A, 0xEA)")
_Pragma ("charmap (0x4B, 0xEB)")
_Pragma ("charmap (0x4C, 0xEC)")
_Pragma ("charmap (0x4D, 0xED)")
_Pragma ("charmap (0x4E, 0xEE)")
_Pragma ("charmap (0x4F, 0xEF)")
_Pragma ("charmap (0x50, 0xF0)")
_Pragma ("charmap (0x51, 0xF1)")
_Pragma ("charmap (0x52, 0xF2)")
_Pragma ("charmap (0x53, 0xF3)")
_Pragma ("charmap (0x54, 0xF4)")
_Pragma ("charmap (0x55, 0xF5)")
_Pragma ("charmap (0x56, 0xF6)")
_Pragma ("charmap (0x57, 0xF7)")
_Pragma ("charmap (0x58, 0xF8)")
_Pragma ("charmap (0x59, 0xF9)")
_Pragma ("charmap (0x5A, 0xFA)")






_Pragma ("charmap (0x61, 0xD1)")
_Pragma ("charmap (0x62, 0xD2)")
_Pragma ("charmap (0x63, 0xD3)")
_Pragma ("charmap (0x64, 0xD4)")
_Pragma ("charmap (0x65, 0xD5)")
_Pragma ("charmap (0x66, 0xD6)")
_Pragma ("charmap (0x67, 0xD7)")
_Pragma ("charmap (0x68, 0xD8)")
_Pragma ("charmap (0x69, 0xD9)")
_Pragma ("charmap (0x6A, 0xDA)")
_Pragma ("charmap (0x6B, 0xDB)")
_Pragma ("charmap (0x6C, 0xDC)")
_Pragma ("charmap (0x6D, 0xDD)")
_Pragma ("charmap (0x6E, 0xDE)")
_Pragma ("charmap (0x6F, 0xDF)")
_Pragma ("charmap (0x70, 0xE0)")
_Pragma ("charmap (0x71, 0xE1)")
_Pragma ("charmap (0x72, 0xE2)")
_Pragma ("charmap (0x73, 0xE3)")
_Pragma ("charmap (0x74, 0xE4)")
_Pragma ("charmap (0x75, 0xE5)")
_Pragma ("charmap (0x76, 0xE6)")
_Pragma ("charmap (0x77, 0xE7)")
_Pragma ("charmap (0x78, 0xE8)")
_Pragma ("charmap (0x79, 0xE9)")
_Pragma ("charmap (0x7A, 0xEA)")




#line 289 "SAUCE/gamestates/state_lvldone.h"
void lvl_done_update() {
 if (menuselection) {
  ((__A__ = 0xFF, __asm__("sta sreg+0")), __AX__ = (0x2000|(((23)<<5)|(8))), _one_vram_buffer(__EAX__));
  ((__A__ = 0xFF, __asm__("sta sreg+0")), __AX__ = (0x2000|(((23)<<5)|(9))), _one_vram_buffer(__EAX__));
  ((__A__ = 0x94, __asm__("sta sreg+0")), __AX__ = (0x2000|(((23)<<5)|(22))), _one_vram_buffer(__EAX__));
  ((__A__ = 0x95, __asm__("sta sreg+0")), __AX__ = (0x2000|(((23)<<5)|(23))), _one_vram_buffer(__EAX__));
 } else {
  ((__A__ = 0x94, __asm__("sta sreg+0")), __AX__ = (0x2000|(((23)<<5)|(8))), _one_vram_buffer(__EAX__));
  ((__A__ = 0x95, __asm__("sta sreg+0")), __AX__ = (0x2000|(((23)<<5)|(9))), _one_vram_buffer(__EAX__));
  ((__A__ = 0xFF, __asm__("sta sreg+0")), __AX__ = (0x2000|(((23)<<5)|(22))), _one_vram_buffer(__EAX__));
  ((__A__ = 0xFF, __asm__("sta sreg+0")), __AX__ = (0x2000|(((23)<<5)|(23))), _one_vram_buffer(__EAX__));
 }
}


void checkcointimer(){
 if (tmp1 == 1){
  (__AX__ = (uint16_t)((((0)&0xFF)))<<8|3, _sfx_play(__AX__));
  tmp1 = 50;
 }
}
void checkcoinproceed(){
 if (tmp1 == 0 || tmp1 == 30) {
  tmp2++;
  tmp1 = 1;
 }
}

_Pragma ("code-name(pop)") _Pragma ("data-name(pop)") _Pragma ("rodata-name(pop)")
#line 105 "SAUCE/include.h"
#line 2 "SAUCE/gamestates/state_savefile_validate.h"
_Pragma ("code-name(push, \"XCD_BANK_02\" )") _Pragma ("data-name(push, \"XCD_BANK_02\" )") _Pragma ("rodata-name(push, \"XCD_BANK_02\" )")



void setdefaultoptions();

void mouse_and_cursor();

void state_savefile_validate(){


    if ((SRAM_VALIDATE[2] != 0x24) && SRAM_VALIDATE[2] != 0x00) {
        setdefaultoptions();
    }


    if (SRAM_VALIDATE[0] != 0x13 || SRAM_VALIDATE[1] != 0x37 || SRAM_VALIDATE[2] != 0x24) {
        setdefaultoptions();
    }




        (xargs[0] = 98, _mmc3_set_8kb_chr());
        mmc3_set_2kb_chr_bank_0(0xFF);
        mmc3_set_2kb_chr_bank_1(96);

        (__AX__ = (uintptr_t)dialogBox_saveFileSafetyHeader, __asm__("jsr pushax "));
        draw_dialog_box(dialogBox_pleasePressB);

        set_scroll_x(0);

        ppu_on_all();

        (_pal_fade_to((4<<8)|(((0)&0xFF))));


        do {
            ppu_wait_nmi();
            oam_clear();
            mouse_and_cursor();
            newrand();
            if (joypad1.press || mouse.left_press || mouse.right_press) break;
            kandoframecnt++;
            if (kandoframecnt & 1 && mouse_timer) mouse_timer--;
        } while (1);




    gameState = 0x00;
    return;
}

_Pragma ("code-name(pop)") _Pragma ("data-name(pop)") _Pragma ("rodata-name(pop)")
#line 107 "SAUCE/include.h"

#line 24 "SAUCE/famidash.c"
#line 34 "SAUCE/famidash.c"
void main(){

    ppu_off();

    pal_bright(0);

    ppu_mask(0x00 | (1 << 1) | (1 << 2));


 bank_spr(1);

    set_vram_buffer();

 pal_spr(paletteDefaultSP);


    mmc3_disable_irq();



 mouse.x = 0x78;
 mouse.y = 0x60;
 mouse_mask = 1;


 options &= ~0x08;



 gameState = 0x05;
 (++auto_fs_updates);

 menuMusicCurrentlyPlaying = 0;



    while (1){
     forceNoFadeOut = 0;
  switch (gameState){
   case 0x04: {
    mmc3_set_prg_bank_1((__asm__("ldx #0\nlda #<.bank(%v)", state_soundtest), __A__));
    state_soundtest();
    break;
   }
   case 0x05: {

     music_play(34);

    mmc3_set_prg_bank_1((__asm__("ldx #0\nlda #<.bank(%v)", state_savefile_validate), __A__));
    state_savefile_validate();
    break;
   }

   case 0x01: {
#line 96 "SAUCE/famidash.c"
    mmc3_set_prg_bank_1((__asm__("ldx #0\nlda #<.bank(%v)", state_menu), __A__));
    state_menu();
    break;
   }



   case 0x02: {
    state_game();
    use_auto_chrswitch = 0;
    if (gameState == 0x03) forceNoFadeOut = 1;
    break;
   }
   case 0x03: {
    mmc3_set_prg_bank_1((__asm__("ldx #0\nlda #<.bank(%v)", state_lvldone), __A__));
    state_lvldone();
    break;
   }
   case 0xF0: {
    mmc3_set_prg_bank_1((__asm__("ldx #0\nlda #<.bank(%v)", state_funsettings), __A__));
    state_funsettings();
    break;
   }
   case 0xF1: {
    mmc3_set_prg_bank_1((__asm__("ldx #0\nlda #<.bank(%v)", state_instructions), __A__));
    state_instructions();
    break;
   }
   case 0x06: {
    mmc3_set_prg_bank_1((__asm__("ldx #0\nlda #<.bank(%v)", state_levelselect), __A__));
    state_levelselect();
    break;
   }
   case 0x08: {
    mmc3_set_prg_bank_1((__asm__("ldx #0\nlda #<.bank(%v)", state_customize), __A__));
    state_customize();
    break;
   }
#line 143 "SAUCE/famidash.c"
   case 0x07: {
    mmc3_set_prg_bank_1((__asm__("ldx #0\nlda #<.bank(%v)", state_settings), __A__));
    state_settings();
    break;
   }
#line 160 "SAUCE/famidash.c"
   default: {
    mmc3_set_prg_bank_1((__asm__("ldx #0\nlda #<.bank(%v)", state_credits), __A__));
    state_credits();



    break;
   }


  }
  framerate = trueFramerate;
  cpuRegion = trueCpuRegion;
  fullRegion = trueFullRegion;
  (++auto_fs_updates);
  if (!forceNoFadeOut) (_pal_fade_to((0<<8)|(((4)&0xFF))));
  mmc3_disable_irq();
  ppu_off();
  if (forceNoFadeOut) flush_vram_update2();
    }
}

void setdefaultoptions() {

 (*(uint8_t*) (0xA001) = (0x80));


 color_emphasis(0xe0);
 mmc3_disable_irq();

 (((const void ** const)xargs)[0] = (uint8_t *)0x6000, (__AX__ = (uintptr_t)0x1FFE, __EAX__<<=16), __A__ = 0, _memfill(__EAX__));
 (_edit_irq_table(0xff|(0<<8)));


 color_emphasis(0x00);



 SRAM_VALIDATE[0] = 0x13;
 SRAM_VALIDATE[1] = 0x37;
 SRAM_VALIDATE[2] = 0x24;
 forced_credits = 1;


 twoplayer = 0;





 options = 0;
 tmp2 = 0;
 do {
  coin1_obtained[tmp2] = 0;
  coin2_obtained[tmp2] = 0;
  coin3_obtained[tmp2] = 0;
  LEVELCOMPLETE[tmp2] = 0;
  level_completeness_normal[tmp2] = 0;
  (&level_completeness_normal[0x80])[tmp2] = 0;
 } while (++tmp2 < (0x80));
 tmp2 = 0;
 do {
  achievements[tmp2] = 0;
 } while (++tmp2 < (sizeof(achievements)));
 invisible = 0;
 icon_colors[0] = 0x2A;
 icon_colors[1] = 0X2C;
 icon_colors[2] = 0x0F;
 discomode = 0;
 icon = 0;
 trails = 0;
 retro_mode = 0;

 gameboy_mode = 0;
 viseffects = 1;
 invisblocks = 0;
 cam_seesaw = 0;
 menu_music = 0;

 auto_practicepoints = 1;
 practice_music_sync = 0;

 return;
}
