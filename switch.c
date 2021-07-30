#include<stdio.h>
int main()
{
  int a,b,c,d;
  printf("\n Enter the choice :");
scanf("%d",&c);
  switch(c)
  
  {
  case 1:
  printf("enter the values of a and b");
  scanf("%d%d",&a,&b);
  d=a+b;
  printf("\n addition =%d",d);
  break;
  
  case 2:
   printf("enter the values of a and b");
  scanf("%d%d",&a,&b);
  d=a-b;
  printf("\n substraction =%d",d);
  break;
  
  default :
  printf("\n you entered wrong choice.");
  
  }
}
  