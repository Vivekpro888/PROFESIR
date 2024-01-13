#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
    //requred variable

    int val1,val2,result,user_c;
 //understanding for viewer
 printf("choice only one option:\n 1.add\n2.sub\n3.mul\n4.div\n5.squrt\n6.pow\n");


 //use switch statment because having multiple task performed my user
  
 scanf("%d",&user_c);
 switch(user_c)
 {
    case 1:
    //take 1st val
    printf("enter 1st val to add:\n");
    scanf("%d",&val1);
    //take 2 val
    printf("enter 2nd val to add:");
    scanf("%d",&val2);
    //add
    result=val1+val2;
    printf("%d",result);
    break;

    case 2:
     //take 1st val
    printf("enter 1st val to sub:\n");
    scanf("%d",&val1);
    //take 2 val
    printf("enter 2nd val to sub:");
    scanf("%d",&val2);
    //sub
    result=val1-val2;
    printf("%d",result);
    break;
   
   case 3:
     //take 1st val
    printf("enter 1st val to mul:\n");
    scanf("%d",&val1);
    //take 2 val
    printf("enter 2nd val to mul:");
    scanf("%d",&val2);
    //mul
    result=val1*val2;
    printf("%d",result);
    break;


    case 4:
      //take 1st val
    printf("enter 1st val to div:\n");
    scanf("%d",&val1);
    //take 2 val
    printf("enter 2nd val to div:");
    scanf("%d",&val2);
    //div
    result=val1/val2;
    printf("%d",result);
    break;

   case 5:
   //take val and sqrt
   printf("enter 1st val to sqrt:\n");
   scanf("%d",&val1);
   result=sqrt(val1);
   printf("%d",result);
   break;
    

  case 6:
  printf("enter 1st val to x:\n");
  scanf("%d",&val1);
    //take 2 val
    printf("enter 2nd val to x2:");
    scanf("%d",&val2);
    //div
    result=pow(val1,val2);
    printf("%d",result);
    break;

  default:
  printf("invalid");

 }
 


}