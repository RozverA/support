#include "test.h"

int i,j,a,b;
BYTE b_1, b_2, b_3;

void f1(int* ptr)
{
	*ptr = *ptr + 20;
}

void f2(int* dst,int* src,int len)
{
	for(i = 0;i < len; i++) {*dst++ = *src++;}
}

void pointer_with_funx()
{
	prt_ln();
	printf("Pointers with funx:\n");
	a = 11;
	int* p = &a;
	f1(p); 
	printf("\n\na = 11;\nint* p = &a;\nf1(p);\n\nvoid f1(*int ptr)\n{\n	*ptr = *ptr + 20;\n	return 0;\n}\n");
	printf("a = %d\n",a);
	
	char c = 31;
	f1((int*)&c);
	printf("\n\nchar c = 31;\nf1((int*)c);\n\nvoid f1(*int ptr)\n{\n	*ptr = *ptr + 20;\n	return 0;\n}\n");
	printf("c = %d\n",c);
	
	int massive_1[16];
	int massive_2[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
	f2(massive_1, massive_2, 16);
	printf("\n\nint massive_1[16];\nint massive_2[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};\n");
	printf("f2(massive_1, massive_2, 16);\n\nvoid f2(int* dst,int* src,int len)");
	printf("\n{\n	for(i = 0;i < len; i++) {*dst++ = *src++;}\n	return 0;\n}\n");
	printf("massive_1 = {");
	for (i = 0; i < 16; i++) {printf("%d ",massive_1[i]);}
	printf("}\n");
	
	
}

void pointer_double()
{
	prt_ln();
	printf("Pointers double definition:\n");
	a = 0;
	int* p = &a;
	int** p2 = &p;
	printf("\n\na = 0;\nint* p = &a;\nint** p2 = &p;\n");
	printf("p = %p(address a), p2 = %p(address p)\n",p,p2);
	printf("*p = %d(value a), *p2 = %p(address a), **p2 = %d(value a)\n",*p,*p2,**p2);
	
	
	a = 10;
	printf("\n\na = 10;\n");
	printf("p = %p(address a), p2 = %p(address p)\n",p,p2);
	printf("*p = %d(value a), *p2 = %p(address a), **p2 = %d(value a)\n",*p,*p2,**p2);
	
	int******** p3;
	printf("\n\nint******** p3; - it`s possible\n");
	
}

void pointer()
{
	prt_ln();
	printf("Pointers definition:\n");
	int* p;
	a = 1;
	b = 2;
	p = &a;
	printf("int* p;\na = 1;\nb = 2;\np = &a;\n");
	printf("p = %p, *p = %d\n",p,*p);
	*p = *p + 2;
	printf("Pointers plus value:\n");
	printf("*p = *p + 2;\n");
	printf("a = %d, *p = %d\n",a,*p);
	printf("\n\nPointers with massive:\n");
	
	int c[] = {1,2,3,4,5,6,7,8};
	int* p2 = c;
	p = &c[0];
	printf("int c[] = {1,2,3,4,5,6,7,8};\np2 = c;\np = &c[0];\n");
	printf("p2 = %p, p = %p\n",p2,p);
	printf("*p2 = %d, *p = %d\n",*p2,*p);
	
	p = &c[4];
	*p = 10;
	printf("\n\np = &c[4];\n*p = 10;\n");
	printf("p2 = %p, p = %p\n",p2,p);
	printf("*p2 = %d, *p = %d\n",*p2,*p);
	p2 = p2 + 4;
	printf("\np2 = p2 + 4;\n");
	printf("p2 = %p, p = %p\n",p2,p);
	printf("*p2 = %d, *p = %d\n",*p2,*p);
	
	char* p3 = c;
	p2 = c;
	printf("\n\nchar* p3 = c;\np2 = c;\n");
	printf("p2 = %p, p30 = %p\n",p2,p3);
	printf("*p2 = %d, *p3 = %d\n",*p2,*p3);
	c[0] = 3967;
	printf("\n\nc[0] = 3967, 0000 1111 0111 1111;\n");
	printf("p2 = %p, p3 = %p\n",p2,p3);
	printf("*p2 = %d, *p3 = %d\n",*p2,*p3);
	printf("*p2(binary) = 0000 1111 0111 1111, *p3(binary) = 0111 1111\n");
	p3 = p3 + 1;
	p2 = p2 + 1;
	printf("\n\np3 = p3 + 1;\np2 = p2 + 1;\n");
	printf("p2 = %p, p3 = %p\n",p2,p3);
	printf("*p2 = %d(two element massive), *p3 = %d(0000 1111)\n",*p2,*p3);
	printf("0000 1111 - is two bit in c[0](first element massive\n");
}
