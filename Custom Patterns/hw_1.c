#include<stdio.h>
int main()
{
    for(int d=1;d<=6;d++)
    {
        if(d==1 || d==6)
        {
            printf(" * * * * *");
        }
        else
        {
            printf("*         *");
        }
        printf("\n");
    }
    for(int h=1;h<=6;h++)
    {
        if(h==3)
        {
            printf("* * * * * * *");
        }
        else
        {
            printf("*           *");
        }
        printf("\n");
    }
    for(int r=1;r<=6;r++)
    {
        if(r==1 || r== 3)
        {
            printf("* * * * *");
        }
        else if(r==4)
        {
            printf("* *");
        }
        else if(r==5)
        {
            printf("*    *");
        }
        else
        {
            printf("*       *");
        }
        printf("\n");
    }
    for(int u=1;u<=6;u++)
    {
        if(u==6)
        {
            printf("* * * * *");
        }
        else
        {
            printf("*        *");
        }
        printf("\n");
    }
    for(int v=1;v<=6;v++)
    {
        if(v==1)
        {
            printf("*         *");
        }
        else if(v==2)
        {
            printf(" *       * ");
        }
        else if(v==3)
        {
            printf("  *     *  ");
        }
        else if(v==4)
        {
            printf("   *   *   ");
        }
        else if (v==5)
        {
            printf("    * *  ");
        }
        else
        {
            printf("     *      ");
        }
        printf("\n");
    }
    for(int i=1;i<=6;i++)
    {
        if(i==1 || i==6)
        {
            printf("* * * * * * *");
        }
        else
        {
            printf("      *    ");
        }
        printf("\n");
    }
}