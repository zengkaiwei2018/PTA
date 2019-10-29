#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
    double a,b,c,x1,x2,h;
    scanf("%lf %lf %lf",&a,&b,&c);
    if(b*b==4*a*c){
        x1=(-1*b+sqrt(b*b-4*a*c))/(2*a);
        printf("x1=x2=%.5lf",x1);
    }
    else if(b*b>4*a*c){
        x1=(-1*b+sqrt(b*b-4*a*c))/(2*a);
        x2=(-1*b-sqrt(b*b-4*a*c))/(2*a);
        printf("x1=%.5lf;x2=%.5lf",x1,x2);
    }
    else{
        h=1*b/(2*a);
        printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi",h,sqrt(4*a*c-b*b)/(2*a),h,sqrt(4*a*c-b*b)/(2*a));
    }
    return 0;
}
