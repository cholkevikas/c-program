#include <stdio.h>

int main()

{
  
  int km,m,cm,mm;
  
  printf("\n Enter distance in km : ");
  scanf("\n%d",&km);
  
  m=km*1000;
  cm=m*100;
  mm=cm*10;
  
  printf("\nm :%d \ncm :%d \nmm :%d",m,cm,mm);
  
  return 0;
  
}

/*
C:\Users\SAINATH\OneDrive\Desktop\Program\c_program>gcc km.c

C:\Users\SAINATH\OneDrive\Desktop\Program\c_program>gcc -o km km.c

C:\Users\SAINATH\OneDrive\Desktop\Program\c_program>km

 Enter distance in km : 50

m :50000
cm :5000000
mm :50000000
C:\Users\SAINATH\OneDrive\Desktop\Program\c_program>

*/