#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,h,x1,x2;
	while(scanf("%f %f %f",&a,&b,&c)!=EOF)
	{
		if(a==0)
		{
		printf("Not quadratic equation\n");
	    }
		if(a!=0)
		{
		  	h=b*b-4*a*c;
		  	if(b*b-4*a*c==0)
			printf("x1=x2=%.2f\n",-b/(2*a));
		  	if(b*b-4*a*c>0)
			printf("x1=%.2f;x2=%.2f\n",-(b+sqrt(h))/(2*a),-(b-sqrt(h))/(2*a));
		   if (b*b-4*a*c<0)
			printf("x1=%.2f-%.2fi;x2=%.2f+%.2fi\n",-b/(2*a),sqrt(-h)/(2*a),-b/(2*a),sqrt(-h)/(2*a));		   
		}	   
	}
    return 0;
}
