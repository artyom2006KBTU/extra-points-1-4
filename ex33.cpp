#include <iostream>
using namespace std;

int main() {
    char C;
    cin >> C;

    if (C >= 'a' && C <= 'z') {
        C = C - 'a' + 'A';
    } else if (C >= 'A' && C <= 'Z') {
        C = C - 'A' + 'a';
    }

    cout << C << endl;

    return 0;
}
