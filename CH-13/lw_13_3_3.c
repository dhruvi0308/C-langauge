#include<stdio.h>
int main()
{
    int r,c,sum=0;

    printf("Enter row:");
    scanf("%d",&r);
    printf("Enter column:");
    scanf("%d",&c);

    int a[r][c];

    printf("Enter array elements:\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(i==j)
            {
                sum=sum+a[i][j];
            }
        }
    }
    printf("Sum of diagonal elements:%d\n",sum);
}