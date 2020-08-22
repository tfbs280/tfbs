#include<stdio.h>
int main()
{
	float a,c;
	int month,day,b;
	scanf("%f %d %d %d",&a,&month,&day,&b);
	if(b==1&&day==11&&month==11)
	{
	c=a*0.7-50;
	} 
	else if(b==0&&day==11&&month==11) 
	{
	c=a*0.7;
	} 
	else if(b==1&&day==12&&month==12)
	{
	c=a*0.8-50;
    }
	else if(b==0&&day==12&&month==12)
	{
	c=a*0.8;
	}
	else 
    c=a;
    if(c<0)
    {
	c=0;
}
    printf("%.2f\n",c);
	return 0;
 } 
