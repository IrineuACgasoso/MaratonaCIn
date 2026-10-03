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

using dll = deque<long long>;

int solve() {
    int n;
    if (!(cin >> n)) return 0;

    dll potions(n);

    for (int i = 0; i < n; i++) {
        cin >> potions[i];
    }

    ll health = 0;
    priority_queue<ll, vector<ll>, greater<ll>> pq;

    for (int i = 0; i < n; i++) {
        health += potions[i];
        pq.push(potions[i]);

        if(health < 0) {health -= pq.top(); pq.pop();}
    }

    cout << pq.size() << "\n";
    
    return 0;
}

int main() {
    // Desativa a sincronização do C++ com I/O do C (deixa cin/cout extremamente rápidos)
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}