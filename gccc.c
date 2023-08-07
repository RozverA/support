#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
    printf("\n________________________________Start________________________________\n");
    system("gcc test.c -o test");
    int a = system("ls test");
    if (a == 0) {printf("_______________________________Success_______________________________\n");} 
    else 		{printf("_______________________________Failure_______________________________\n");}
    printf("_________________________________End_________________________________\n");
}
