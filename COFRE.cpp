#include <iostream>
using namespace std;

int diferenca (int n1, int n2){
    return (n1 - n2);
}

int main() {
    register int n, j, z, i, teste, resultado[100];
    teste = 1;
    cin >> n;
    while(n != 0){
         for (i = 1; i <= n; i++){
              cin >> j >> z;
              resultado[i] = diferenca(j, z);
              if (i > 1)
                resultado[i] += resultado[i - 1];
            }
            cout << "Teste " << teste << '\n';
            for (i = 1; i <= n; i++){
                cout << resultado[i] << '\n';
            }
            teste++;
            cin >> n;
        }
    return 0;
}
