#include<stdio.h>
#include<conio.h>



void main(){

  FILE *fpointer=fopen("schoolmate.txt","r");
  fprintf(fpointer,"\nvivek,sudesh, omker,me");


  fclose(fpointer);
}