#include<stdio.h>
int main()
{
	int a;
	while(scanf("%d",&a)!=EOF)
	{
		int i,j;
		for(i=0;i<a;i++)
		{
			for(j=0;j<a-i;j++)
			printf("* ");
			printf("\n");
		}
	}
	return 0;
}
