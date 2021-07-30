#include <stdio.h>

int main()

{
  
  int num;
  
  printf("Enter number :");
  scanf("%d",&num);
  
  if(num>0)
  printf("\n number is positive");
  
  if(num<0)
  printf("\n number is negative");
  
  else if(num==0)
  printf("\n number is neutral");
  
  return 0;
  
}