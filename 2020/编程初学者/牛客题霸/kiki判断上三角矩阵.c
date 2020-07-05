#include<stdio.h>
#include<stdlib.h>
#define M 4
#define N 4
int main()
{
	int n; 
	int a[n][n],i=0,j=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		scanf("%d",&a[n][n]);
	}
	{
		for(i=1;i<n;i++)
		{
			for(j=0;j<i;j++)
			{
				if(a[i][j])
				printf("NO\n");
				return 0;
				}
		}
		printf("YES\n");
		return 0;
		
	}
}
