#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int k = 1;
    while (k * k <= n) {
        k++;
    }

    cout << k - 1 << endl;
    return 0;
}
