#include<stdio.h>
int main(){
    int i;

   FILE *ptr;
   ptr=fopen("vasudev","w");

  char o[23]="hiiiiiiiiiiiiiiiiiiii\n";;
 
 for ( i = 0;o[i]!='\n'; i++)
 {
    fputc(o[i],ptr);
 }
 

   fclose(ptr);
    return 1;
}