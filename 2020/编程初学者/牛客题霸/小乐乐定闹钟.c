#include<stdio.h>
int main()
{
	int hour,minute,t;
	scanf("%d:%d %d",&hour,&minute,&t);
	minute=minute+t;
	hour=(hour+minute/60)%24;
	minute%=60;
	printf("%02d:%02d",hour,minute);
 } 
