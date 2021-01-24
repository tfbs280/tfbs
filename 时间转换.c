#include<stdio.h>
int main()
{
	int second,a,b,c;
	scanf("%d",&second);
	a=second/3600;
	b=second%3600/60;
	c=second%3600%60;
	printf("%d %d %d",a,b,c);
}
