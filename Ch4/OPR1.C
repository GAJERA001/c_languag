#include<stdio.h>
#include<conio.h>
main()
{
 int a,b;
 clrscr();

 printf("Enter a value of A = ");
 scanf("%d",&a);

 printf("Enter a value of B = ");
 scanf("%d",&b);

 printf("(a+b^2 = %d)",(a*a)-(2*a*b)+(b*b));
 getch();

}