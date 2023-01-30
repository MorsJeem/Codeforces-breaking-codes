#include<stdio.h>
#include<math.h>
int main()
{
	int a[6][6],i,j,c,r;
	for(i=1;i<6;i++)
	{
		for(j=1;j<6;j++)
		{
			scanf("%d",&a[i][j]);
			if(a[i][j]==1)
			{
				c=abs(3-i);
				r=abs(3-j);
				printf("%d",c+r);
			}
		}
	}
	return 0;
}
