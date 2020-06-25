#include<stdio.h>
int main()
{
	int a;
	while(scanf("%d",&a)!=EOF)
	{
		if(a<60)
		printf("Fail\n");
		else
		printf("Pass\n");
	}
	return 0;
}
