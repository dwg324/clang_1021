#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    float d[100]={0},*p;
    for(int i=0;i<a;i++) scanf("%f",&d[i]);
    p=d;
    for(int i=0;i<a;i++) printf("%.2f ",*(p+i));
    float sum=0;
    for(int i=0;i<5;i++) sum+=*(p+i);
    printf("\nhap : %.2f\navg : %.2f",sum,sum/a);
}