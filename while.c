#include<stdio.h>
int main()
{
int num,i;
printf(" enter no");
scanf("%d",&num);

i=2;
while (i<=num-1)
{
    if (num % i==0)
    {
        printf("not prime no\n");
        break;/* code */
    }
    i++;/* code */
}
if (i==num)
printf("prime no");


    }