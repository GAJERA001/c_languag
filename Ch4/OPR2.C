#include<stdio.h>
#include<conio.h>
main()
{
 int a,b;
 clrscr();

 printf("Enter value of a = ");
 scanf("%d",&a);

 printf("Enter value of b = ");
 scanf("%d",&b);

 printf("(a-b)^2 = %d",(a*a)-(2*a*b)+(b*b));
 getch();

}
