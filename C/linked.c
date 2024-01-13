#include <stdio.h>
#include <stdlib.h>
// create struct (abc) with pointer to repet struct

struct Node
{
  int data;
  struct Node *link;
};





void linkedlisttraversed(struct Node *ptr)
{

  while (ptr != NULL)
  {
    printf("element%d\n", ptr->data);
    ptr = ptr->link;
  }
}




struct Node * insertlist( struct Node *head,int data )
{
  
  struct Node *ptr=(struct Node *)malloc(sizeof(struct Node *));
  ptr->data =data;
  ptr->link=head;
  return ptr;
}




struct Node * inseratindex(struct Node *head,int data,int index)
{
  struct Node *ptr=(struct Node *)malloc(sizeof(struct Node *));
  struct Node *p=head;
  int n=0;
  while (n!=index-1)
  {
    p=p->link;
    n++;

    
  }

  ptr->data=data;
  ptr->link=p->link;
  p->link=ptr;
  return head;

}


int main()
{
  // 1st step

  struct Node *head;
  struct Node *second;
  struct Node *third;
  struct Node *fifth;
  struct Node *fourth;

  // 2nd step

  head = (struct Node *)malloc(sizeof(struct Node));
  second = (struct Node *)malloc(sizeof(struct Node));
  third = (struct Node *)malloc(sizeof(struct Node));
  fifth = (struct Node *)malloc(sizeof(struct Node));
  fourth = (struct Node *)malloc(sizeof(struct Node));

  // 3rd step

  head->data = 33;
  head->link = second;

  second->data = 66;
  second->link = third;

  third->data = 77;
  third->link = fourth;

  fifth->data = 88;
  fifth->link = NULL;

  fourth->data = 66;
  fourth->link = fifth;


  
  
 

  // this function for display linklist traversed
 // linkedlisttraversed(head);


  head=insertlist(head,34);
 
  //head=inseratindex(head,100,2);
  
  linkedlisttraversed(head);
  return 0;
}
