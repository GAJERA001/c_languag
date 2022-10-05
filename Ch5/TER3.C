#include<stdio.h>
#include<conio.h>
main()
{       int a,b,c;
	clrscr();

	printf("Enter value of a, b and c :");
	scanf("%d %d %d",&a, &b, &c);

	(a<b)
	?
	(b<c)
	? printf("C is max.") : printf("B is max.")
	     :
	     (a<c) ? printf("C is max."):printf("A is max.");


	getch();

}