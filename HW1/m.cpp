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
// Max Heap
using max_pq = priority_queue<ll, vll>;
// Min Heap
using min_pq = priority_queue<ll, vll, greater<ll>>;
// Maps
using msi = map<string, int>;
using msll = map<string, ll>;
using mll = map<ll, ll>;

void solve() {
    int n;
    ll x;
    if (!(cin >> n >> x)) return;

    vll a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    mll count_pref;
    count_pref[0] = 1;

    ll soma_atual = 0;
    ll ans = 0;

    for (int i = 0; i < n; i++) {
        soma_atual += a[i];

        if(count_pref.count(soma_atual - x)) {ans += count_pref[soma_atual - x];}

        count_pref[soma_atual]++;
    }
    cout << ans << "\n";
}

int main() {
    // Desativa a sincronização do C++ com I/O do C (deixa cin/cout extremamente rápidos)
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
}