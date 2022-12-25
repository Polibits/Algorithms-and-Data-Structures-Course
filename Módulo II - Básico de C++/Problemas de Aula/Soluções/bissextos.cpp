#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, b;
    int quantidade, primeiro, ultimo;
    cin >> a >> b;

    // calculo do primeiro ano bissexto
    if(a % 4 == 0)
        primeiro = a;
    else 
        primeiro = a + 4 - (a % 4);

    // cálculo do último ano bissexto
    ultimo = b - (b % 4);

    // cálculo e exibição 
    quantidade = 1 + (ultimo - primeiro)/4;
    cout << quantidade << "\n";
    return 0;
}