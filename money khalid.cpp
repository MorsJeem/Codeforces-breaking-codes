#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main() {
 float num;
 scanf("%f",&num);
 printf("NOTAS:\n");
 printf("%d nota(s) de R$ 100.00\n",(int)num/100);
 num=num%100.00;
 printf("%d nota(s) de R$ 50.00\n",(int)num/50);
 num=num%50.00;
 printf("%d nota(s) de R$ 20.00\n",(int)num/20);
 num=num%20.00;
 printf("%d nota(s) de R$ 10.00\n",(int)num/10);
 num=num%10.00;
 printf("%d nota(s) de R$ 5.00\n",(int)num/5);
 num=num%5.00;
 printf("%d nota(s) de R$ 2.00\n",(int)num/2);
 num=num%2.00;
 printf("MOEDAS:\n");
 printf("%d moeda(s) de R$ 1.00\n",(int)num/1);
 num=num%1.00;
 printf("%d moeda(s) de R$ 0.50\n",(int)num/0.50);
 num=num%0.50;
 printf("%d moeda(s) de R$ 0.25\n",(int)num/0.25);
 num=num%0.25;
 printf("%d moeda(s) de R$ 0.10",(int)num/0.10);
 num=num%0.10;
 printf("%d moeda(s) de R$ 0.05\n",(int)num/0.05);
 num=num%0.05;
 printf("%d moeda(s) de R$ 0.01\n",(int)num/0.01);
 return 0;
}
