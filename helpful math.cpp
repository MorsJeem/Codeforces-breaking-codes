#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,len;
	char s[100];
	gets(s);
	len=strlen(s);
	for(i=0;i<len;i=i+2);
	{
		for(j=i+2;j<len;j=j+2)
		{
			if(s[j]>s[i])
			{
				char temp=s[i];
				s[i]=s[j];
				s[j]=s[i];
			}
		}
	}
	printf("%s",s);
}
