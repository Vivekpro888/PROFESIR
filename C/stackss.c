#include<stdio.h>
#include<stdlib.h>
struct nood{
    int data;
    int *next;

};



void linked_list(struct nood* ptr){
  while (ptr !=NULL)
  {
    printf("data:%d\n",ptr->data);
    ptr->next;
  }
  
}



void main(){
   struct nood * head;
   struct nood * second;


   head=(struct nood*)malloc(sizeof(struct nood));
   second=(struct nood*)malloc(sizeof(struct nood));



   head->data=1;
  head->next=second;

   second->data=33;
   second->next=NULL;


}
