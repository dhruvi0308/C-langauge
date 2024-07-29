#include<stdio.h>
#include<string.h>
int main()
{
    int uc=0,lc=0,dc=0,sc=0;
    char pass[20];

    printf("Enter your password:");
    scanf("%s",&pass);

    int len = strlen(pass);
    printf("Length:%d\n",len);

    for(int i=0;i<len;i++)
    {
        if(pass[i]>=65 && pass[i]<=90)
        {
            uc++;
        }
        else if(pass[i]>=97 && pass[i]<=122)
        {
            lc++;
        }
        else if(pass[i]>=48 && pass[i]<=57)
        {
            dc++;
        }
        else
        {
            sc++;
        }
    }

    printf("Password:%s\n",pass);
    if(uc!=0 && lc!=0 && dc!=0 && sc!=0 && len>=6)
    {
        printf("Password is strong\n");
    }
    else
    {
        printf("Password is weak\n");
    }
}