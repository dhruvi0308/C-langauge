#include<stdio.h>
#include<conio.h>

main()
{
	int b;
	int h;
	clrscr();
	printf("Enter value of breadth=");
	scanf("%d",&b);
	printf("Enter value of height=");
	scanf("%d",&h);
	printf("the area of triangle=%.2f",0.5*b*h);
	getch();
}