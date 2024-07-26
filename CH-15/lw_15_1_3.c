#include<stdio.h>
int main()
{
    char str[100];

    printf("Enter a string:");
    scanf("%[^\n]",&str);

    for(int i=0;i<100;i++)
    {
        if(str[i]>=65 && str[i]<=90)
        {
            str[i]+=32;
        }
        else if(str[i]>=97 && str[i]<=122)
        {
            str[i]-=32;
        }
    }
    printf("Name is %s",str);
}