#include "stdio.h"
#define _USE_MATH_DEFINES
#include "math.h"

double findFirstNegativeElement(double eps)
{ 
    double res = 0;
    int a;
    for (int i = 0; ++i)
    {
        a = i;
        res += pow((-1),i)*(i+1)/(pow(i,3)-pow(i,2)+1);
        if (res > 0) continue;
        if (fabs(res) <= eps) return k;
    }
}













