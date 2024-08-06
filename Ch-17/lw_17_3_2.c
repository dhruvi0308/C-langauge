#include "functions.c"
int main()
{
    int n= getint("Array length:");
    int a[n];
    for(int i=0;i<n;i++)
    {
        a[i]=getArrayElement("a",i);
    }
    printf("Array sum:%d",getArraySum(a,n));
}