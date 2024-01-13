#include<stdio.h>
void main(){


struct school
    {
      char name[1];
      int roll;
      int marks;

    };
    
    struct school s1,s2,s3;
    
    printf("enter name ,roll no & mark");
    scanf("%s\n%d\n%d\n",&s1.name[0],&s2.marks,&s3.roll);
    

    printf("details");
    printf("name:%c\nrollno:%d\nmar%d",s1.name[0],s2.roll,s3.marks);
}