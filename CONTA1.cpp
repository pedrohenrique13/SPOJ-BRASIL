#include <iostream>

using namespace std;

int main() {
    int n, c = 0;
    cin >> n;
    if (n <= 10) cout << "7" << endl;
    else {
        if (n >= 11 && n <= 30) {
            c += (7 + (n - 10));
            cout << c << endl;
        }
        else if (n >= 31 && n <= 100) {
            c += (27 + ((n - 30) * 2));
            cout << c << endl;
        }
        else {
            c += (167 + ((n - 100) * 5));
            cout << c << endl;
        }
    }
    return 0;
}
