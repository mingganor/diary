#include <stdio.h>
int main(){
    int a[3][5]={0};
    for (int i=0;i<3;i++){
        for (int j=0;j<5;j++){
            a[i][j]=i*j;
        }
    }
    for (int i=0;i<3;i++){
        for (int j=0;j<5;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    int b[][5]={
        {0,1,2,3,4},
        {2,3,4,5,6},
    };
    int *p=&b[1][1];
    printf("%p\n",p);
    printf("%d\n",*p);
    printf("%p\n", (void*)&p);
    return 0;
}
void f(int *p){
}