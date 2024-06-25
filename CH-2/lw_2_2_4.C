#include<stdio.h>
#include<conio.h>
main()
{
	float p;
	float r;
	float n;
	clrscr();
	printf("Enter value of p=");
	scanf("%f",&p);
	printf("Enter value of r=");
	scanf("%f",&r);
	printf("Enter value of n=");
	scanf("%f",&n);
	printf("The Simple interest=%.2f",(p*r*n)/100);
	getch();
}