/*
 *  #r1c000: new file
 */

#pragma once

#ifdef _MSC_VER
#undef strdup
#define strdup _strdup
#endif

#if defined(BAS55PICO) || defined(WINBAS55)
#undef main
#define main bas55_main
int bas55_main(int argc, char *argv[]);

#define  CON_STDIO_OVERRIDES
#include "conio.h"

#endif




// config_add.h