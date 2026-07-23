#include<iostream>
using namespace std;

void sumdiv(int n, int &sum) 
{
    sum = 0;
    for(int d = 1; d <= n; d++)
        if(n % d == 0)
            sum += d;
}