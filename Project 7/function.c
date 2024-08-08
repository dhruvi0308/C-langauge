#include<stdio.h>
int sum(int a,int b)
{
    return a+b;
}
int sub(int a,int b)
{
    return a-b;
}
int mul(int a,int b)
{
    return a*b;
}
float div(int a,int b)
{
    float s;
    if(b!=0)
    {
        s=(float)a/(float)b;
        return s;
    }
    else
        return 0;
}
int mod(int a,int b)
{
    if(b!=0)
        return a%b;
    else
        return 0;
}
int getint()
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    return num;
}