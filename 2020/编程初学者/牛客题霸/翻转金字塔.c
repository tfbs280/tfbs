#include<stdio.h>
int main()
{
	int i,m,a;
	while(scanf("%d",&a)!=EOF)
	{
		getchar();
	for(i=1;i<=a;i++)
	{
	    for(m=0;m<=i-2;m++)
    	{
		printf(" ");
		}
		for(m=a;m>=i;m--)
		{
		printf("* ");
		}
		printf("\n");	
	}
	}
	return 0;
}
