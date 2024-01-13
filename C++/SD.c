#include<stdio.h>
#include<conio.h>
int same(int val)
{
    printf("this is function print%d",val);
    return 0;
}

void main(){
   int a;
   a=same(5);
    printf("%d",a);
}