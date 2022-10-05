#include<stdio.h>
#include<conio.h>
main()
{
int a;
clrscr();
printf("Entrr the number a : ");
scanf("%d",&a);

if(a>0){
printf("A ia positive");
}
else if(a<0){
printf("a is negative");
}

else if(a==0){
printf("A is neutral");
}
   getch();
}
