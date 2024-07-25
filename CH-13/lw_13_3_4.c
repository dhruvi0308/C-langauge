#include<stdio.h>
int main()
{
    int sum=0;
    int a[5][5];
    printf("Enter the elements of the array:");

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            printf("a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(i==0 || i==4) 
            {
                printf("%d ",a[i][j]);
                sum+=a[i][j];
            }
            else
            {
                if(j==0 || j==4)
                {
                    printf("%d ",a[i][j]);
                    sum+=a[i][j];
                }
                else
                {
                    printf("  ");
                }
            }
        }
        printf("\n");
    }
    printf("Sum of elements : %d\n",sum);
}