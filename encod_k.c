#include "test.h"

#define admin 		"0123456789abcdefhgijklmnopqrstuv"
//#define admin 		"admin"
#define CRYPTED 	1
#define DECRYPTED 	0

int main()
{
	BYTE str[32];
	memset(str,0,32);
	memcpy(str, admin, sizeof(admin)) ;
	pr32(str);
	printf("Original messege:\n");
	crypted(str);
	pr32(str);
	printf("Encode messege:\n");
	decrypted(str);
	pr32(str);
	printf("Decode messege:\n");

}

void crypted(BYTE* str)
{
	wave(str, CRYPTED);
	shell_game(str,CRYPTED);
}

void decrypted(BYTE* str)
{
	shell_game(str,DECRYPTED);
	wave(str, DECRYPTED);
}

void pr32(BYTE* ptr)
{
	printf("\npr32:\n");
	for(BYTE i = 0; i < 32; i++){printf("%x ", *ptr); ptr++;}
	printf("\n");
}

void wave(BYTE* ptr, BYTE mode)
{
	char plus;
	char sign = -1;
	if (mode == CRYPTED) {sign = 1;}
	for (BYTE i = 0; i < 32; i++)
	{
		BYTE step = i % 2;
		plus = ((32 - i) / 2) * sign;
		if (step) { *ptr -= plus; } else {* ptr += plus;}
		ptr++;
	}	
}

void shell_game(BYTE* ptr, BYTE mode)
{
	BYTE buf[32];
	BYTE region[8];
	BYTE lap = 0;
	BYTE cursour = 0;
	BYTE* debug = ptr;
	memcpy(buf, ptr, 32);
	if (mode == CRYPTED) {mode = 4;} else {mode = 1;}
	for (BYTE j = 0; j < mode; j++)
	{
		for (BYTE i = 0; i < (32 * mode); i++)
		{
			if (cursour > 31)	{lap++; cursour = lap;}
			*ptr = buf[cursour];
			ptr++;
			cursour += 8;
		}
		lap = 0;
		cursour = 0;
		ptr = debug;
		memcpy(buf, ptr, 32);
		//pr32(debug);
		//printf("	inn:\n");
	}
	
	
	





/*
	for (BYTE i = 0; i<32; i++)
	{
		if (i > 23) {step = i - 24;} else {step = i + 8;}
		buf[step] = *ptr;
		ptr++;
	}
	ptr -= 32;
	memcpy(ptr, buf, 32);*/
}