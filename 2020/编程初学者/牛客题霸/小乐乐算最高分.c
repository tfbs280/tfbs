#include<stdio.h>
int main()
{
	int n,i,max,souse;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&souse);
		if(max<=souse)
		max=souse;
	}
	printf("%d",max);
	return 0;
 } 
