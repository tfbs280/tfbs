#include<stdio.h>
int main()
{
	int a,b,c,d,e,sum;
	float average;
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	sum=(a+b+c+d+e);
	average=sum/5.0;
	printf("%.1f",average);
	return 0; 
 } 
