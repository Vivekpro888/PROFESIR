#include<stdio.h>
#include<conio.h>
void main(){

 int n,sq;
 char ch;
 do
 {
    printf("any ni:");
    scanf("%d",&n);
    sq=n*n;
    printf("%d",sq);
    printf("continue press y/n");
    scanf("%s",&ch);

 } while (ch=='y');
   
}
 
 


