#include<stdio.h>
int main()
{
    int cnt=0;
    int arr[16];
    int i=0;
    printf("请输入若干数：");
    for(i;i<=15||arr[i]==-1;i++)
    {
        scanf("%d",&arr[i]);
        cnt++;
    }
    printf("这些数的倒序是：");
    for(cnt;cnt>=0;cnt--)
    {
        printf("%d",arr[cnt]);
    }
    return 0;


}
