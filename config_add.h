/*
 *  #r1c000: new file
 */

#pragma once

#ifdef _MSC_VER
#undef strdup
#define strdup _strdup
#endif

#ifdef BAS55PICO
#undef main
#define main bas55_main
int bas55_main(int argc, char *argv[]);
#endif


// config_add.h