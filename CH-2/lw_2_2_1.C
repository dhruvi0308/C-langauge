#include<stdio.h>
#include<conio.h>
#define PI 3.14
main()
{
	float r;
	clrscr();
	printf("Enter the value of radius=");
	scanf("%f",&r);
	printf("The area of circle=%.2f",PI*r*r);
	getch();
}