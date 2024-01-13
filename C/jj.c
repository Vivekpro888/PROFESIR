#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<time.h>
void main(){
    printf("vivo\a");
    printf("bot");
   time_t t;
   char date[9];
   t=time(NULL);
   _strdate(date);
   printf(",date%s%s",date,ctime(&t));
}