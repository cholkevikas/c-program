#include <stdio.h>

int main()

{
int km,m,cm,mm;

printf("enter distance in km : ");
scanf("%d",&km);

m=km*1000;
cm=m*100;
mm=cm*10;

printf("\nm: %d \ncm: %d \nmm: %d",m,cm,mm);

return 0;

}

