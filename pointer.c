#include <stdio.h>

int main()

{
int a=10;
int b=20;
int c;

int *p;
int *q;

p=&a;
q=&b;

c=*p + *q;

printf("\n Addition : %d",c);

return 0;


}
