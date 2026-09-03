#include <stdio.h>
int main(){
    double yu,n=1.0,p=1.0;
    scanf("%lf",&yu);
    for(int i=1;n>=yu;i++){
        n=n*i/(2.0*i+1);
        p+=n;
    }
    printf("%.6lf",2.0*p);
    return 0;
}
