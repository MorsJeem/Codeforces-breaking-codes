#include<stdio.h>
#include<string.h>
int main()
{
	char s[101];
	gets (s);
	int len=strlen(s);
	int i,j;
	for(i=0;i<len;i++)
	{
		for(j=i+1;j<len;j++)
		{
			if(s[i]==s[j])
			{
				for(j=j;j<len-1;j++)
				{
					s[i]=s[j];
					s[j]=s[j+1];
				}
				i--;
				len--;
			}
		}
	}
	if(len%2==0)
	{
		printf("CHAT WITH HER!");
	}
	else{printf("IGNORE HIM!");
	}
	return 0;
}
