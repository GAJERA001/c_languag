#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c,d,e,large;

clrscr();
	printf("Enter the value of a,b,c,d and e");
	scanf("%d %d %d %d %d",&a, &b, &c, &d, &e);

	large = ((a>b && a>c && a>d && a>e)? a: (b>c && b>d && b>e)? b : (d>e)? d : e);
	printf("largest number is : %d",large);



	 getch();
}