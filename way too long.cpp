#include<stdio.h>
#include<string.h>
int main()
{
char a[1000];
int i,l,n;
 
scanf("%d",&n);
for(i=1; i<=n ;i++){
	
 
 
gets(a);
l=strlen(a);
if(l<= 10)
{
	printf("%s\n",a);
	
}
	else
	{
		printf("%c%d%c\n",a[0],l-2,a[l-1]);
	}
	
	}
	
	
}
