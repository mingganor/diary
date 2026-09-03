#include <stdio.h>
int main(){
    int n1,n2,a,b;
    printf("请输入两个正整数");
    scanf("%d %d",&n1,&n2);
    if (n1<n2){
        a=n1;
        b=n2;
    }else {
        b=n1;
        a=n2;
    }
    int ret=0;
    for (int i=1;i<a;i++){
        if (a%i==0 && b%i==0){
            ret=i;
        }
    }
    printf("(%d,%d)=%d",n1,n2,ret);
    return 0;
}