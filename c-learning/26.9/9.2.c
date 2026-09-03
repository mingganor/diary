#include <stdio.h>
void swap(int,int);
int main(){
    int a=5;
    int b=6;
    swap(a,b);
    if (a<b){
        int i=3;
        int a=9;//同一个变量不能在同一个块里多次定义
    }
    //int c=i+a;//这里报错，同理，i在那个块里定义的
    printf("a=%d,b=%d",a,b);
    return 0;
}
void swap(int a,int b){
    int t=a;
    a=b;
    b=t;
    //c中不允许嵌套定义函数，但一个body里面可以放其它的声明
}
/*c在调用函数时，只能传参给函数
每个参数都是只在自己的变量空间*/
void kong(void);
void wei_zhi();