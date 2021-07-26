#include <stdio.h>

int main()

{
	int i,j;
	char ch ='*';
	
	for(i=1;i<=5;i++)
	{
	for(j=1;j<=i;j++)
	{ 
	printf(" %c ",ch);
	}
	printf("\n");
	
	}
	return 0;
}

/*
output:

profound@profound-desktop:~/Desktop/brushup49$ gcc star.c
profound@profound-desktop:~/Desktop/brushup49$ ./a.out
 * 
 *  * 
 *  *  * 
 *  *  *  * 
 *  *  *  *  *
 */ 

