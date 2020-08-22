#include<stdio.h>
int main()
{
	int a=1,b=2,c;
	scanf("a=%d,b=%d",&a,&b);
	c=a;
	a=b;
	b=c;
	printf("a=%d,b=%d",a,b);
	return 0;
}
