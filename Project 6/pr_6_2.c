#include <stdio.h>
#include <string.h>
 
int main()
{
  	char str[20];
  	int i;
  	
  	char freq[20]; 
 
  	printf("Please Enter any String :");
  	scanf("%s",&str);
  	
  	
  	for(i = 0; str[i] != '\0'; i++)
  	{
  		if(str[i] >= 97 && str[i] <= 122)
  		{
  			freq[str[i] - 97]++;
		}
  		else if(str[i] >= 65 && str[i] <= 90)
  		{
  			freq[str[i] - 65]++;
		}
	}
  		
  	for(i = 0; i < 20; i++)
  	{
		if(freq[i] != 0)
		{
			printf("Character %c => %d \n",i+'a', freq[i]);
		}
	}
}