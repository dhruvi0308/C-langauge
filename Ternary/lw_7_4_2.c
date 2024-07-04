# include<stdio.h>
int main()
{
    int a,b,c,d,e;
    printf("Enter value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    printf("Enter the value of c:");
    scanf("%d",&c);
    printf("Enter the value of d:");
    scanf("%d",&d);
    printf("Enter the value of e:");
    scanf("%d",&e);

    (a>b)
        ?(a>c)
            ?(a>d)
                ?(a>e)
                    ?printf("a is big")
                    :printf("e is big")
                :(d>e)
                    ?printf("d is big")
                    :printf("e is big")
            :(c>d)
                ?(c>e)
                    ?printf("c is big")
                    :printf("e is big")
                :(d>e)
                    ?printf("d is big")
                    :printf("e is big")
        :(b>c)
            ?(b>d)
                ?(b>e)
                    ?printf("b is big")
                    :printf("e is big")
                :(d>e)
                    ?printf("d is big")
                    :printf("e is big")
            :(c>d)
                ?(c>e)
                    ?printf("c is big")
                    :printf("e is big")
                :(d>e)
                    ?printf("d is big")
                    :printf("e is big");   
}