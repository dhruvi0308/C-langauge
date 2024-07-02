#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    printf("Enter the value of c:");
    scanf("%d",&c);

    if(a==b && b==c && c==a)
    {
        printf("They are same");
    }
    else if(a>b)
    {
        if(a>c)
        {
            printf("a is big");
        }
        else
        {
            printf("c is big");
        }
    }
    else
    {
        if(b>c)
        {
            printf("b is big");
        }
        else
        {
            printf("c is big");
        }
    }
}