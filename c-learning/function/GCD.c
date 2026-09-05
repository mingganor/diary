#include <stdio.h>
int gcd(int a,int b);
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d",gcd(a,b));
    return 0;
}
int gcd(int a,int b){//greatest common divisoR
    int c;
    if(a<b){
        c=a;
        a=b;
        b=c;
    }
    while(b!=0){
        c=a;
        a=b;
        b=c%b;
    }
    return a;
}