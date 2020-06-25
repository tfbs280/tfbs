#include <stdio.h>
 
int main()
{
    int num,i;
    scanf("%d",&num);
    float score[num];
    float max=0,min=100,avg=0;
    for(i=0;i<num;i++){
        scanf("%f",&score[i]);
        if(score[i]>max) max = score[i];
        if(score[i]<min) min = score[i];
        avg += score[i];
    }
    avg /= i;
    printf("%.2f %.2f %.2f\n",max,min,avg);
    return 0;
}
