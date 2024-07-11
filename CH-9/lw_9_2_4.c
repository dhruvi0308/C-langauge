#include<stdio.h>
int main()
{
    int n,a=0,b=1,n3;
    
    printf("Enter n:");
    scanf("%d",&n);
    printf("%d %d",a,b);
    
    n=n-2;
    for(int i=0;a<=n;i++)
    {
        n3=a+b;
        printf(" %d",n3);
        a=b;
        b=n3;
    }
}