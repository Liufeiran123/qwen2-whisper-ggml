#ifndef __SKIP_INTERNAL_FATBINARY_HEADERS
#include "fatbinary_section.h"
#endif
#define __CUDAFATBINSECTION  ".nvFatBinSegment"
#define __CUDAFATBINDATASECTION  ".nv_fatbin"
asm(
".section .nv_fatbin, \"a\"\n"
".align 8\n"
"fatbinData:\n"
".quad 0x00100001ba55ed50,0x0000000000000cf0,0x0000004001010002,0x00000000000002d0\n"
".quad 0x0000000000000000,0x0000003400010007,0x0000000000000000,0x0000000000000011\n"
".quad 0x0000000000000000,0x0000000000000000,0x33010102464c457f,0x0000000000000007\n"
".quad 0x0000007a00be0002,0x0000000000000000,0x0000000000000260,0x0000000000000120\n"
".quad 0x0038004000340534,0x0001000500400002,0x7472747368732e00,0x747274732e006261\n"
".quad 0x746d79732e006261,0x746d79732e006261,0x78646e68735f6261,0x7466752e766e2e00\n"
".quad 0x2e007972746e652e,0x006f666e692e766e,0x2e6c65722e766e2e,0x00006e6f69746361\n"
".quad 0x617472747368732e,0x61747274732e0062,0x61746d79732e0062,0x61746d79732e0062\n"
".quad 0x0078646e68735f62,0x2e7466752e766e2e,0x6e2e007972746e65,0x2e006f666e692e76\n"
".quad 0x612e6c65722e766e,0x0000006e6f697463,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0004000300000040,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000073,0x3605002511000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000300000001,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000040,0x000000000000004f,0x0000000000000000\n"
".quad 0x0000000000000001,0x0000000000000000,0x000000030000000b,0x0000000000000000\n"
".quad 0x0000000000000000,0x000000000000008f,0x000000000000004f,0x0000000000000000\n"
".quad 0x0000000000000001,0x0000000000000000,0x0000000200000013,0x0000000000000000\n"
".quad 0x0000000000000000,0x00000000000000e0,0x0000000000000030,0x0000000200000002\n"
".quad 0x0000000000000008,0x0000000000000018,0x7000000b00000040,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000110,0x0000000000000010,0x0000000000000000\n"
".quad 0x0000000000000008,0x0000000000000008,0x0000000500000006,0x0000000000000260\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000070,0x0000000000000070\n"
".quad 0x0000000000000008,0x0000000500000001,0x0000000000000260,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000070,0x0000000000000070,0x0000000000000008\n"
".quad 0x0000004001010002,0x00000000000002d0,0x0000000000000000,0x0000003d00010007\n"
".quad 0x0000000000000000,0x0000000000000011,0x0000000000000000,0x0000000000000000\n"
".quad 0x33010102464c457f,0x0000000000000007,0x0000007a00be0002,0x0000000000000000\n"
".quad 0x0000000000000260,0x0000000000000120,0x00380040003d053d,0x0001000500400002\n"
".quad 0x7472747368732e00,0x747274732e006261,0x746d79732e006261,0x746d79732e006261\n"
".quad 0x78646e68735f6261,0x7466752e766e2e00,0x2e007972746e652e,0x006f666e692e766e\n"
".quad 0x2e6c65722e766e2e,0x00006e6f69746361,0x617472747368732e,0x61747274732e0062\n"
".quad 0x61746d79732e0062,0x61746d79732e0062,0x0078646e68735f62,0x2e7466752e766e2e\n"
".quad 0x6e2e007972746e65,0x2e006f666e692e76,0x612e6c65722e766e,0x0000006e6f697463\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0004000300000040\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000073,0x3605002511000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000300000001,0x0000000000000000,0x0000000000000000,0x0000000000000040\n"
".quad 0x000000000000004f,0x0000000000000000,0x0000000000000001,0x0000000000000000\n"
".quad 0x000000030000000b,0x0000000000000000,0x0000000000000000,0x000000000000008f\n"
".quad 0x000000000000004f,0x0000000000000000,0x0000000000000001,0x0000000000000000\n"
".quad 0x0000000200000013,0x0000000000000000,0x0000000000000000,0x00000000000000e0\n"
".quad 0x0000000000000030,0x0000000200000002,0x0000000000000008,0x0000000000000018\n"
".quad 0x7000000b00000040,0x0000000000000000,0x0000000000000000,0x0000000000000110\n"
".quad 0x0000000000000010,0x0000000000000000,0x0000000000000008,0x0000000000000008\n"
".quad 0x0000000500000006,0x0000000000000260,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000070,0x0000000000000070,0x0000000000000008,0x0000000500000001\n"
".quad 0x0000000000000260,0x0000000000000000,0x0000000000000000,0x0000000000000070\n"
".quad 0x0000000000000070,0x0000000000000008,0x0000004001010002,0x0000000000000328\n"
".quad 0x0000000000000000,0x0000004600010007,0x0000000000000000,0x0000000000000011\n"
".quad 0x0000000000000000,0x0000000000000000,0x33010102464c457f,0x0000000000000007\n"
".quad 0x0000007a00be0002,0x0000000000000000,0x00000000000002b8,0x0000000000000138\n"
".quad 0x0038004000460546,0x0001000600400002,0x7472747368732e00,0x747274732e006261\n"
".quad 0x746d79732e006261,0x746d79732e006261,0x78646e68735f6261,0x7466752e766e2e00\n"
".quad 0x2e007972746e652e,0x006f666e692e766e,0x665f67756265642e,0x766e2e00656d6172\n"
".quad 0x7463612e6c65722e,0x68732e00006e6f69,0x2e00626174727473,0x2e00626174727473\n"
".quad 0x2e006261746d7973,0x735f6261746d7973,0x766e2e0078646e68,0x746e652e7466752e\n"
".quad 0x692e766e2e007972,0x6265642e006f666e,0x656d6172665f6775,0x6c65722e766e2e00\n"
".quad 0x006e6f697463612e,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x000500030000004d,0x0000000000000000,0x0000000000000000,0x0000000000000073\n"
".quad 0x3605002511000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000300000001,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000040,0x000000000000005c,0x0000000000000000,0x0000000000000001\n"
".quad 0x0000000000000000,0x000000030000000b,0x0000000000000000,0x0000000000000000\n"
".quad 0x000000000000009c,0x000000000000005c,0x0000000000000000,0x0000000000000001\n"
".quad 0x0000000000000000,0x0000000200000013,0x0000000000000000,0x0000000000000000\n"
".quad 0x00000000000000f8,0x0000000000000030,0x0000000200000002,0x0000000000000008\n"
".quad 0x0000000000000018,0x0000000100000040,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000128,0x0000000000000000,0x0000000000000000,0x0000000000000001\n"
".quad 0x0000000000000000,0x7000000b0000004d,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000128,0x0000000000000010,0x0000000000000000,0x0000000000000008\n"
".quad 0x0000000000000008,0x0000000500000006,0x00000000000002b8,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000070,0x0000000000000070,0x0000000000000008\n"
".quad 0x0000000500000001,0x00000000000002b8,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000070,0x0000000000000070,0x0000000000000008,0x0000004001010002\n"
".quad 0x0000000000000328,0x0000000000000000,0x0000004b00010007,0x0000000000000000\n"
".quad 0x0000000000000011,0x0000000000000000,0x0000000000000000,0x33010102464c457f\n"
".quad 0x0000000000000007,0x0000007a00be0002,0x0000000000000000,0x00000000000002b8\n"
".quad 0x0000000000000138,0x00380040004b054b,0x0001000600400002,0x7472747368732e00\n"
".quad 0x747274732e006261,0x746d79732e006261,0x746d79732e006261,0x78646e68735f6261\n"
".quad 0x7466752e766e2e00,0x2e007972746e652e,0x006f666e692e766e,0x665f67756265642e\n"
".quad 0x766e2e00656d6172,0x7463612e6c65722e,0x68732e00006e6f69,0x2e00626174727473\n"
".quad 0x2e00626174727473,0x2e006261746d7973,0x735f6261746d7973,0x766e2e0078646e68\n"
".quad 0x746e652e7466752e,0x692e766e2e007972,0x6265642e006f666e,0x656d6172665f6775\n"
".quad 0x6c65722e766e2e00,0x006e6f697463612e,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x000500030000004d,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000073,0x3605002511000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000300000001,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000040,0x000000000000005c,0x0000000000000000\n"
".quad 0x0000000000000001,0x0000000000000000,0x000000030000000b,0x0000000000000000\n"
".quad 0x0000000000000000,0x000000000000009c,0x000000000000005c,0x0000000000000000\n"
".quad 0x0000000000000001,0x0000000000000000,0x0000000200000013,0x0000000000000000\n"
".quad 0x0000000000000000,0x00000000000000f8,0x0000000000000030,0x0000000200000002\n"
".quad 0x0000000000000008,0x0000000000000018,0x0000000100000040,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000128,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000001,0x0000000000000000,0x7000000b0000004d,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000128,0x0000000000000010,0x0000000000000000\n"
".quad 0x0000000000000008,0x0000000000000008,0x0000000500000006,0x00000000000002b8\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000070,0x0000000000000070\n"
".quad 0x0000000000000008,0x0000000500000001,0x00000000000002b8,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000070,0x0000000000000070,0x0000000000000008\n"
".text\n");
#ifdef __cplusplus
extern "C" {
#endif
extern const unsigned long long fatbinData[416];
#ifdef __cplusplus
}
#endif
#ifdef __cplusplus
extern "C" {
#endif
static const __fatBinC_Wrapper_t __fatDeviceText __attribute__ ((aligned (8))) __attribute__ ((section (__CUDAFATBINSECTION)))= 
	{ 0x466243b1, 1, fatbinData, 0 };
#ifdef __cplusplus
}
#endif
