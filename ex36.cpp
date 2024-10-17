#include <iostream>
using namespace std;

int main() {
    char str[1000];
    cin.getline(str, 1000);

    char longest[100];
    int maxlen = 0;
    int currlen = 0;
    int i = 0;

    while (true) {
        if (str[i] != ' ' && str[i] != '\0') {
            currlen++;
        } else {
            if (currlen > maxlen) {
                maxlen = currlen;
                int j = 0;
                while (j < currlen) {
                    longest[j] = str[i - currlen + j];
                    j++;
                }
                longest[currlen] = '\0';
            }
            currlen = 0;
            if (str[i] == '\0') break;
        }
        i++;
    }

    if (currlen > maxlen) {
        maxlen = currlen;
        int j = 0;
        while (j < currlen) {
            longest[j] = str[i - currlen + j];
            j++;
        }
        longest[currlen] = '\0';
    }

    cout << longest << endl;
    cout << maxlen << endl;

    return 0;
}
