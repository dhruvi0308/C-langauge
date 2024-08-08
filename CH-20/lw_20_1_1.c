#include<stdio.h>
int main()
{
    int n;
    printf("Enter the length of array:");
    scanf("%d",&n);

    int a[n];
    int *p=&a[0];
    for(int i=0;i<n;i++)
    {
        printf("Enter a[%d]:",i);
        scanf("%d",(p+i));
    }
    
    printf("Square of the array elements is:");
    for(int i=0;i<n;i++)
    {
        printf("%d",(*(p+i)*(p+i)));
    }
}