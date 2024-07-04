#include <stdio.h>

int main() 
{
    int a, b, c, d, e, f;

    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter b: ");
    scanf("%d", &b);

    printf("Enter c: ");
    scanf("%d", &c);

    printf("Enter d: ");
    scanf("%d", &d);

    printf("Enter e: ");
    scanf("%d", &e);

    printf("Enter f: ");
    scanf("%d", &f);

    if (a == b && b == c && c==d && d==e && e==f && f==a)
    {
        printf("ALL are same !!!");
    }
    else if (a > b) 
    {
        if (a > c) 
        {
            if (a > d) 
            {
                if (a > e) 
                {
                    if (a > f) 
                    {
                        printf("A is big");
                    } 
                    else 
                    {
                        printf("F is big");
                    }
                }
                else 
                {
                    if (e > f) 
                    {
                        printf("E is big");
                    } 
                    else 
                    {
                        printf("F is big");
                    }
                }
            }
            else 
            {
                if (d > e) 
                {
                    if (d > f) 
                    {
                        printf("D is big");
                    } 
                    else 
                    {
                        printf("F is big");
                    }
                }
                else 
                {
                    if (e > f) 
                    {
                        printf("E is big");
                    } 
                    else 
                    {
                        printf("F is big");
                    }
                }
            }
        }
        else 
        {
            if (c > d) 
            {
                if (c > e) 
                {
                    if (c > f) 
                    {
                        printf("C is big");
                    } 
                    else 
                    {
                        printf("F is big");
                    }
                } 
                else 
                {
                    if (e > f) 
                    {
                        printf("E is big");
                    } 
                    else 
                    {
                        printf("F is big");
                    }
                }
            }
            else 
            {
                if (d > e) 
                {
                    if (d > f) 
                    {
                        printf("D is big");
                    } 
                    else 
                    {
                        printf("F is big");
                    }
                }
                else 
                {
                    if (e > f) 
                    {
                        printf("E is big");
                    } 
                    else 
                    {
                        printf("F is big");
                    }
                }
            }
        }
          
    }
    else
    {
        if(b > c) 
        {
            if (b > d) 
            {
                if (b > e) 
                {
                    if (b > f) 
                    {
                        printf("B is big");
                    } 
                    else 
                    {
                        printf("F is big");
                    }
                }
                else 
                {
                    if (e > f) 
                    {
                        printf("E is big");
                    }
                    else 
                    {
                        printf("F is big");
                    }
                }
            }
            else 
            {
                if (d > e) 
                {
                    if (d > f) 
                    {
                        printf("D is big");
                    }
                    else 
                    {
                        printf("F is big");
                    }
                }
                else 
                {
                    if (e > f) 
                    {
                        printf("E is big");
                    }
                    else 
                    {
                        printf("F is big");
                    }
                }
            }
        }
        else 
        {
            if (c > d) 
            {
                if (c > e) 
                {
                    if (c > f) 
                    {
                        printf("C is big");
                    } 
                    else 
                    {
                        printf("F is big");
                    }
                }
                else 
                {
                    if (e > f) 
                    {
                        printf("E is big");
                    }
                    else 
                    {
                        printf("F is big");
                    }
                }
            }
            else 
            {
                if (d > e) 
                {
                    if (d > f) 
                    {
                        printf("D is big");
                    }
                    else 
                    {
                        printf("F is big");
                    }
                }
                else 
                {
                    if (e > f) 
                    {
                        printf("E is big");
                    }
                    else 
                    {
                        printf("F is big");
                    }
                }
            }
        }  
    }
    
}