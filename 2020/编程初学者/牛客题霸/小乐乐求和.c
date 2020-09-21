#include<stdio.h>
int main()
{
	int long long n,sum,i;
	scanf("%d",&n);
	sum=0;
	for(i=1;i<=n;i++)
	{
		sum=sum+i;	
	}
	printf("%lld",sum);
	return 0; } 
