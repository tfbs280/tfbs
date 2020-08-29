#include<stdio.h>
int main()
{
	int i,j,a;
	while(scanf("%d",&a)!=EOF)
	{
	for(i=0;i<a+1;i++)
	{
		for(j=0;j<a-i;j++)
		{
		printf(" ");}
		for(j=1;j<i+1;j++)
		{	
     	printf("* ");}
     	printf("\n");	
	}
	}
	return 0;
}
