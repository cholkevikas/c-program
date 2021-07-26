#include <stdio.h>

void swap();
int main()
{

   swap();

}

void swap()
{
int a=10, b=20, t;
int *p, *q;

p=&a;
q=&b;
{
printf("\n before swap \na:%d \nb:%d",a,b);
}

t=*p;
*p=*q;
*q=t;
{
printf("\n after swap \na:%d \nb:%d",a,b);
}
}
