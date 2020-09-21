#include<stdio.h>
int main()
{
	int a,b,c,t;
	while(scanf("%d %d %d",&a,&b,&c)!=EOF)
	{
		if(a>=b&&a>=c)
		t=a;
	    else if(b>=a&&b>=c)
		t=b;
		else 
		t=c;
		printf("%d\n",t);
	}
	return 0; } 
