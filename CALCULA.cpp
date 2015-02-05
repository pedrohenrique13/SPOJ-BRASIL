#include <iostream>

using namespace std;

int main() {
    int n, x, teste = 1;
    while (cin >> n && n != 0) {
        int total = 0;
        for (int i = 0; i < n; i++) {
            cin >> x;
            total += x;
        }
        cout << "Teste " << teste << endl << total << endl << endl;
        teste++;
    }
    return 0;
}
