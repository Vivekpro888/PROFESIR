#include<stdio.h>
#include<conio.h>
void main(){
  int i,cont=0;
  printf("print no.:");
  scanf("%d",&i);
  while (i!=0)
  {
    i=i/10;
    cont++;
  }
  
  printf("number of digir =%d",cont);
  

}