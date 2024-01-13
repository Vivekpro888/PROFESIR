#include<stdio.h>
#include<conio.h>
void main(){

 char ch;
 
 printf("you are student(y/n)");
 scanf("%c",&ch);


 
    
  struct school
  {
    char name[1][10];
    int price;
    int pages;

  };
  struct school s1,s2,s3;
  printf("\n enter name,price & no of pges\n");
  scanf("%s%d%d",&s1.name[0],&s2.price,&s3.pages);
  printf("\n\n\t school detail");
  printf("\t1.\n\tname:\t%S\n\tprice:%d\n\tpges%d\n",s1.name[0],s2.price,s3.pages);
  
    
 
 
 
}