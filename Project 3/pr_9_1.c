#include<stdio.h>
int main()
{
    char c='a';
    do
    {
        printf("%c",c);
        c+=4;
    }while(c<'z');
}