#include<stdio.h>
int main()
{

    int a,b; 
    int *p1=&a;
    int *p2=&b;

    printf("Enter a:");
    scanf ("%d", p1);
    printf("Enter b:");
    scanf ("%d", p2);

    *p1=(*p1)+(*p2);
    *p2=(*p1)-(*p2);
    *p1=(*p1)-(*p2);

    printf("Swaping value of A is %d and B is %d", *p1, *p2);
}