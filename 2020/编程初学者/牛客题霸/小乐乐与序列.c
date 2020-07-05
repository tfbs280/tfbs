#include<stdio.h>
int main()
{
	int n,i,k;
	scanf("%d",&n);
	int b[10001]={0};
	for(i=0;i<n;i++)
    {   
	scanf("%d",&k);
	b[k]++;
	}
	for(i=0;i<10001;i++)
	{
		if(b[i])
		printf("%d ",i);
	}
	return 0;
 } 
