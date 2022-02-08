#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pow(x,2) (x^2)

int main(){
    double x,y;
    y=0;
    printf("Give a number for x");
    scanf("%lf",&x);
    if (x>50){
        y=sqrt(x)*pow(exp,-(sqrt(x)));
    }
    else if (x>8){
        y=x*pow(log(x),2);
    }
    else if (x>=-10){
        y=pow(x,3)/pow(exp,-x);
    }
    else {
        printf("Wrong data");

    }
    printf("/n%.8lf",x,y);
    return 0;
}
