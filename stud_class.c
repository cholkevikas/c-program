#include <stdio.h>

int main()

{
	float m1,m2,m3,m4,m5,per;  
	
	printf("\n Enter 5 sub. marks : ");
	scanf("\n%f\n%f\n%f\n%f\n%f",&m1,&m2,&m3,&m4,&m5);
	
	per=(m1+m2+m3+m4+m5)/5;
	
	if(per>=75)
	printf("\n Distinction");
	
	else if(per<75 && per>=60)
	printf("\n first class");
	
	else if(per<60 && per>=45)
	printf("\n second class");
	
	else if(per<45 && per>=35)
	printf("\n third class");
	
	else
	printf("\n fail");
	
	return 0;
	
}
	
	
	
