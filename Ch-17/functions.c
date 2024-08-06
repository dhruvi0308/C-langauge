#include<stdio.h>

int getSum()
{
    int a,b;
    return a+b;
}

int getint()
{
    int n;
    printf("Array length:");
    scanf("%d",&n);
    return n;
}

int getInt(char varname[])
{
    int n;
    printf("Enter %s:",varname);
    scanf("%d",&n);
    return n;
}

int swap()
{
    int a,b,c;

    printf("Enter value of a:");
	scanf("%d",&a);
	printf("Enter value of b:");
	scanf("%d",&b);

	c=a;
	a=b;
	b=c;
    return a;
    return b;
}

int getArraySum(int a[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
    }
    return sum;
}

int getArrayElement(char arraName[],int index)
{
    int n;
    printf("Enter %s[%d]:",arraName,index);
    scanf("%d",&n);
    return n;
}

float getArrayAvg(int a[],int n)
{
    int sum=getArraySum(a,n);
    float avg=(float)sum/(float)n;
    return avg;
}

int nSum(int n)
{
    if(n<=1)
    {
        return 1;
    }
    else
    {
        return n+nSum(n-1);
    }
}
int nFac(int n)
{
    if(n<=1)
    {
        return 1;
    }
    else
    {
        return n*nFac(n-1);
    }
}