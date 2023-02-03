#include<stdio.h>
int main(){
	long int g,an=0,dan=0,i;
	char s[100000];
	scanf("%ld",&g);
	scanf("%s",&s);
	for(i=0;i<g;i++){
		if(s[i]=='A'){
			an++;
		}
		else if(s[i]=='D'){
			dan++;
		}
	}
	if(an>dan){
		printf("Anton");
	}
	else if(an<dan){
		printf("Danik");
	}
	else{
		printf("Friendship");
	}
	return 0;
}
