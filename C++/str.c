#include<stdio.h>
#include<conio.h>



 struct school
 {
    int id;
    char name[9];
    float avg;
 };
void main(){


 struct school s1;
 printf("enter name");
 gets(s1.name);
 printf("%s",s1.name);
 
 getch();

}