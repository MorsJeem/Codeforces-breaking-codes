#include<stdio.h>
int main()
{
 int i,n,j,a[5],d=0;
 scanf("%d",&n);
 for(i=0; i<n ;i++)
 {
 	for(j=0; j<3 ;j++)
 	{
 		scanf("%d",&a[j]);
          }
	 
	 if(a[0]+a[1]+a[2]>=2){
	 	d++;
	 }
     
 }
 printf("%d",d);
 return 0;
 
 
 
 }
