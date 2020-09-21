#include<stdio.h>
int main()
{
	int a,b,temp;
	scanf("%d %d",&a,&b);
	a=a%100;
	b=b%100;
	temp=a+b;
	printf("%d",temp%100);
	return 0;
	 
 } 
