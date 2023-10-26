#include "test.h"

BYTE cmd_menu()
{
	switch(prog(menu_cmd))
	{
		case 1:
			prt_ln();
			printf("%%u - unsigned integer\n");
			printf("%%x - hexadecimal value\n");
			printf("%%p - void pointer\n");	
		break;
		case 2:
			prt_ln();
			printf("gcc test.c -o test\n");
			printf("x86_64-w64-mingw32-gcc -o test.exe test.c\n");
		break;
		case 109:
			prt_ln();
			if (!protect()) {break;}
			system("x86_64-w64-mingw32-gcc -o support.exe test.c");
			printf("Compille finish!\n");
		break;
		default:
			
		return 0;
	}
	return 1;
}

void prt_ln()
{
	printf("\n_______________________________________________PART_________________________________________________\n");
}

int protect()
{
	int pass;
	printf("Protected!\nPassword: \n");
	scanf("%d",&pass);
	if(pass != 1095) {return 0;}
	return 1;
}