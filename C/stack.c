#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};

int linkedlisttraversed(struct Node *ptr){
 
    while (ptr!=NULL)
    {
       printf("element :%d",ptr->data);
       ptr=ptr->next;
    }
   
}

void main(){

 struct Node * head;
 struct Node * second;
 struct Node * third;



 head=(struct Node*)malloc(sizeof(struct Node));
 second=(struct Node*)malloc(sizeof(struct Node));
 third=(struct Node*)malloc(sizeof(struct Node));



 head->data=10;
 head->next=second;

 second->data=22;
 second->next=third;

 third->data=11;
 third->next=NULL;

 linkedlisttraversed(head);




}