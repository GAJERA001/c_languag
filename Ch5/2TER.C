#include<stdio.h>
#include<conio.h>
main()
{
	int a,b;
	clrscr();

	printf("Enter value of a and b :");
	scanf("%d %d",&a, &b);

	(a>b)?printf("A is max.") : printf("B is max.");

	getch();

}