#include<stdio.h>
int main()
{
	int i=1,j=1,n;
	int t,sum=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		t=1;
		for(j=1;j<=i;j++)
        {
		t=t*j;
		}
		sum=sum+t;              
		}
		printf("%d",sum);
		return 0;
		}
		
