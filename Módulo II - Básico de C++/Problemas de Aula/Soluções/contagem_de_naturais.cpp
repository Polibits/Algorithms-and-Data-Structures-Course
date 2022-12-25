#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, b;

    // leitura dos valores
    cin >> a >> b;

    // exibição dos resultados para os três primeiros casos
    cout << b - a + 1 << "\n";
    cout << b - a << "\n";
    cout << b - a << "\n";

    // cuidado especial para o último caso, para quando a = b
    if(a == b)
        cout << 0 << "\n";
    else
        cout << b - a - 1 << "\n";
        
    return 0;
}