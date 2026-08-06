/*
#include <stdio.h>
int main()
{
    int cm;
    scanf("%d",&cm);
    double foot=cm/100.0/0.3048;
    int inch=foot*12;
    int foot2=foot;
    printf("%d %d",foot2,inch%12);
    return 0;
}
#include <stdio.h>
int main()
{
    int a;
    int b;
    scanf("%d %d",&a,&b);
    int minute_a=a/100*60+a%100;
    int z=minute_a+b;
    printf("%d%02d",z/60,z%60);
    return 0;
}
#include <stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    int a=num/100+num/10%10*10+num%10*100;
    printf("%d",a);
    return 0;
}*/
#include <stdio.h>
int main() {
    printf("------------------------------------\n"
           "Province      Area(km2)   Pop.(10K)\n"
           "------------------------------------\n"
           "Anhui         139600.00   6461.00\n"
           "Beijing        16410.54   1180.70\n"
           "Chongqing      82400.00   3144.23\n"
           "Shanghai        6340.50   1360.26\n"
           "Zhejiang      101800.00   4894.00\n"
           "------------------------------------\n");
    return 0;
}
