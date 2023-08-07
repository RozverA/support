int prog()
{
	int fork;
	prt_ln();
	printf("\n0 - Exit.\n");
	printf("1 - Byte operations.\n");
	printf("	12 - Byte mask operation.\n");
	printf("	13 - Byte >>, << .\n");
	printf("	14 - verification conditions (if).\n");
	printf("2 - Pointer.\n");
	printf("	21 - Pointer: double pointer.\n");
	printf("	22 - Pointer: with funx.\n");
	printf("3 - struct.\n");
	printf("4 - comparison operations(Empty)\n");
	printf("5 - Git\n");
	printf("	51 - Git init\n");
	printf("		511 - On new OS/PC need add new SSH key\n");
	printf("	52 - Git commits\n");
	printf("100 - printf help.\n");
	printf("Popular abbreviare:\n");
	printf("	1011 - popular abbreviare - ABCDEFG.\n");
	printf("	1012 - popular abbreviare - GHIJKLMNO.\n");
	printf("	1013 - popular abbreviare - OPQRS.\n");
	printf("	1014 - popular abbreviare - STUVW.\n");
	printf("102 - help manual compille.\n");
	printf("\n cmd 1091 - compille to exe(only on linux).\n");
	printf("Programm N...\n");
	scanf("%d",&fork);
	return fork;
}
