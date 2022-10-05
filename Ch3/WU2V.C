#include<stdio.h>
#include<conio.h>
main(){
 int a = 30;
 int b = 600;

 clrscr();

 a = a + b;
 b = a - b;
 a = a - b;

 printf("Value of A : %d\n",a);
 printf("Value of B : %d\n",b);
 getch();

}
