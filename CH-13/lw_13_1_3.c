#include<stdio.h>
int main()
{
    int n;
    printf("Enter size of array:");
    scanf("%d",&n);

    int array1[n],array2[n],array3[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter value a1[%d]: ",i);
        scanf("%d",&array1[i]);
    }
    for(int i=0;i<n;i++)
    {
        printf("Enter value a2[%d]:",i);
        scanf("%d",&array2[i]);
    }
    for(int i=0;i<n;i++)
    {
        array3[i]=array1[i]+array2[i];
    }
    for(int i=0;i<n;i++)
    {
        printf("array3[%d]=%d\n",i,array3[i]);
    }
}