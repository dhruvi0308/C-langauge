# include<stdio.h>
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

    (a>b)
        ?(a>c)
            ?(a>d)
                ?printf("a is big")
                :printf("d is big")
            :(c>d)
                ?printf("c is big")
                :printf("d is big")
        :(b>c)
            ?(b>d)
                ?printf("b is big")
                :printf("d is big")
            :(c>d)
                ?printf("c is big")
                :printf("d is big");   
}