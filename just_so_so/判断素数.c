#include <stdio.h>
int main(){
    int n;
    int a=1;
    scanf("%d",&n);
    for (int i = 2; i < n; i++){
        if (n%i==0){
            a*=0;//或a=0;break;
        }
    }
    if (a==1){
        printf("n是素数");
    }else {
        printf("%d不是素数",n);
    }
    return 0;
}