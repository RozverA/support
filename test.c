#include <stdio.h>
#include "h/test.h"

//gcc test.c -o test
//x86_64-w64-mingw32-gcc -o test.exe test.c

int i,j,a,b;
BYTE b_1, b_2, b_3;

void main ()
{
	while(1){
		switch(prog())
		{
			case 1:
				bit_value();
			break;
			case 12:
				bit_mask();
			break;
			case 13:
				byte_move();
			break;
			case 14:
				verification_conditions();
			break;
			case 2:
				pointer();
			break;
			case 21:
				pointer_double();
			break;
			case 22:
				pointer_with_funx();
			break;
			case 3:
				structure();
			break;
			case 5:
				git();
			break;
			case 51:
				git_init();
			break;
			case 52:
				git_commits();
			break;
			case 100:
				printf("\n________________________________\n");
				printf("%%u - unsigned integer\n");
				printf("%%x - hexadecimal value\n");
				printf("%%p - void pointer\n");	
			break;
			case 1011:
				abbreviare_1();
			break;
			case 1012:
				abbreviare_2();
			break;
			case 1013:
				abbreviare_3();
			break;
			case 1014:
				abbreviare_4();
			break;
			case 102:
				printf("\n________________________________\n");
				printf("gcc test.c -o test\n");
				printf("x86_64-w64-mingw32-gcc -o test.exe test.c\n");
			break;
			case 1091:
				printf("\n________________________________\n");
				system("x86_64-w64-mingw32-gcc -o support.exe test.c");
				printf("Compille finish!\n");
			break;
			case 0:
				return;
			break;
		}
	}
}



void structure()
{
	printf("________________________________\n");
	printf("Structure\n\n");
	
	printf("in header file\n");
	printf("typedef struct\n");
	printf("{\n");
	printf("	int 		one;\n");
	printf("	char	 	two[10];\n");
	printf("	BYTE 		flag1: 1;\n");
	printf("	BYTE 		flag2: 1;\n");
	printf("	BYTE 		others:6;\n");
	printf("}STRCT;\n");
	printf("extern STRCT str;\n");
	printf("\nin source file\n");
	
	STRCT str;
	str.one = 10;
	str.two[2] = *(char*)&str.one;
	str.flag1 = 1;
	str.others = 40;
	
	printf("STRCT str;\n");
	printf("str.one = 10;//%d\n",str.one);
	printf("str.two[2] = str.one;//%d\n",str.two[2]);
	printf("str.flag1 = 1;//%d\n",str.flag1);
	printf("str.others = 40;//%d\n",str.others);
	
	STRCT* str_ptr = &str;
	str_ptr->one = 11;
	printf("STRCT* str_ptr = &str;\n");
	printf("str_ptr->one = 11;\n");
	printf("str_ptr->one = %d;\n",str_ptr->one);
	
}

















