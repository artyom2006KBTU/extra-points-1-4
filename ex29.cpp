#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    bool ispw = true;

    if (n < 1) {
        ispw = false;
    } else {
        while (n > 1) {
            if (n % 2 != 0) {
                ispw = false;
                break;
            }
            n /= 2;
        }
    }

    if (ispw) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
