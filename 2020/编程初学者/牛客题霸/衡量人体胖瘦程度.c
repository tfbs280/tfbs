#include<stdio.h>
int main()
{
  int w,h;
  while(scanf("%d %d",&w,&h))
  {
  	double h1=h*1.0/100;
  	double bmi=w*1.0/(h1*h1);
	  if(bmi<18.5)
	  {
	  printf("Underweight\n") ;
      }
	  else if(bmi>=18.5&&bmi<=23.9)
	  {
	  printf("Normal\n");
	  }
	  else if(bmi>23.9&&bmi<=27.9)
	  {
	  printf("Overweight\n");
	  }
	  else if (bmi>27.9)
	  {
	  printf("Obese\n");
	  } 
  }
  return 0;
} 
