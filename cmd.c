#include "test.h"

void hex_funx()
{
	int i = 0;
	int size = 0;
	char str[1024];
	printf("Enter size: ");
	scanf("%d",&size);
	size += size;
	printf("Enter str: ");
	scanf("%s",str);
	printf("\nResult:\n");
	while(i<((size)-2))
	{
		printf("0x%c%c,",str[i],str[i+1]);
		i += 2;
	}
	printf("0x%c%c\n",str[i],str[i+1]);
}

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
		case 3:
			prt_ln();
			printf("rewrite HEX to 0xHEX\n");
			hex_funx();
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