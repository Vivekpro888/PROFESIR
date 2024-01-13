#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
void main()
{

  /*#include<stdio.h>:
  {getch();,clrscr();,gets();}*/

  /*include<stdio.h>:
  {for every program.}*/

  /*include<math.c>:
  {  bata type double:
     1.double pow(x,y);
     2. squreroot :dounle sqrt();
     3.ceil();
     4.floor();
     5.exponatial(ex):exp(x);
     6.natural logarithum*(base e): log(x);
     7.logerithm *base(10): log(10);
     8.absolute value of x: fabs(x);
     9.remainder x/y: fmod(x,y);
     10.sine of x(x in radian): sin(x);
     11.cosine of x(x in radian):cos(x);
     12.tangent of x(x in radian):tan(x);

                           absolute value: int abs();,
                              check ASCIi values: int insalnum(int ch);
     }*/

  int a;
  a = pow(2, 5);
  printf("%d\n", a);

  int b = ceil(3.04);
  int c = ceil(3.1);
  printf("B=%d\nC=%d\n", b, c);

  int d = floor(3.4);
  int f = floor(3.9);
  printf("D=%d\nF=%d\n", d, f);

  int h = abs(3.9);
  printf("H=%d\n", h);

  /* int insalnum(int ch);  */

  int m = exp(5);
  int x = tan(4);
  printf("exponatial:%d\n tan=%d", m, x);

  /* #include<string.h>
  {
      1.calculate length; strln();
      2.append of string end of another: strcat(a,b)/strcat(s1,s2,n);
      3.copy string into another: strcpy(s1,s2)/strcpy(s1,s2,n);
      4.compair to string: strcmp(s1,s2);

  }*/



  
}