#include "stdio.h"
#define _USE_MATH_DEFINES
#include "math.h"

void print(int n, int k)
{ 
    double res = 0;
    int i=0;
    while (i < n)
    {
        res += pow((-1),i)*(i+1)/(pow(i,3)-pow(i,2)+1);
        ++i;
        if (i % k == 0) continue;
        printf("%lf", &res);
    } 
}








