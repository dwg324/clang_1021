#include <stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int *p;
    p=&num;
    printf("%d...%d",*p/10,*p%10);
}