#include<stdio.h>
int main()
{
	int t,s;
	float k;
	scanf("%d %d",&t,&s);
	k=1.00*t*10000/(s*s);
	printf("%.2f\n",k);
	return 0;
} 
