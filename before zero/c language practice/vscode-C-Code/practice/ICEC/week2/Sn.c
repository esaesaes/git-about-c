#include <stdio.h>
int fc(int x);

int main()
{
    int n=0;
    printf("Please input n:");
    scanf("%d",&n);
    double S=0.0;
    
    //for(n;n<0;n--)
    for(;n>=0;n--)
    {
        S+=1.0/fc(n);
        //S+=1/((double)fc(n));//强制转换数据类型；
    }


    printf("%.16lf",S);
}

int fc(int x)//该函数求x!的值
{
    //int cnt=n;
    //x=1;
    ////int v=1;//v就是n！
    //for(cnt;cnt<=1;cnt--)
   // {
   //     //v*=n*(n-1);
   //     x*=n*(n-1);
   // }
    //return x;
    int v = 1;
    for (int i = 2; i <= x; i++) {
        v *= i;
    }
    return v;



   
}