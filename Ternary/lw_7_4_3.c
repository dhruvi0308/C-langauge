#include <stdio.h>

int main() 
{
    int a, b, c, d, e, f;

    printf("Enter a:");
    scanf("%d", &a);

    printf("Enter b:");
    scanf("%d", &b);

    printf("Enter c:");
    scanf("%d", &c);

    printf("Enter d:");
    scanf("%d", &d);

    printf("Enter e:");
    scanf("%d", &e);

    printf("Enter f:");
    scanf("%d", &f);

    (a>b)
        ?(a>c)
            ?(a>d)
                ?(a>e)
                    ?(a>f)
                        ?printf("a is big")
                        :printf("f is big")
                    :(e>f)
                        ?printf("e is big")
                        :printf("f is big")
                :(d>e)
                    ?(d>f)
                        ?printf("d is big")
                        :printf("f is big")
                    :(e>f)
                        ?printf("e is big")
                        :printf("f is big")
            :(c>d)
                ?(c>e)
                    ?(c>f)
                        ?printf("c is big")
                        :printf("f is big")
                    :(e>f)
                        ?printf("e is big")
                        :printf("f is big")
                :(d>e)
                    ?(d>f)
                        ?printf("d is big")
                        :printf("f is big")
                    :(e>f)
                        ?printf("e is big")
                        :printf("f is big")

        :(b>c)
            ?(b>d)
                ?(b>e)
                    ?(b>f)
                        ?printf("b is big")
                        :printf("f is big")
                    :(e>f)
                        ?printf("e is big")
                        :printf("f is big")
                :(d>e)
                    ?(d>f)
                        ?printf("d is big")
                        :printf("f is big")
                    :(e>f)
                        ?printf("e is big")
                        :printf("f is big")
            :(c>d)
                ?(c>e)
                    ?(c>f)
                        ?printf("c is big")
                        :printf("f is big")
                    :(e>f)
                        ?printf("e is big")
                        :printf("f is big")
                :(d>e)
                    ?(d>f)
                        ?printf("d is big")
                        :printf("f is big")
                    :(e>f)
                        ?printf("e is big")
                        :printf("f is big");
                      
}