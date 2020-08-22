#include<stdio.h>

int main(void)
{
    float a;
    scanf("%f", &a);
    
    printf("%.3f\n", 3.1415926 * a * a * a * 4 / 3);
    return 0;
}
