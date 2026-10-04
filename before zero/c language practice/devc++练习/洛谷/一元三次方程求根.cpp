#include<stdio.h>
#include<math.h>


   
    double a,b,c,d;
    double f(double x)
    {
        return a*x*x*x+b*x*x+c*x+d;
    }
    int main()
    {   
         
       
        scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
        int num=0;
        for(double i=-100;i<=100;i+=0.01)
        {
           double l=i;
           double r;
            r=l+0.01;
            double y1=f(l);
            double y2=f(r);
            //if(!y1){printf("%.2lf",l);num++;};
            //else if(!y2){printf("%.2lf",r);num++;};
            if(fabs(y1) <1e-6){printf("%.2lf",l);num++;}//fabs:取浮点数的绝对值；
            else if(fabs(y2)<1e-6){printf("%.2lf",r);num++;}

            else if(y1*y2<0){printf("%.2lf",(l+r)/2);num++;}
            if(num==3) break;
        }
        return 0;
    }//这个有问题，这道题没有改错
    
