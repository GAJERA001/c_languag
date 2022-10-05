#include<stdio.h>
#include<conio.h>
main()
{
 int x,y,z;
 clrscr();

 printf("Enter value of x = ");
 scanf("%d",&x);

 printf("Enter value of y = ");
 scanf("%d",&y);

 printf("Enter value of z = ");
 scanf("%d",&z);

int ANS =((x*x*x) + (y*y*y) + (z*z*z) + 3 *(x+y)* (y+z)* (x+z));
 printf("ans is =%d",ANS);
 getch();

}
