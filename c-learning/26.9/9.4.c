/*#include <stdio.h>
int main(){
    int n,u,d,high=0,time=0;
    scanf("%d %d %d",&n,&u,&d);
    while (high>=0){
        time++;
        high+=u;
        if (high>=n){
            printf("%d",time);
            break;
        }
        time++;
        high-=d;    
    }
    return 0;
}
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
}*/
#include <stdio.h>
int main(){
    const int number=10;
    int x;
    int count[10]={0};
    /*
    int i;
    for (i=0;i<number;i++){
        count[i]=0;
    }
    */
    scanf("%d",&x);
    while (x!=-1){
        if(x>=0 && x<=9){
            count[x]++;
        }
        scanf("%d",&x);
    }
    for (int i=0;i<number;i++){
        printf("%d:%d ",i,count[i]);
    }
    return 0;
}