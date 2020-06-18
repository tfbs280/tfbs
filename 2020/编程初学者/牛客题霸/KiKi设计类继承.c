#include <stdio.h>
    
#define PAI 3.14f
    
int main()
{
    int length,width,r,a;
    scanf("%d %d %d %d",&length,&width,&r,&a);
    float s1,s2,s3;
    s1 = length*width;
    s2 = PAI*r*r;
    s3 = a*a;
    printf("%g\n%g\n%g\n",s1,s2,s3);
    
    return 0;
}
