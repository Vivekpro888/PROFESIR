#include<stdio.h>
#include<stdlib.h>


struct Node
{
    int number;
    struct Node *link;
};

void main(){
    struct Node *head=NULL;
    struct Node *second;

    head=(struct Node *)malloc(sizeof(struct Node));
    second=(struct Node *)malloc(sizeof(struct Node));

    head->number=45;
    head->link=NULL;
    second->number=66;

    printf("%d",head->number);
    printf("%d",second->number);

   
 }
 

