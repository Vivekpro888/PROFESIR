#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<ctype.h>
#include<io.h>
void main(){

 int i;
 FILE *fptr;
 char fn[50];
 char str[]="welcome to youtube channel vivek\n";
 fptr=fopen("king.text","w");
 for (i=0;str[i]!='\n';i++)
 {
    fputc(str[i],fptr);

 }
   getch();
   fclose(fptr);
   

}
