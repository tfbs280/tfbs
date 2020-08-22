#include<stdio.h>
int main()
{
	int n,h,m,sum;
	scanf("%d %d %d",&n,&h,&m);
	if(m%h==0)
	sum=(n-m/h);
	else
	sum=(n-m/h)-1;
	printf("%d\n",sum);
	return 0;
}
