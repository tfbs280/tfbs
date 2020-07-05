#include<stdio.h>
int main()
{
	int i,n,avery,a,b,c,man=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d %d %d",&a,&b,&c);
		avery=(a+b+c)/3;
		if(avery<60)
		man++;
	}
	printf("%d",man);
}
