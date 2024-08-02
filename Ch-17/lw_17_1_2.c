#include<stdio.h>

int div()
{
    int a;
    printf("Enter the a number: ");
    scanf("%d", &a);
    if(a%3==0 && a%5==0)
    {
        printf("The number is divisible by both\n");
    }
    else
    {
        printf("The number is not divisible by both\n");
    }
}
int main()
{
    div();
}
