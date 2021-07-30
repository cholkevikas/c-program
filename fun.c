#include <stdio.h>
int main()
{
 int a=5, b=10 ,c;
  fun1(&a,&b,&c);

}

void fun1(int*p,int*q,int*c)
{
 
 c=*p+*q;
 printf("\n addtion=%d",c);

}
