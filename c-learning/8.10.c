/*
#include <stdio.h>
int main(){
    int n;
    int fact=1;
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        fact*=i;
    }
    printf("%d",fact);
    return 0;
}*/
#include <stdio.h>
int main(){
    int n;
    int a=1;
    scanf("%d",&n);
    for (int i = 2; i < n; i++){
        if (n%i==0){
            a*=0;
        }
    }
    if (a==1){
        printf("n是素数");
    }else {
        printf("%d不是素数",n);
    }
    return 0;
}