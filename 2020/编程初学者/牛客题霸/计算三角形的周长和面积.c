#include<stdio.h>
#include<math.h> 
int main()
{
	int a,b,c;
	float z,m,p;
	scanf("%d %d %d",&a,&b,&c);
	z=a+b+c;
	p=z/2;
	m=sqrt(p*(p-a)*(p-b)*(p-c));
	printf("circumference=%.2f area=%.2f\n",z,m);
	return 0;
}
