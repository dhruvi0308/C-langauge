#include<stdio.h>
#include<conio.h>
main()
{
	int x,y;
	clrscr();
	printf("Enter the value of x:");
	scanf("%d",&x);
	printf("Enter the value of y:");
	scanf("%d",&y);
	printf("The answer is:%d",(x*x*x + 3*x*x*y + 3*y*y*x + y*y*y));
	getch();
}