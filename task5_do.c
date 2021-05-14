#include "stdio.h"
#define _USE_MATH_DEFINES
#include "math.h"

int findFirstNegativeElement(double eps)
{ 
    double res = pow((-1),i)*(i+1)/(pow(i,3)-pow(i,2)+1);
    int i = 0;
    int a = 0;
    do 
    {
        ++i;
        res += pow((-1),i)*(i+1)/(pow(i,3)-pow(i,2)+1);
        if (res > 0) continue;
        a = i;
        if (fabs(res) <= eps) return a;
    } while (i > 0);
}












