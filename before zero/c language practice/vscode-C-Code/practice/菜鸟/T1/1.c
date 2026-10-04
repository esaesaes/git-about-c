//：有 1、2、3、4 四个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？
#include <stdio.h>
int main()
{
    int num=0;
    int cnt=0;
    int a,s,d;
    for(a=1;a<=4;a++)
    {
        for(s=1;s<=4;s++)
        {
            for(d=1;d<=4;d++)
            {
                
                
                if(a!=s&&a!=d&&s!=d)
                {
                    printf("%d,%d,%d\n",a,s,d);
                }

                    
                    cnt++;
                
                    
            }
        }
    }
    printf("\n%d",cnt);


   return 0; 
}