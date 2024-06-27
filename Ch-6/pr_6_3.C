#include<stdio.h>
#include<conio.h>
main()
{
	float F,S;
	clrscr();
	printf("Enter first angle:");
	scanf("%f",&F);
	printf("Enter second angle:");
	scanf("%f",&S);
	printf("Third angle:%.2f",(F+S)-180);
	getch();
}