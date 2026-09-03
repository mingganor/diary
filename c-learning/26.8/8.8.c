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
/*
#include <stdio.h>
int main(){
    int v;
    scanf("%d",&v);
    if (v<=60){
        printf("Speed: %d - OK",v);
    }else{
        printf("Speed:%d-Speeding",v);
    }  
    int h;
    int m;
    scanf("%d:%d",&h,&m);
    if (h<=12){
        if (h<12){  
            printf("%d:%d AM",h,m);
        }else{
            printf("%d:%d PM",h,m);
        }
    }else{
        printf("%d:%d PM",h-12,m);
    }
    return 0;   
}*/
#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if (a!=b && b==c){
        printf("A");
    }else if (b!=a && a==c){
        printf("B");
    }else{
        printf("C");
    }
    return 0;
}
