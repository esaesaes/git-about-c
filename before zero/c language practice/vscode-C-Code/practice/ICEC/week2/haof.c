#include <stdio.h>
double fc(double x)
{
    double v=1.0;
    for(int i=1;i<=x;i++)
    { 
        v*=i;
    }
    return v;
}
int main()
{
    int n;
    double x;
    double  S=0.0;
    printf("Please input n:");
    scanf("%d",&n);
    //for(int r=0;r<=n;r++)
    for(int r=1;r<=n;r++)
    {
        S+=1.0/fc(r);
        //S+=1.0/fc(x);
    } 
    if(n<=2)
    {
        switch(n)
        {
        case 0:
            printf("\nS=1/0!=1");break;
        case 1:
            printf("\nS=1/1!=1.0000000000000000");break;
        case 2:
            printf("\nS=1/1!+1/2!=%.16lf",S);break;       
        }
    } 
    else //if(n>2) 
    {
        printf("\nS=1/1!+1/2!+...+1/%d!=%.16lf",n,S); 
    }  
    return 0; 
}