/*
#include <stdio.h>
int main(){
    int shi;
    scanf("%d",&shi);
    int bcd=shi/16*10+shi%16;
    printf("%d",bcd);
    return 0;
} */
#include <stdio.h>
int main(){
    int x;
    int n=0;
    scanf("%d",&x);
    do
    {
       n++;
       x/=10; 
    } while (x>0);
    printf("%d位",n);
    return 0;
}
