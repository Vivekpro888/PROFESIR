#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<time.h>
void main(){
   
    
   time_t t;
   char date[9];
   t=time(NULL);
   _strdate(date);


    printf("ff%s",date);
}