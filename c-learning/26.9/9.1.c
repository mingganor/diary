#include <stdio.h>
int main(){
    int b=(printf("hi\n"),5);//逗号运算符返回最后一个表达式的值
    printf("%d",b);
    return 0;
}