#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    for (int i = 1; i * i <= b; ++i) {
        int square = i * i;
        if (square >= a) {
            cout << square << " ";
        }
    }

    return 0;
}
