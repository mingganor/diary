#include <stdio.h>
int main(){
    int a,b=0;
    double f=0;
    scanf("%d %lf %d",&a,&f,&b);
    printf("%d%d\n%d %d\n%8.2f %d %d",a,b,b,a,f,a,b);
    return 0;
}