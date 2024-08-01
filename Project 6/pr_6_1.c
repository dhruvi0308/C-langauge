#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20];
    int str2[20];

    int ch;

    printf("Enter a String: ");
    scanf("%[^\n]",str1);

    int len=strlen(str1);

    for(int i=0;i<len;i++)
    {
        str2[i]=0;
    }
    for(int i=0;i<len;i++)
    {   ch=1;
        for(int j=i+1;j<len;j++)
        {
            if(str1[i]==str1[j])
            {
                ch++;
                str2[j]=1;
            }
        }
        if(str2[i]==0)
        {
            printf("The Character %c is appear %d times\n",str1[i],ch);
        }
    }
}