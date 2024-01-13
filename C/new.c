#include<stdio.h>
#include<conio.h>
void main(){
    int n1,n2,n3;
    scanf("%d%d%d",&n1,&n2,&n3);
    if (n1>n2&&n1>n3)
    {
       printf("n1 is greater");
    }
    else if (n2>n1&&n2>n3)
    {
       printf("n2 is greater");
    }
    else
    {
        printf("n3 is grater");
    }
    
}
