#include <stdio.h>
int main(){
    int a,b,sum;
    scanf("%d %d",&a,&b);
    int count=0;
    for (int i=a;i<=b;i++){
        printf("%5d",i);
        count++;
        if (count%5==0)
            printf("\n");
    }
    if (count%5!=0)
        printf("\n");
    printf("Sum = %d",(a+b)*count/2);
    return 0;
}