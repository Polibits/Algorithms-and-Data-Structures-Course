#include <bits/stdc++.h>

using namespace std;

int main() {
  //torna cin e cout mais rápidas
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  // declaração e leitura das variáveis
  double a, b, x, y;
  cin >> a >> b >> y;
  
  // cálculo e impressão de x
  x = y*(a/b);
  cout << x << "\n";
  
  return 0;
}