#include <bits/stdc++.h> // Inclui toda a STL de uma vez
using namespace std;    // Evita ter que digitar std::vector, std::cout, etc.


using ll = long long;
using vi = vector<int>;
using vll = vector<long long>;

int solve() {
    int n, q;
    if(!(cin >> n >> q)) return 0;

    vll pref(n + 1, 0);

    for (int i = 1; i <= n; i++) {
        ll value;
        cin >> value;
        
        pref[i] = pref[i - 1] + value;
    }

    while (q--) {
        int a, b;
        cin >> a >> b;
        ll soma = pref[b] - pref[a - 1];
        cout << soma << "\n";
    }
    return 0;    
}

int main() {
    // Desativa a sincronização do C++ com I/O do C (deixa cin/cout extremamente rápidos)
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
}