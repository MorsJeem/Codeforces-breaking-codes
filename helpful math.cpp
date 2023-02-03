#include<stdio.h>
#include<string.h>
int main(){
	char a[100];
	scanf("%s",a);
	int i,j,temp;
	for(i=0;i<strlen(a);i=i+2){
		for(j=i+2;j<strlen(a);j=j+2){
			if(a[i]>a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("%s",a);
	return 0;
}
