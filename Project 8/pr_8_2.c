#include<stdio.h>
void cube(int arr[][],int b)
{
    for(int i=0;i<b;i++)
    {
        for(int j=0;j<b;j++)
        {
            arr[i][j] = arr[i][j]*arr[i][j]*arr[i][j];
        }
    }
}

int main()
{
    int n;
    printf("Enter  array size: ");
    scanf("%d",&n);

    int arr[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("Enter element at a[%d][%d]: ",i,j);   
            scanf("%d",&arr[i][j]);
        }
    }
    cube(arr[n][n],n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}