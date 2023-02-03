#include<stdio.h>
int main()
{
	long int num,times,i;
	scanf("%ld%ld",&num,&times);
	for(i=0;i<times;i++)
	{
		if(num%10==0){
			num=num/10;
		}
		else{
			num=num-1;
		}
	}
	printf("%ld",num);
	return 0;
}
