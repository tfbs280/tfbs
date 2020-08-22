#include<stdio.h>
int main()
{
	int i,j,m;
	char a;
	scanf("%c",&a);
	for(i=1;i<=5;i++)
	{
		for(j=5-i;j>0;j--)
		printf(" ");
		for(m=1;m<=i;m++)
	printf("%c ",a);
	printf("\n");	
	}
	return 0;
}
