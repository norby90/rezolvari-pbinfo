#include<iostream>
#include<fstream>
#include<cstring>

using namespace std;

ifstream fin("nrdiv.in");
ofstream fout("nrdiv.out");

int main()
{
    int n, nr = 0;
    fin >> n;
    for(int d = 1; d <= n; d++)
        if(n % d == 0)
            nr++;
    fout << nr;
    return 0;
}