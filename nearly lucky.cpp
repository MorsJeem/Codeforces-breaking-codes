#include<stdio.h>
#include<string.h>
int main()
{
	int i,count=0,n;
	char a[100];
	scanf("%s",&a);
	n=strlen(a);
	printf("%d\n",n);
	for(i=0;i<n;i++)
	{
		if(a[i]=='4' || a[i]=='7')
		{
			count++;
		}
	}
	printf("%d\n",count);
	if(count==4 || count==7)
	{
		printf("YES");
	}
	else{printf("NO");
	}
}
