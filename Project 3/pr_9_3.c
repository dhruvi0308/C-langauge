#include<stdio.h>
int main()
{
    int n,rev=0,ld,a,fd;
    printf("enter a number:");
    scanf("%d",&n);
    a=n%10;
    for( ;n%10!=0;n=n/10)
    {
        ld=n%10;
        rev=rev*10+ld;
    }
    fd=rev%10;
    printf("Sum is %d",a+ld);
    
}