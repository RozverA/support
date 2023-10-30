#include "test.h"


void main ()
{
BYTE buf[10];
DWORD alfa = 50510;
num_to_byte(alfa,DW_LEN,&buf[0],L_SIDE);
for(int i = 0; i < 10; i++) {printf("N %d - %d\n", i, buf[i]);}
DWORD omega = num_aus_byte(DW_LEN, &buf[0], L_SIDE);
printf("\nOmega = %d", omega);


	while(1)
	{
		BYTE ch = 1;
		switch(prog(menu_mm))
		{
			default:
				return;
			break;
			case 1:
				while(ch){ch = c_lang();}
			break;
			case 2:
				while(ch){ch = git_menu();}
			break;
			case 3:
				printf("dont work");
			break;
			case 4:
				while(ch){ch = abr_menu();}
				
			break;
			case 5:
				while(ch){ch = cmd_menu();}
			break;
		}
	}
}
