#include <stdio.h>

int main()

{
	int i=2,num;
	printf("\n Enter any number : ");
	scanf("\n%d",&num);
	
	while (i<num)
	{
	if(num%i==0)
		{
		printf("\n Enter number is not a prime:");
		break;
		}
		i++;
	
	}
	
		if(num==i)
	printf("\n Enter number is prime number :");
	
	
}
	
