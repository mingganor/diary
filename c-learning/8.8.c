#include <stdio.h>
int main(){
    int shi;
    scanf("%d",&shi);
    int bcd=shi/16*10+shi%16;
    printf("%d",bcd);
    return 0;
} 