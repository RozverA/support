#ifndef TEST_H_
#define TEST_H_

typedef unsigned char  BYTE;
typedef unsigned short WORD;
typedef unsigned int   DWORD;

#include <string.h>
#include <stdlib.h>
#include "../s/pointer.c"
#include "../s/byte.c"
#include "../s/partition.c"
#include "../s/define.c"
#include "../s/git.c"
#include "../s/abr.c"


typedef struct
{
	int 		one;
	char 		two[10];
	BYTE 		flag1: 1;
	BYTE 		flag2: 1;
	BYTE 		others:6;
}STRCT;

extern STRCT str;

void byte_move();
void bit_value();
void bit_mask();
void verification_conditions();

void pointer();
int  prog();
void pointer_with_funx();
void pointer_double();
void structure();

void git_commits();
void git();
void git_init();
void git_connect();
void git_ssh();

void abbreviare_1();
void abbreviare_2();
void abbreviare_3();
void abbreviare_4();

void prt_ln();

BYTE give_flag	(BYTE  byte, BYTE pos);
BYTE set_flag	(BYTE* byte, BYTE pos);
BYTE clr_flag	(BYTE* byte, BYTE pos);

#endif /* TEST_H_ */
