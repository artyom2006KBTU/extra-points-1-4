#include <iostream>
using namespace std;

int main() {
    char str[1000];
    cin >> str;

    bool ispal = true;
    int len = 0;

    while (str[len] != '\0') {
        len++;
    }

    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            ispal = false;
            break;
        }
    }

    if (ispal) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }

    return 0;
}
