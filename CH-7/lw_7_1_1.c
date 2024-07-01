#include<stdio.h>

int main() 
{
    int a,b;
    printf("Enter value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);

    if(a>b)
    {
        printf("b is minimum");

    }
    else
    {
        printf("a is minimum");
    }
}