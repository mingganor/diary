/**#include <stdio.h>
int main(){
    int a[25]={[1]=2,4,[5]=6};//数组变量不能赋值给另一个数组
    for(int i=0;i<25;i++){
        printf("%d ",a[i]);
}
    printf("\n%lu\n",sizeof(a));//sizeof 为unsigned long
    printf("%lu\n",sizeof(a[0]));
    int length=sizeof(a)/sizeof(a[0]);
    printf("%d",length);
    return 0;
}*/
#include <stdio.h>
int isPrime(int x,int knowPrimes[],int numberofPrimes);
int main(){
    const int number=100;
    int prime[number],count=1,i=3;
    while(count<number){
        if(isPrime(i,prime,count)){
            prime[count++]=i;
        }
        i++;
    }    

    return 0;
}
int isPrime(int x,int knowPrimes[],int numberofPrimes){
    int ret=1;
    int i;
    for(i=0;i<numberofPrimes;i++){
        if(x%knowPrimes[i]==0){
            ret=0;
            break;
        }
    }
    return ret;
}