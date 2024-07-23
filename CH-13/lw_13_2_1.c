#include<stdio.h>
int main()
{
    int n,i,max=0;

    printf("Enter the size of array:");
    scanf("%d",&n);

    int array[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter a[%d]=",i);
        scanf("%d",&array[i]);
        if(array[i]>max)
    {
        max=array[i];
    }
    }
    printf("Largest:%d\n",max);
}