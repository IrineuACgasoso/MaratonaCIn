#include <bits/stdc++.h> // Inclui toda a STL de uma vez
using namespace std;    // Evita ter que digitar std::vector, std::cout, etc.

int main() {
    // Desativa a sincronização do C++ com I/O do C (deixa cin/cout extremamente rápidos)
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x;
    cin >> x;           // Lê do stdin (equivalente a scanf("%d", &x))
    cout << x << "\n";  // Escreve no stdout (use "\n", evita 'endl' pois ele dá flush)
    return 0;
}