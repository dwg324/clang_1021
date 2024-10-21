#include <stdio.h>
int main(){
    float d[5];
    for(int i=0;i<5;i++) scanf("%f",&d[i]);
    float *p;
    p=d;
    printf("%.1f %.1f %.1f %.1f %.1f",*p,*(p+1),*(p+2),*(p+3),*(p+4));
}