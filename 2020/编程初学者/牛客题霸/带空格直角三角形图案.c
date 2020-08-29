#include<stdio.h>
int main()
{
	int a,i,j,k;
	while(scanf("%d",&a)!=EOF)
   {
   	for(i=1;i<=a;i++)
   	
   	{for(j=1;j<=a-i;j++){
	   
   		printf("  ");}
   		for(k=0;k<i;k++){
   			printf("* ");
		   }
		printf("\n");    
	   }
   }
	return 0;
 } 
