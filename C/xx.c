#include<stdio.h>
#include<conio.h>
void add(int a, int b){
int c=a+b;
printf("total=%d\n",c);
}
void area(float r){
float volome=r*r*3.14;
printf("%f\n",volome);

}

void main(){
add(100,200);
area(1);

}