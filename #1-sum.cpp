#include<iostream>
#include<fstream>
using namespace std;
ifstream fin("sum.in");
ofstream fout("sum.out");


int main()
{
    int x, y, sum;
    fin >> x >> y;
    sum = x + y;
    fout << sum;
    return 0;
}