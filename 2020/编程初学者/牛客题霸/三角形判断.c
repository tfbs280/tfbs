#include<stdio.h>
int main()
{
	int a,b,c;
	while(scanf("%d %d %d",&a,&b,&c)!=EOF)
	{
		if(a+b>c&&b+c>a&&a+c>b)
		{
			if(a==b&b==c)printf("Equilateral triangle!");
			else if ((a==b&&a!=c)||(a==c&&a!=b)||(b==c&&b!=a))
	    	printf("Isosceles triangle!");
		    else  printf("Ordinary triangle!");
			}
		else printf("Not a triangle!");
	}
	return 0;
}
