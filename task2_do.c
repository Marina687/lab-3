#include "stdio.h"
#define _USE_MATH_DEFINES
#include "math.h"

double summ2(double eps)
{ 
    int i = 0;
    double res = pow((-1),i)*(i+1)/(pow(i,3)-pow(i,2)+1);
    do
    {
        ++i;
        res += pow((-1),i)*(i+1)/(pow(i,3)-pow(i,2)+1);
    } while (fabs(res) >= eps);
    return res;
}



