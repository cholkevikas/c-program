# include <stdio.h>

int main()

{
  char item[20];
  int nitem;
  float price;
  float tprice;
  float fprice;
  
  printf("\n Enter item name : ");
  scanf("\n%s",&item[20]);
  
  printf("\n Enter number of item : ");
  scanf("\n%d",&nitem);
  
  printf("\n Enter price of item : ");
  scanf("\n%f",&price);
 
  tprice=nitem*price;
  
  printf("\n Total price = %f\n",tprice);
 
  if(tprice>=1000)
  {
  fprice=tprice-(tprice*0.1);
 
  printf("\n Final price of item =%f\n",fprice);
  }
 
 
 return 0; 
}
  
  /*
  profound@profound-desktop:~/Desktop/brushup49$ gcc discount.c
profound@profound-desktop:~/Desktop/brushup49$ ./a.out

 Enter item name : pen

 Enter number of item : 100

 Enter price of item : 5

 Total price = 500.000000
profound@profound-desktop:~/Desktop/brushup49$ ./a.out

 Enter item name : pen

 Enter number of item : 100

 Enter price of item : 10

 Total price = 1000.000000

 Final price of item =900.000000
profound@profound-desktop:~/Desktop/brushup49$ 

*/
  
  
  
