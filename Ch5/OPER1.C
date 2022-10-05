#include<stdio.h>
#include<conio.h>
main()
{
int a,b;
clrscr();

printf("Enter the value of a and b");
scanf("%d %d",&a, &b);

if(a<b){
printf("A is min");
}
else{
printf("B is min");

}
getch();
}