#include<stdio.h>
#include<conio.h>
#define PI 3.14
main()
{
	float r;
	clrscr();
	printf("Enter the value of r=");
	scanf("%f",&r);
	printf("The perimeter=%.2f",2*PI*r);
	getch();
}