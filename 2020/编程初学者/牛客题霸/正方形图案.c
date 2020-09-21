#include<stdio.h>
int main()
{
	int a;
	while(scanf("%d",&a)!=EOF)
	{
		int i=1,j;
		for(i=0;i<a;i++)
		{
			for(j=0;j<a;j++)
			printf("* ");
			printf("\n");
		}
	}
	return 0;
}
