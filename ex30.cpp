#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int k = 0;
    int po = 1;

    while (po < n) {
        po *= 2;
        k++;
    }

    cout << k << endl;
    return 0;
}
