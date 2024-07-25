#include<stdio.h>
int main()
{
    int r,c;

    printf("Enter rows:");
    scanf("%d",&r);
    printf("Enter columns:");
    scanf("%d",&c);

    int a1[r][c],a2[r][c],a3[r][c];
    printf("Enter elements of first array:\n");

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("a1[%d][%d]: ",i,j);
            scanf("%d",&a1[i][j]);
        }
    }

    printf("Enter elements of second array:\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("a2[%d][%d]: ",i,j);
            scanf("%d",&a2[i][j]);
        }
    }

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            a3[i][j]=a1[i][j]+a2[i][j];
        }
    }

    printf("Sum of arrays:\n");

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ",a3[i][j]);
        }
        printf("\n");
    }
}