#include<stdio.h>
int main()
{
	char c;
	while(scanf("%c",&c)!=EOF){
		if((c>=65&&c<=90)||(c>=97&&c<=122)){
			printf("YES\n"); 
		}
		else{
			printf("NO\n");
		}
		getchar();
	}
 } 
