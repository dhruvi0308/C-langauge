#include<stdio.h>
#include<conio.h>
main()
{
	float Bs,hra,da,ta;
	clrscr();
	printf("Enter base salary:");
	scanf("%f",&Bs);
	printf("Enter hra:");
	scanf("%f",&hra);
	printf("Enter da:");
	scanf("%f",&da);
	printf("Enter ta:");
	scanf("%f",&ta);
	printf("Gross salary:%.2f",(Bs*hra/100+Bs*da/100+Bs*ta/100)+Bs);

	getch();
}