#include<stdio.h>
int main()
{
	int a,i;
	int sum=0,p1,p2;
	for(a=10000;a<100000;a++)
	{
		for(i=1;i<5;i++)
		{
		p1=a/(int)pow(10,i);
		p2=a%(int)pow(10,i);
		sum += p1*p2;
	}
	if(a==sum)
	{
		printf("%d",sum);
	}
	sum=0;
	}
	return 0;
}

