#include<stdio.h>
int main()
{
    int r,c,sum=0,h,v,s=0;
    printf("Enter row: ");
    scanf("%d",&r);
    printf("Enter column: ");
    scanf("%d",&c);

    int a[r][c];
    printf("Enter elements of matrix:\n");

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("Enter a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    printf("Entered matrix is:\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    printf("Enter the row number: ");
    scanf("%d",&h);

    if(h>r)
    {
        printf("Invalid row number!\n");
    }
    else
    {
    printf("Values in the %d row: ",h);
    for(int i=0;i<r;i++)
     {   
        for(int j=0;j<c;j++)
        {
            if(i==v-1)
            {
                printf("%d ",a[i][j]);
                sum=sum+a[i][j];
            }
        }
     }
    printf("Sum of elements in row %d: %d\n",h,sum);
    }
    printf("Enter the column number:");
    scanf("%d",&v);
    if(v>c)
    {
        printf("Invalid column number!\n");
    }
    else
    {
    printf("Values in the %d column:",v);
    for(int i=0;i<r;i++)
    {   
        for(int j=0;j<c;j++)
        {
            if(j==v-1)
            {
                printf("%d ",a[i][j]);
                s+=a[i][j];
            }
        }
    }
    printf("Sum of elements in column %d: %d",v,s);
    }
}