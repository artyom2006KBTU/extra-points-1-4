#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int a = n / 100;        
    int b = (n / 10) % 10;  
    int c = n % 10;         

    int d = a + b + c;
    cout << d;

    return 0;
}
