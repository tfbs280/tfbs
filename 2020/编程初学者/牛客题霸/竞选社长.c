#include<stdio.h>
int main ()
{
	int j=0,k=0;
	char a;
	while(scanf("%c",&a)!=EOF){
		if(a=='A')j++;
		else if(a=='B')k++;
		else if(a=='0')break;
	}
	if(j>k)printf("A");
	else if(j<k)printf("B");
	else if(j=k)printf("E");
	return 0;
	
 } 
