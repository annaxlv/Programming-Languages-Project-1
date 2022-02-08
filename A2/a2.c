#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define epsilon 1e-6

int main(){
    float a,b,x,term,sum;
    int n;
    n=0;
    sum=0;
    term=1;
    printf ("Give a number for x:");
    scanf ("%1f",&x);
    if (x>0 && x<=2){
        sum=sum+term;
        n=n+1;
        a=pow (x,n);
        b=(-n)*sin(x);
        term=a*exp(b);
    printf ("/n The result is: %f",sum);
    }
    else
        printf ("/Wrong data");

      return 0;
}
