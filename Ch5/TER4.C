#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c,d,large;
	clrscr();

	printf("Enter the value of a,b,c, and d");
	scanf("%d %d %d %d",&a, &b, &c, &d);

	large = (( a>b && a>c && a>d) ? a : (b>c && b>d)? b : (c>d)? c :d);
	printf("maximum is =%d ",large);






	 getch();
}