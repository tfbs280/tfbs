#include<stdio.h>
int main()
{
	int day,year,month;
	while(scanf("%d %d",&year,&month)!=EOF)
	{
	switch(month)
	{
		case 1:day=31;break;
		case 2:day=28;break;
		case 3:day=31;break;
	    case 4:day=30;break;
	    case 5:day=31;break;
	    case 6:day=30;break;
		case 7:day=31;break;
		case 8:day=31;break;
		case 9:day=30;break;
		case 10:day=31;break;
		case 11:day=30;break;
		case 12:day=31;break;
	}
	if(year%4==0&&year%100!=0||year%400==0)
	{
		if(month==2)
		{
			printf("%d\n",day+1);
		}
		else{
			printf("%d\n",day);
		}
	}else{
		printf("%d\n",day);
	}	
	  }
	return 0;
}
