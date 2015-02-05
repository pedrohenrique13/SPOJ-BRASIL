#include <iostream>
using namespace std;

int main() {
    int n, c;
    cin >> n >> c;
    int total = 0;
    bool passou = false;
    for (int i = 0; i < n; i++) {
        int s, e;
        cin >> s >> e;
        total += ((-s) + e);
        if (total > c) passou = true;
    }
    if (passou) cout << "S" << endl;
    else cout << "N" << endl;
    return 0;
}
