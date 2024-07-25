#include <stdio.h>
int main()
{
    int r,c,max=0;                
    printf("Enter the number of rows and column: ");
    scanf("%d%d",&r,&c);  

    int a[r][c];        
    printf("Enter the elements of the array:\n");

    for(int i=0;i<r;i++)    
    {
        for(int j=0;j<c;j++)
        {
            printf("Enter a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
            if(a[i][j]>0)
            {
                max=a[i][j];
            }
        }
    }
    printf("Largest element in array:%d",max);
}