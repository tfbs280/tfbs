#include<stdio.h>
int main()
{
	char a=0;
	char s[]="AaEeIiOoUu";
	while(~scanf("%c",&a))
	{
		int i=0;
		for(i=0;i<10;i++)
		{
			if(a==s[i])
			{
				printf("Vowel\n");
				break;
			}
		}
		if(i==10)
		printf("Consontant\n");
	}
	return 0;
	
 } 
