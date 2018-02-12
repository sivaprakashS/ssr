
#include <stdio.h>
#include<string.h>
int main(void) 
{
	char str[50];
	int i,count=0;
	printf("enter the sentence:");
	scanf("%[^\n]s",str);
	for(i=0;i<=0;i++)
	{
		if(str[i]==' ')
		{
			count=count+1;
		}
	}
	printf("\n no of white spaces=%d",count);
	return 0
  }
