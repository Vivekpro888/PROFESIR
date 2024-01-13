#include<stdio.h>
void main (){

    struct data
    {
       int id;
       char name;
       char lang;
    };
    struct data d1;
    

    printf("id\n");
    scanf("%d",&d1.id);
    printf("name\n");

    scanf("%s",&d1.name);
    printf("langage\n");
    scanf("%s",&d1.lang);

    printf("all details:");
    printf("%d,%s,%s",d1.id,d1.name,d1.lang);
}