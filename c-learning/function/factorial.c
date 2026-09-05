#include <stdio.h>
int main(){
    return 0;
}
int factorial(int n){
    int pai=1;
    for(int i=2;i<=n;i++){
            pai*=i;
    }
    return pai;
}