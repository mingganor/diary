#include <stdio.h>
int main()
{
    
    int price=0;
    printf("请输入你的价格");
    scanf("%d",&price);
    
    int change=100-price;
    printf("你的余额为%d元",change);
    return 0;
}