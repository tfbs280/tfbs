#include<stdio.h>
int main()
{
	double a,b,c;
	char f;
	while(~scanf("%lf %c %lf",&a,&f,&b))
	{
		getchar(); 
		switch(f)
		{
		case '+':c=a+b;printf("%.4lf%c%.4lf=%.4lf\n",a,f,b,c);break;
		case '-':c=a-b;printf("%.4lf%c%.4lf=%.4lf\n",a,f,b,c);break;
		case '*':c=a*b;printf("%.4lf%c%.4lf=%.4lf\n",a,f,b,c);break;
		case '/':
		if(b!=0)
		{
		c=a/b;printf("%.4lf%c%.4lf=%.4lf\n",a,f,b,c);break;
	    }
	    else 
		{
	    printf("Wrong!Division by zero!\n") ;break;}
		default:printf("Invalid operation!\n");break;
		} 
	}
	return 0;
}
