#include <stdio.h>
int main(){
    int a,b;
    double pay1;
    scanf("%d %d",&a,&b);
    if (a<5){
        pay1=30;
    }else{
        pay1=50;
    }
    if (b<=40){
        printf("%.2f",b*pay1);
    }else{
        printf("%.2f",pay1*(40+1.5*(b-40)));
    }
    
    return 0;
}