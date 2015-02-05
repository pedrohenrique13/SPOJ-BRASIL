#include <iostream>

using namespace std;

int main()
{
    int n, p, q, r;
    char c;
    cin >> n;
    if (1 <= n && n <= 500000){
        cin >> p >> c >> q;
        switch (c){
            case '+':
                    r = p + q;
                    if (r > n)
                        cout << "OVERFLOW" << '\n';
                    else
                        cout << "OK" << '\n';
                    break;
            case '*':
                r = p * q;
                if (r > n)
                    cout << "OVERFLOW" << '\n';
                else
                    cout << "OK" << '\n';
                break;
        }
    }
    return 0;
}
