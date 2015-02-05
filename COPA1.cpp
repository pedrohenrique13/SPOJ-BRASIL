#include <iostream>
#include <string>

using namespace std;

int main() {
    string copa = "ABCDEFGHIJKLMNOP";
    int i, m, v, j = 0;
    for (i = 0; i < 8; i++) {
        cin >> m >> v;
        if (m > v) copa.erase(j+1, 1);
        else copa.erase(j, 1);
        j++;
    }
    j = 0;
    for (i = 0; i < 4; i++) {
        cin >> m >> v;
        if (m > v) copa.erase(j+1, 1);
        else copa.erase(j, 1);
        j++;
    }
    j = 0;
    for (i = 0; i < 2; i++) {
        cin >> m >> v;
        if (m > v) copa.erase(j+1, 1);
        else copa.erase(j, 1);
        j++;
    }
    cin >> m >> v;
    if (m > v) cout << copa[0] << endl;
    else cout << copa[1] << endl;
    return 0;
}
