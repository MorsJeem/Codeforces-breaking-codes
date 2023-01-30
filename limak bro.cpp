#include<stdio.h>
int main()
{
	int limak,bigb,y=01;
	scanf("%d %d",&limak,&bigb);
	while(limak<=bigb)
	{
		limak=limak*3;
		bigb=bigb*2;
		if(limak<=bigb)
		{
		y++;
		}
	}
	printf("%d",y);
	return 0;
}
