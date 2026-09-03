#include <stdio.h>
int you(int a,int b,int c,int d,int n);
int main(){
    int a;
    scanf("%d",&a);
    int b=a+1,c=a+2,d=a+3,count=0;
    for(int i=100;i<999;i++){
        int h=i/100,t=(i/10)%10,g=i%10;
        if (you(a,b,c,d,h) && you(a,b,c,d,t) && you(a,b,c,d,g) && h!=t && t!=g && g!=h){
            printf("%d",i);
            count++;
            if (count%6==0)
                printf("\n");
            else
                printf(" ");
        }
    }
    return 0;
}
int you(int a,int b,int c,int d,int n){
    return n==a || n==b || n==c || n==d;
}
    