#include<stdio.h>
#include<string.h>
int main()
{
	char s[10000];
	gets(s);
	if(s[0]>96 && s[0]<=122)
	{
		s[0]=s[0]-32;
	}
	printf("%s",s);
	return 0;
}
