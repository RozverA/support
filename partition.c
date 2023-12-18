#include "test.h"

int prog(int menu)
{
	int fork = 0;
	prt_ln();
	switch(menu)
	{
		case menu_mm:
			printf("\nDon't write letters! \n");
			printf("\n0 - Exit.\n");
			printf("1 - C language.\n");
			printf("2 - git.\n");
			printf("3 - reserv.\n");
			printf("4 - abbreviare.\n");
			//printf("51 - define table.\n");
			printf("5 - cmd block.\n");
		break;
		case menu_c_syn:
			printf("1 - Byte operations.\n");
			printf("	12 - Byte mask operation.\n");
			printf("	13 - Byte >>, << .\n");
			printf("	14 - verification conditions (if).\n");
			printf("2 - Pointer.\n");
			printf("	21 - Pointer: double pointer.\n");
			printf("	22 - Pointer: with funx.\n");
			printf("3 - struct.\n");
			printf("4 - comparison operations(Empty)\n");
			printf("0 - Back to main menu/n");
		break;
		case menu_git:
			printf("1 - Git\n");
			printf("	11 - Git init\n");
			printf("		111 - On new OS/PC need add new SSH key\n");
			printf("	12 - Git commits\n");
			printf("0 - Back to main menu/n");
		break;
		case menu_abriv:
			printf("Popular abbreviare:\n");
			printf("	1 - popular abbreviare - ABCDEFG.\n");
			printf("	2 - popular abbreviare - GHIJKLMNO.\n");
			printf("	3 - popular abbreviare - OPQRS.\n");
			printf("	4 - popular abbreviare - STUVW.\n");
			printf("0 - Back to main menu/n");
		break;
		case menu_cmd:
			printf("1 - printf help.\n");
			printf("2 - help manual compille.\n");
			printf("3 - HEX to 0xHEX\n");
			printf("cmd 109 - compille to exe(only on linux).\n");
			printf("0 - Back to main menu\n");
		break;
		default:
		return 1;
		
	}
	printf("\n");
	scanf("%d",&fork);	
	return fork;
}
