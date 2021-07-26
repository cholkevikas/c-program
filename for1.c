#include <stdio.h>

int main()

{
	int i,j;
	char ch ='*';
	
	for(i=1;i<=5;i++)
	{
	for(j=1;j<=i;j++)
	{ 
	printf(" %d ",j);
	}
	printf("\n");
	
	}
	return 0;
}


/*

output :

profound@profound-desktop:~/Desktop/brushup49$ gcc for1.c
profound@profound-desktop:~/Desktop/brushup49$ ./a.out
 1 
 1  2 
 1  2  3 
 1  2  3  4 
 1  2  3  4  5 

*/
