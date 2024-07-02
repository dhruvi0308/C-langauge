#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    printf("Enter the value of c:");
    scanf("%d",&c);
    printf("Enter the value of d:");
    scanf("%d",&d);

    if(a==b && a==c && a==d && b==c && b==d && c==d)
    {
        printf("All are equal");
    }
    else if(a>b)
    {
        if(a>c)
        {
            if(a>d)
            {
                printf("a is big");
            }
            else
            {
                printf("d is big");
            }
        }
        else
        {
            if(c>d)
            {
                printf("c is big");
            }
            else
            {
                printf("d is big");
            }
            
        }      
    }
    else
    {
        if(b>c)
        {
            if(b>d)
            {
                printf("b is big");
            }
            else
            {
                printf("d is big");
            }
        }
        else 
        {
            if(c>d)
            {
                printf("c is big");
            }
            else
            {
                printf("d is big");
            }
        }
    }
}