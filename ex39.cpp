#include <iostream>
using namespace std;

int main() {
    char s1[10001], s2[10001];
    cin >> s1 >> s2;

    bool isSub = false;

    for (int i = 0; s2[i] != '\0'; i++) {
        int j;
        for (j = 0; s1[j] != '\0' && s2[i + j] == s1[j]; j++);
        if (s1[j] == '\0') {
            isSub = true;
            break;
        }
    }

    if (isSub) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }

    return 0;
}
