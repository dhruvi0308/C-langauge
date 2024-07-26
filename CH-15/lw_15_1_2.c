#include<stdio.h>
int main()
{
    char str[10];

    printf("Enter a string:");
    scanf("%[^\n]",&str);

    for(int i=0;i<10;i++)
    {
        if(str[i]>=97 && str[i]<=122)
        {
            str[i]-=32;
        }
    }
    printf("Name is %s",str);
}