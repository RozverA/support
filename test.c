#include "test.h"

void main ()
{
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
