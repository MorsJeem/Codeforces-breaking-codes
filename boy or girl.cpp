#include<stdio.h>
#include<string.h>
int main()
{
	char N1[100];
	gets(N1);
	int len=strlen(N1);
	printf("length %d\n",len);
	if(len%2==0)
	{
		printf("IGNORE HIM!");
	}
	else{
		printf("CHAT WITH HER!");
	}
	return 0;
	
	
}
