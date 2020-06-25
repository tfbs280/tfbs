#include<stdio.h>
int main(void)
{
	int m,n,i,j;
	int a[i][j],b[i][j];
	float q=0,w=0,sum;
	scanf("%d %d",&m,&n);
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
		scanf("%d",&a[i][j]);
	 	for(i=0;i<m;i++)
        for(j=0;j<n;j++)
		scanf("%d",&b[i][j]);
		for(i=0;i<m;i++)
	for(j=0;j<n;j++)
	{
		q++;
		if(a[i][j]==b[i][j])
		w++;
	 } 
	sum=(w/q)*100;
    printf("%.2f",sum);
    return 0;
	}
