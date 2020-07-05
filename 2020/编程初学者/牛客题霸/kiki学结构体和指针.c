#include<stdio.h>
#include<string.h>
main() 
{
	int n;
	scanf("%d",&n);
	int a[n],i;
	for(i=0;i<n;i++)
    	scanf("%d",&a[i]);
	int b[n],k=0,x;
	scanf("%d",&x);
	for(i=0;i<n;i++)
	{
		if(a[i]!=x)
		b[k++]=a[i];
	}
	printf("%d\n",k);
	for(i=0;i<k;i++)
	printf("%d ",b[i]);
	return 0;
	
}
