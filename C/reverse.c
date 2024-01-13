#include<stdio.h>
#include<conio.h>
void main(){
    int rem,n;
    printf("en no:");
    scanf("%d",&n);
    printf("revers no:");

    while (n>0)
    {
        rem=n%10;
        printf("%d",rem);
        n=n/10;
       
    }
    

}