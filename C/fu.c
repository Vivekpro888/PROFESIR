#include<stdio.h>
#include<conio.h>



void main(){



    char ch ,by;
    int n1,n2,le;
    do
    {
         printf("select operation:");
    scanf("%s",&ch);
    printf("numbers only two\n");
    scanf("%d%d",&n1,&n2);
    if(ch=='+')
    {
      le=n1+n2;
      printf("%d",le);
    }
    else if (ch=='-')
    {
       le=n1-n2;
      printf("%d",le);
    }
    else if (ch=='*')
    {
        le=n1*n2;
      printf("%d",le);
        
    }
    else if (ch=='/')
    {
        le=n1/n2;
      printf("%d",le);
    }
    else{
        printf("not operation found");
    }

    printf("continue press y/n");
    scanf("%s",&by);
    } 
    while (by=='y');
    
   
    
}
