#include <stdio.h>
#include <stdlib.h>//为随机数而写
#include <time.h>//同上
int main(){
    srand(time(0));
    int a=rand()%100+1;//生成的随机数取后俩位
    int count=0;
    int b;
    do {
        printf("从1到100猜一个数");
        scanf("%d",&b);
        count++;
        if (b>a){
            printf("大了\n");
        }else if (b<a){
            printf("小了\n");
        }else {
            printf("猜对了\n");
            printf("猜了%d次",count);
        }
    }while (b!=a);
    return 0;
}