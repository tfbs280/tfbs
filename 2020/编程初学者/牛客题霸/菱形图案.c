#include<stdio.h>
int main(){
    int n=0,i,j;
    while(scanf("%d",&n)!=EOF){
        for(i=0;i<n+1;i++){
            for(j=0;j<n-i;j++)
                printf(" ");
            for(j=0;j<i+1;j++)
                printf("* ");
            printf("\n");
        }
        for(i=n+1;i<2*n+1;i++){
            for(j=0;j<i-n;j++)
                printf(" ");
            for(j=0;j<2*n-i+1;j++)
                printf("* ");
            printf("\n");
        }
    }
}
