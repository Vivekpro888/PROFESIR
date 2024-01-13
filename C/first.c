#include<stdio.h>
#include<conio.h>

void main(){
   
    printf("1:addition\n");
    printf("2.substraction\n");
    printf("3.multi\n");
    printf("4.division\n");
    int n1,n2,result,choice;
    printf("select your choice:");
    scanf("%d:",&choice);
    if (choice>=1&&choice<=4)
    {
        printf("enter two no:");
        scanf("%d%d",&n1,&n2);
    }
    switch (choice)
    {
    case 1:
         result=n1+n2;
         printf(" add result%d",result);
        break;

    case 2:
        result=n1-n2;
        printf("sub result%d",result);
        break;
    case 3:
        result=n1*n2;
        printf("mul result%d",result);
        break;
    case 4:
        result=n1/n2;
        printf("div result%d",result);
        break;

    default:
    printf("invalid choice");
        break;
    }
}