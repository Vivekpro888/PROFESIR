#include<stdio.h>
void main(){
    int li[5]={};
   if (li[1]==0)
   {
    printf("first digit");
    scanf("%d\n%d%d%d%d",&li[0],&li[1],&li[2],&li[3],&li[4]);
    
 for (int i = 0; i < 5; i++)
    {
       printf("%d",li[i]);
    }
   }
   else{
    printf("sorry is not equal to 00");
   }
   


}