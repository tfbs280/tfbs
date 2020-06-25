#include<stdio.h>
int main()
{
	char a[20],b[20];
	scanf("%s %s",&a,&b);
	if(strcmp("admin",a)==0&&strcmp("admin",b)==0)
	printf("Login Success£¡");
	else
	printf("Login Fail!"); 
 } 
