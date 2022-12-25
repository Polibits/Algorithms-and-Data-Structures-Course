#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, b;
    int primeiro, ultimo;
    cin >> a >> b;

    if(a % 4 == 0)
        primeiro = a;
    else 
        primeiro = a + 4 - (a % 4);
    ultimo = b - (b % 4);

    cout << 1 + (ultimo - primeiro)/4;
    return 0;
}