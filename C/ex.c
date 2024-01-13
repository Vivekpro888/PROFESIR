#include<stdio.h>
#include<conio.h>

int main(){
   
    printf("1:addition\n");
    printf("2.substraction\n");
    printf("3.multi\n");
    printf("4.division\n");
    char ok;
    int n1,n2,result,choice;
    printf("select your choice:");
    scanf("%d:",&choice);
    if (choice>=1&&choice<=4)
    {
       printf("two digit enter");
       scanf("%d%d",&n1,&n2);

       printf("first digit :%d\nsecond digit : %d\n",n1,n2);
       printf("ok to continue...:\n");
       scanf("%c",&ok);
       if (ok==ok)
       {
        return choice;
       }
       

    }
    
   

}