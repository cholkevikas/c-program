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

