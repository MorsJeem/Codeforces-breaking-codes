#include<stdio.h>
int main()
{
	int k,n,w,i=1,sum=0,price;//k=1st banana price,n=budget,w=desire banana
	
	scanf("%d %d %d",&k,&n,&w);
	while(i<=w)
	{
		price=i*k;
		sum=sum+price;
		i++;	
	}
	
	
	if(sum>n){
		printf("%d",sum-n);
	}
	else{
		printf("0  \n");
	}
	return 0;

	
}
