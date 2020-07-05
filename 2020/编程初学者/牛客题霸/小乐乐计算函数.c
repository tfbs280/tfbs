#include<stdio.h>
#include<math.h>
int max(int a,int b,int c)
{
	int max=a;
	if(b>max)
	max=b;
	if(c>max)
	max=c;
	return max;
 }
int main()
{
	int a,b,c;
	float m;
	scanf("%d %d %d",&a,&b,&c);
	m=1.*max(a+b,b,c)/(max(a,b+c,c)+max(a,b,b+c));
	printf("%.2f",m);
	return 0;	
}
 
