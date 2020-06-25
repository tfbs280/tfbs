#include<stdio.h>
int main()
{
	int a,i;
	scanf("%d",&a);
    for(i=0;i<4;i++)
{
	printf("%d",a%10);
	a=a/10;
	}	
	return 0;
}
