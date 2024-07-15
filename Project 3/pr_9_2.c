#include<stdio.h>
int main()
{
    int n,cnt=0;
     
    printf("Enter n:");
    scanf("%d",&n);

    do
    {
       n=n/10;
       cnt++;
    }while(n!=0);
    printf("Digits=%d",cnt);
}