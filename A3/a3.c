#include <stdio.h>
#include <stdlib.h>
#define LEASTMASK 0X01
#define MASK8 0XFF

int main()
{

    int i;
    unsigned char x,y,temp1,temp2;
    for (x=2;x<=127;x++){
        i=1;
        temp1=x;
    while (!(temp1 & LEASTMASK)){
        i=i+1;
        temp1=temp1>>1;
    }
    temp2=MASK8<<i;
    printf ("/n%d %x %d %x",x,x,-x,y);
    }
    x=-128;
        i=1;
        temp1=x;
    while (!(temp1 & LEASTMASK)){
        i=i+1;
        temp1=temp1>>1;
    }
    temp2=MASK8<<i;
    printf ("/n%d %x %d %x",x,x,-x,y);

    return 0;
}
