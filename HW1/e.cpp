// Inclui toda a STL de uma vez
// Evita ter que digitar std::vector, std::cout, etc.
#include <bits/stdc++.h> 
using namespace std;    

// Types
using ll = long long;
// Vectors
using vi = vector<int>;
using vs = vector<string>;
using vll = vector<long long>;
// Maps
using msi = map<string, int>;
using msll = map<string, long long>;

int solve() {
    int n, k;
    cin >> n >> k;

    vi array(n);

    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    map<int, int> frequencia;

    for (int i = 0; i < k; i++) {
        frequencia[array[i]]++;
    }

    cout << frequencia.size();

    for (int i = k; i < n; i++) {
        frequencia[array[i]]++;

        int left = array[i - k];
        frequencia[left]--;
        if(frequencia[left] == 0) frequencia.erase(left);

        cout << " " << frequencia.size();
    }
    cout << "\n";
    return 0;
}

int main() {
    // Desativa a sincronização do C++ com I/O do C (deixa cin/cout extremamente rápidos)
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
}