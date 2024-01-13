#include<stdio.h>
#include<conio.h>



void main(){

    char ch;
    int n1,n2,le;
    printf("redy to yes");
    scanf("%s",&ch);
    if(ch=='y')
    {
        printf("no 1,no2");
        scanf("%d%d",&n1,&n2);
        le=(n1+n2)+(n1-n2);
        printf("result:  %d",le);


    }
    else {
        printf("next try");
    }
    

}