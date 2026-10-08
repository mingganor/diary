#include <stdio.h>
int main(){
    int k=0;
    double Sn=0.0;
    int n=1;
    scanf("%d",&k);
    for(n=1;Sn<=k;n++){
        Sn+=1.0/n;
    }
    printf("%d",n-1);
    return 0;
}