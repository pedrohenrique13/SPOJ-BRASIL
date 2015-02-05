#include <iostream>
using namespace std;

int f91(int);

int main() {
    int n;
    while ((cin >> n) && n != 0)
        cout << "f91(" << n << ") = " << f91(n) << endl;
    return 0;
}

int f91(int n) {
    return n <= 100 ? f91(f91(n + 11)) : n - 10;
}
