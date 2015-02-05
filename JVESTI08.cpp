#include <iostream>
#include <string>

using namespace std;

int main() {
    string gab, rep;
    int n, t = 0;
    cin >> n;
    cin >> gab;
    cin >> rep;
    for(int i = 0; i < n; i++) if(gab[i] == rep[i]) t++;
    cout << t << endl;
    return 0;
}
