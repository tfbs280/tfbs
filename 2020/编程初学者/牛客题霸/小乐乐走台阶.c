#include<stdio.h>
int main()
{
	int a[90],i;
	a[1]=1;
	a[2]=2;
	for(i=3;i<90;i++)
	{
		a[i]=a[i-1]+a[i-2];
	}
	int n;
	while((scanf("%d",&n))!=EOF)
	printf("%d",a[n]);
	return 0;
 } 
