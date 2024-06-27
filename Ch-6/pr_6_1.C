#include<stdio.h>
#include<conio.h>
main()
{
	float c;
	clrscr();
	printf("Enter the temperature in celcius:");
	scanf("%f",&c);
	printf("Convert:%.2f",(9*c)/5+32);
	getch();
}