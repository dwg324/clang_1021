#include <stdio.h>
#include <stdlib.h>
int main(){
    int d[5],*p;
    for(int i=0;i<5;i++) scanf("%d",&d[i]);
    p=d;
    printf("%d %d %d",*p,*(p+2),*(p+4));
}