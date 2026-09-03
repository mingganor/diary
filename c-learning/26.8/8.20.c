#include <stdio.h>
unsigned long long jiecheng(int);
unsigned long long jishuxiang(int n);
int main(){
    double p=1,yu,n=1;
    scanf("%lf",&yu);
    for (int i=1;n>=yu;i++){
        n=jiecheng(i-1)/jishuxiang(i);
        p+=n;
    }
    double pi=2*p;
    printf("%lf",pi);
    return 0;
}
unsigned long long jiecheng(int n){
    unsigned long long ji=1;
    for (int i=2;i<=n;i++){
        ji*=i;
    }
    return ji;
}
unsigned long long jishuxiang(int n){
    unsigned long long ji=1;
    for (int i=1;i<=2*n+1;i+=2){
        ji*=i;
    }
    return ji;
}
