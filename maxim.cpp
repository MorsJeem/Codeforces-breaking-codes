#include<stdio.h>
int main()
{
	int n,num[n],i,max;
	printf("Size of our array:\n");
	scanf("%d",&n);
	printf("Enter your numbers:");
	for(i=0;i<n;i++){
		scanf("%d",&num[i]);
	}
	max=num[0];
	for(i=0;i<n;i++)
	{
		max<num[i];
		max=num[i];
	}
	printf("\nMaximum number is %d",max);
	return 0;
}
