#include<stdio.h>
int main()
{
    int fac=1,n,i;
    printf("Enter n:");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        fac=fac*i;
    }
    printf("Fac=%d",fac);
}