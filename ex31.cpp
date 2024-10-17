#include <iostream>
using namespace std;

int main() {
    char c;
    cin >> c;
    if (c >= '0' && c <= '9') {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }

    return 0;
}
