#include <stdio.h>
int mi(int a);
int prime(int s);
int panduan(int a);
int main()
{
    int t, l, r;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int cnt = 0;
        scanf("%d %d", &l, &r);
        for (int j = l; j <= r; j++){
            if (panduan(j))
                cnt++;
        }
        printf("%d\n", cnt);
    }
    return 0;
}
int panduan(int a)
{ // 判断j是不是好数
    for (int i = 0; a >= mi(i); i++)
    {
        int shang = a / mi(i);
        int j = 0;
        while (1){
            int s = shang % mi(j);
            if (prime(s))
                return 1;
            if (shang<mi(j)&&s==(shang%mi(j+1))){
                break;
            }
            j++;
        }
    }
    return 0;
}
int prime(int s)
{ // 判断是不是素数，是则返回1
    if (s == 0 || s == 1)
        return 0;
    if (s == 2)
        return 1;
    for (int i = 2; i < s; i++)
    {
        if (s % i == 0)
            return 0;
    }
    return 1;
}
int mi(int a)
{ // 计算10的a次幂
    int ji = 1;
    for (int i = 0; i < a; i++)
        ji *= 10;
    return ji;
}