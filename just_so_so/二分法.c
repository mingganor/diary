#include <stdio.h>
#include <math.h>
double a3,a2,a1,a0,a,b;
double f(double x);
int main(){
    scanf("%lf %lf %lf %lf %lf %lf",&a3,&a2,&a1,&a0,&a,&b);
    double gen;
    while (fabs(a-b)>=0.001){
        if(f(a)*f(b)<0){
            if(f((a+b)/2)==0){
                gen=(a+b)/2;
                break;
            }else if (f((a+b)/2)*f(a)>0){
                a=(a+b)/2;
            }else {
                b=(a+b)/2;
            }
        }else if (f(a)==0){
            gen=a;
            break;
        }else if (f(b)==0){
            gen=b;
            break;
        }else {
            gen=(a+b)/2;
            break;
        }
    }
    printf("%.2f",gen);
    return 0;
}
double f(double x){
    double fx=a3*x*x*x+a2*x*x+a1*x+a0;
    return fx;
}