#include <stdio.h>
int main(){
    int a,b,c;
    printf("请输入一个较大的正整数和一个较小的");
    scanf("%d %d",&a,&b);
    while (b!=0){
        c=a%b;
        a=b;
        b=c;
    }
    printf("它俩最大公约数为%d",a);
    return 0;
}