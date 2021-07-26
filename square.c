#include <stdio.h>

int main()

{

	int n,i,sum=0;
	printf("\n Enter the range : ");
	scanf("\n%d",&n);
	
	for(i=1;i<=n;i++)
	{
	
	printf("\n%d",i);
	sum=sum+i;
	
	}
	printf("\n sum of number : %d",sum);
	
}
