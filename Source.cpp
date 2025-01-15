#include<iostream>
#include "Source.h"
using namespace std;
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

int fact(int n)
{
    int s=1;
   for(int i=1;i<=n;i++)
      {
        s*=i;
      }
    return s; 
}

int decToBinary(int n)
{
   int r,b=0,base=1;
         while(n>0)
    {
        r=n%2;
        b=b+r*base;
        n=n/2;
        base=base*10;
    }
    
}

int sumOfNSq(int n)
{
    int sum =0;

    for(int i=1;i<=n;i++)
        sum+=i*i;

    return sum;    
}