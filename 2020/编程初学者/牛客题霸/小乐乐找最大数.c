#include<stdio.h>
int main()
{
    int a,b,c,d,t;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a>b)t=a;
    else t=b;
    if(t>c)t=t;
    else t=c;
    if(t>d)t=t;
    else t=d;
     
    printf("%d",t);
    return 0;
}
