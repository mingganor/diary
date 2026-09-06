#include <stdio.h>
int  isPrime(int x,int knownPrimes[],int numberofKnownPrimes);
int main(){
    int number=100;
    int prime[number];
    prime[0]=2;
    int count=1;
    int i=3;
    while(count<number){
        if (isPrime(i,prime,count)){
            prime[count++]=i;
        }
        i++;
    }
    for (i=0;i<number;i++){
        printf("%d",prime[i]);
        if ((i+1)%5) printf("\t");
        else printf("\n");
    }
    return 0;
}
int  isPrime(int x,int knownPrimes[],int numberofKnownPrimes){
    int ret=1;
    int i;
    for(i=0;i<numberofKnownPrimes;i++){
        if(x%knownPrimes[i]==0){
            ret=0;//所有的合数必须有质因数，所以因数里没有素数，即不被比它小的所以质数整除的，就是素数
            break;
        }
    }
    return ret;
}