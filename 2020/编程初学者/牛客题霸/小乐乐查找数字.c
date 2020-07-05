#include<stdio.h>
#define SIZE 100 
int main(void)
{
	int n;
	int x,a[SIZE],i,t,m=0;
	scanf("%d",&n); 
	for(i=0;i<n;i++)
	{	
	scanf("%d",&a[i]);
    }
	scanf("%d",&x);
	for(i=0;i<n;i++)
	{
	if(a[i]==x)
	m++;
	}
    printf("%d",m);
    return 0;
	
}
