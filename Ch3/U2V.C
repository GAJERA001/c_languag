#include<stdio.h>
#include<conio.h>
main(){
 int a = 30;
 int b = 40;
 int c;

 clrscr();

 c = a;
 a = b;
 b = c;

 printf("Value of A : %d\n",a);
 printf("Value of B : %d\n",b);
 getch();

}
