#include<stdio.h>
#include<conio.h>



void main(){
  
 int no,sq;
 char ch;

 do
 { printf("enter no:");
 scanf("%d",&no);
  sq=no*no;
  printf("the no:%d",sq);
  printf("continu to yes...");
  scanf("%s",&ch);
    
 } while (ch=='y');
 
  

}