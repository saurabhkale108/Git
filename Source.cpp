#include "Source.h"

int add(int a,int b)
{
    return a+b;
}

int sumOfN(int n)
{
    int s=0;

    for(int i=0;i<=n;i++)
        s+=i;

    return s;    
}

int addwithouplus(int a,int b)
{
    return (a)-(-b);
}