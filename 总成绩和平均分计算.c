#include<stdio.h>
int main()
{
	float a,b,c,sum,ave;
	scanf("%f %f %f",&a,&b,&c);
	sum=a+b+c;
	ave=sum/3;
	printf("%.2f %.2f",sum,ave);
	return 0;
}
