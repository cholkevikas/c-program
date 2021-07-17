#include <stdio.h>

int main()

{
	int i,j;
	char ch ='*';
	
	for(i=5;i>=0;i--)
	{
	for(j=0;j<=i;j++)
	{ 
	printf(" %c ",ch);
	}
	printf("\n");
	
	}
	return 0;
}


/*

output:

profound@profound-desktop:~/Desktop/brushup49$ gcc char.c
profound@profound-desktop:~/Desktop/brushup49$ ./a.out
 *  *  *  *  *  * 
 *  *  *  *  * 
 *  *  *  * 
 *  *  * 
 *  * 
 * 
*/
