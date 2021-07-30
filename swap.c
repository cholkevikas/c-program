#include <stdio.h>

int main()

{
  
  int a, b, t;
  
  printf("Enter two numbers :");
  scanf("\n%d%d",&a,&b);
  
  t=a;
  a=b;
  b=t;
  
  printf("\nChanged numbers are: \na :%d \nb :%d",a,b);
  
  return 0;
  
}