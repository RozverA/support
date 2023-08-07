
int i,j,a,b;
BYTE b_1, b_2, b_3;
BYTE pos = 1;

BYTE give_flag(BYTE byte, BYTE pos)
{
	BYTE rtn = ((byte >> pos) & 0x01);
	return rtn;
}

BYTE set_flag(BYTE *byte, BYTE pos)
{
	*byte = ((*byte) | (0x01 << pos));
}

BYTE clr_flag(BYTE *byte, BYTE pos)
{
	*byte = *byte & (0xFF - (0x01 << pos));
}

void verification_conditions()
{
	prt_ln();
	i = 5;
	printf("i = 5\n");
	printf("while (i) {printf(\"i = %%d - this TRUE\",i); i--;}\n");
	printf("printf(\"i = %%d - this FALSE\",i);\n\n");
	while (i) {printf("i = %d - this TRUE\n",i); i--;}
	printf("i = %d - this FALSE\n",i);

	i = -5;
	printf("i = -5\n");
	printf("while (i) {printf(\"i = %%d - this TRUE\",i); i--;}\n");
	printf("printf(\"i = %%d - this FALSE\",i);\n\n");
	while (i) {printf("i = %d - this TRUE\n",i); i++;}
	printf("i = %d - this FALSE\n",i);

	printf("\n(i) equivalent to (i == 0) \n");

	printf("\nif we use \"!\":\n");

	i = 0;
	printf("i = 0\n");
	printf("while (!i) {printf(\"i = %%d - this TRUE\",i); i--;}\n");
	printf("printf(\"i = %%d - this FALSE\",i);\n\n");
	while (!i) {printf("i = %d - this TRUE\n",i); i--;}
	printf("i = %d - this FALSE\n",i);
	printf("\n(i) equivalent to (i != 0) \n");
}

void bit_mask()
{
	prt_ln();
	b_1 = 2;
	printf("\nread flag\nb_1 = %d, b_1 = 00000010\n",b_1);
	b_2 = 1;
	printf("b_2 = %d, b_2 = 00000001\n",b_2);
	b_3 = 0;
	printf("b_3 = %d, b_3 = 00000000\n",b_3);
	b_3 = give_flag(b_1, pos);
	printf("((b_1 >> b_2) & 0x01  =  b_3\n");
	printf("b_3 = %d, b_3 = 00000001\n\nset flag\n",b_3);
	
	b_3 = 4;
	printf("b_3 = %d,  b_3 = 00000100\n",b_3);
	set_flag(&b_1, b_3);
	printf("((b_1) | (0x01 << b_3))  =  b_1\n");
	printf("b_1 = %d, b_1 = 00010010\n",b_1);
	
	printf("\nclear flag\nb_1 = %d, b_1 = 00010010\n",b_1);
	clr_flag(&b_1, b_3);
	printf("b_1 = b_1 & (0xFF - (0x01 << b_3));\n");
	printf("b_1 = %d,  b_1 = 00000010\n",b_1);
}

void bit_value()
{
	prt_ln();
	a = 2;
	b = 4;
	printf("a(%d) >> 1 = %d\n",a,a>>1);
	printf("000010 >> 000001\n");
	printf("b(%d) >> 1 = %d\n",b,b>>1);
	printf("000100 >> 000010\n");
	
	printf("a(%d) << 1 = %d\n",a,a<<1);
	printf("000010 << 000100\n");
	printf("b(%d) << 1 = %d\n",b,b<<1);
	printf("000100 << 001000\n");
	
	a = 60;
	printf("\nNext (|, &):\na = 60, a = 00111100\n");
	b = 12;
	printf("b = 12, b = 00001100\n");
	printf("a(%d) | b(%d) = %d, 00111100\n",a,b,a|b);
	printf("a(%d) & b(%d) = %d, 00001100\n",a,b,a&b);
	a = 40;
	printf("\na = %d, a = 00101000\n",a);
	printf("b = %d, b = 00001100\n",b);
	printf("a(%d) | b(%d) = %d, 00101100\n",a,b,a|b);
	printf("a(%d) & b(%d) = %d, 00001000\n",a,b,a&b);

}

void byte_move()
{
	prt_ln();
	i = 0x68;
	printf("i = 0x%x(01101000)\n",i);
	i = i >> 3;
	printf("i >> 3 = 0x%x(00001101)\n",i);
	b_1 = 0x68;
	printf("b_1 = 0x%x(01101000)\n",i);
	b_1 = b_1 >> 3;
	printf("b_1 >> 3 = 0x%x(00001101)\n",i);
}


