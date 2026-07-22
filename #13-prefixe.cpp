#include <iostream>
#include <string>
using namespace std;

int main() {
    string n;
    cin >> n;

    cout << "Prefixe:\n";
    for (size_t i = 1; i <= n.size(); ++i) {
        cout << n.substr(0, i) << '\n';
    }

    cout << "Sufixe:\n";
    for (size_t i = 0; i < n.size(); i++) {
        cout << n.substr(i) << '\n';
    }

    return 0;
}
