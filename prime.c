# include <stdio.h>

int main()

{
int  n,m,flag=0;

printf("\nEnter any number :");
scanf("\n%d",&n);

m=n/2;
for(int i=2;i<m;i++)

{
if(n%i==0)

{
flag=1;
break;
}

}
if(n==1)
{
printf("\n 1 is not prime nor composite");
}
else 
{
if(flag==0)
printf("\n%d is a prime number",n );

else
printf("\n%d is not a prime number",n );
}
return 0;
}
