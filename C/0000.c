#include<stdio.h>
#include<conio.h>
#include<ctype.h>



void main(){
  char en,text,result,result1;
  
  printf("ok st...");
  printf("text");
  scanf("%s",&text);
  printf("case");
  scanf("%s",&en);

  switch (en)
  {
   case 1:
   result1=toupper(text);
    printf("end::%s",result1);
  
    break;
  
  default:
  printf("valid ni\n");
    break;
  }
  
}