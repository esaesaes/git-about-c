#include<stdio.h>
int main()
{
    int cnt=0;
    int arr[16];
    printf("请输入若干数：");
    for(int i=0;i<16;i++)
    {
        scanf("%d",&arr[cnt]);
        
        if(arr[cnt]==-1)
        {   
            
            break;
        }    
        else 
            cnt++;
         
    }
    printf("这些数的倒序是：");
    for(int i=cnt-1;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}