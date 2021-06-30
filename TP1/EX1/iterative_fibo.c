#include "header.h"

int iterative_fibo(int n)
{
     int a=0,b=1,x=0;
        for(int i=1;i<n;i++)
        {
            x=a+b;
            a=b;
            b=x;
        }
    return x;
}
