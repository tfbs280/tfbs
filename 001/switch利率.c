#include<stdio.h>
#include<math.h>
int main()
{
    int year,benjin;
    float total,lilv;
    printf("�������Ǯ��� ����:");
    scanf("%d%d",&year,&benjin);
    switch(year)
    {
        case 1:lilv=0.0225;break;
        case 2:lilv=0.0243;break;
        case 3:lilv=0.0268;break;
        case 5:lilv=0.0395;break;
        default:printf("�������");
    }
    total=benjin*pow(1+lilv,year);
    printf("%f",total);
    return 0;
}
