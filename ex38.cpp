#include <iostream>
using namespace std;

int main() {
    char str[1000];
    cin >> str;

    char letter = '\0';
    int count[256] = {0};

    for (int i = 0; str[i] != '\0'; i++) {
        count[str[i]]++;
    }

    for (int i = 0; str[i] != '\0'; i++) {
        if (count[str[i]] == 2) {
            letter = str[i];
            break;
        }
    }

    cout << letter << endl;

    return 0;
}
