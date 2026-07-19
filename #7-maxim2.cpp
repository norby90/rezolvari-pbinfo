#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("maxim.in");
ofstream fout("maxim.out");

int main() {
    
    int a, b, max;
    fin >> a >> b;
    if(a > b) {
    	max = a;
    } else {
        max = b;
    }
    fout << max;
}