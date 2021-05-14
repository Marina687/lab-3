#include "stdio.h"
#define _USE_MATH_DEFINES
#include "math.h"

int findFirstElement(double eps)
{ 
    int i = 0;
    int a = 0;
    double res = pow((-1),i)*(i+1)/(pow(i,3)-pow(i,2)+1);
    do
    {
        if (fabs(res) <= eps) break;
        ++i;
        a = i;
        res += pow((-1),i)*(i+1)/(pow(i,3)-pow(i,2)+1);
        }
    } while (i > 0);
    return a;
}









