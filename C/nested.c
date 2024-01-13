#include<stdio.h>
#include<conio.h>
void main(){

  char day;
  printf("day");
  scanf("%c",&day);
  switch (day)
  {
     case 1:
     printf("1day");
    break;


    case 2:
       printf("2day");
    break; 

    case 3:
    printf("3day");
    break;
  
  default:
   printf("good day");
    break;
  }

}