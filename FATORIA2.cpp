#include <iostream>

using namespace std;

int main() {
    int n, i, r = 1;
    cin >> n;
    if (n >= 0 && n <= 12){
        for (i = n; i > 0; i--){
            r *= i;
        }
        cout << r << '\n';
    }
    return 0;
}
