#include<stdio.h>
int main()
{
	float kg,tall,bmi;
	scanf("%f %f",&kg,&tall);
	bmi=kg/(tall*tall);
	if(18.5<=bmi&&bmi<=23.9)
	printf("Normal\n");
	else
	printf("Abnormal\n");
	return 0;
	
}
