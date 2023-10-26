#ifndef TEST_H_
#define TEST_H_

#define menu_mm 		109
#define menu_c_syn 		1
#define menu_git 		2
#define menu_abriv 		4
#define menu_cmd 		5

typedef unsigned char  BYTE;
typedef unsigned short WORD;
typedef unsigned int   DWORD;

#define err_no 200

#include <string.h>
#include <stdlib.h>
#include <stdio.h>


#include "pointer.c"
#include "byte.c"
#include "partition.c"
#include "define.c"
#include "git.c"
#include "abr.c"
#include "cmd.c"



	BYTE c_lang();
void byte_move();
void bit_value();
void bit_mask();
void verification_conditions();
void pointer();
void pointer_with_funx();
void pointer_double();
void structure();
void define_table();

	BYTE git_menu();
void git_commits();
void git();
void git_init();
void git_connect();
void git_ssh();

	BYTE abr_menu();
void abbreviare_1();
void abbreviare_2();
void abbreviare_3();
void abbreviare_4();

BYTE 	cmd_menu();
int 	prog(int menu);
void 	prt_ln();
int 	protect();

BYTE give_flag	(BYTE  byte, BYTE pos);
BYTE set_flag	(BYTE* byte, BYTE pos);
BYTE clr_flag	(BYTE* byte, BYTE pos);

#endif /* TEST_H_ */
