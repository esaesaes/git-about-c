//一个整数，它加上100后是一个完全平方数，再加上168又是一个完全平方数，请问该数是多少？
#include<stdio.h>
#include<math.h>
int main()
{
    int a=0;
    
    
    
    for(int i=a;i<=10000000000;i++)
    {
      
        int x=a+100;
       int y=a+268;
       int sqrt_x=(int)sqrt((double)x);
       int sqrt_y=(int)sqrt((double)y);
       
        if(sqrt_x*sqrt_x==x && sqrt_y*sqrt_y==y)
        {
            printf("%d",a);
            break;
        }
        else printf("no number");break;

    }
    return 0;

}