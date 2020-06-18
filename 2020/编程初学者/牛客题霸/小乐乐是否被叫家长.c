#include<stdio.h>
int main()
{
    int a,b,c,z;
    scanf("%d %d %d",&a,&b,&c);
    z=(a+b+c)/3;
    if(z>=60)
    printf("NO");
    else
    printf("YES");
    return 0;
}
