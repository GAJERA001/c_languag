#include<stdio.h>
#include<conio.h>
main()
{
 int x,y;
 clrscr();

 printf("Enter a value of x =");
 scanf("%d",&x);

 printf("Enter a value of y =");
 scanf("%d",&y);

 printf("ANS = %d",(x*x*x)+(3*x*x*y)+(3*x*y*y)+(y*y*y));
 getch();

}