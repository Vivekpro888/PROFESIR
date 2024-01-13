#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<math.h>


void main(){

 int result,choice;
 float n1,n2;
 int n3,n4;
 
 

 
 
 printf("floor\n");
 printf("cieal\n");
 printf("power\n");
 printf("squrt\n");
 printf("choice omly 1-4...\n");
 printf("enter choice only one:");

 scanf("%d",&choice);

   switch (choice)
   {
   case 1:
    printf("enter value:");
    scanf("%f",&n1);
    int b=floor(n1);
    printf("result==%d",b);
     break;
     case 2:
     printf("ent val:");
     scanf("%f",&n1);
     double g=ceil(n1);
     printf("result val:%lf",g);
     break;
     case 3:
     printf("enter no:");
     scanf("%d",&n3);

      printf("power:");
      scanf("%d",&n4);
      int pow=powf(n3,n4);
      printf("result power:%d",pow);
      break;

      case 4:
      printf("enter noo:");
      scanf("%d",&n4);
     int sq= sqrt(n4);
     printf("resit sq:%d",sq);
        break;

    default :
   printf("invalid syntex");
      break;
   }

  
}
