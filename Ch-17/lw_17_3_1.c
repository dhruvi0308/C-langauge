#include "functions.c"
int main()
{
    int a=getint("a");
    int b=getint("b");
    int answer=getSum(a,b);
    printf("Smu of %d and %d:%d",a,b,a+b);
}