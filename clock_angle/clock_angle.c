#include<stdio.h>
#include<math.h>

double minumum(double a)
    {
        int b = 360 - a;
        if(b<a)
        return b;
        else
        return a;
    }

double angle(double hour,double minute)
{
    if(hour<0 || minute<0 || hour>12 || minute>60)
    {
        printf("Enter the Values according to 12-hr format !!");
    }

    if(hour==12)
    hour=0;
    if(minute==60)
    minute=0;

   double hangle = 0.5 * (hour*60 + minute);
   double mangle = 6*minute;

   double f_angle = abs (hangle - mangle);

    double final = minumum(f_angle);

    printf("%lf",final);

}


int main()
{
    int hr,min;
    printf("Enter hour and min :");
    scanf("%d %d",&hr,&min);
    angle(hr,min);


return 0;
}