#include <bits/stdc++.h> 
using namespace std;    

// --- TYPES ---
using ll = long long;

// --- VECTORS ---
using vs = vector<string>;
#define all(x) (x).begin(), (x).end()

bool compare(const string &a, const string &b) {
    return a + b < b + a;
}

void solve() {
    int n;
    if(!(cin >> n)) return;

    vs v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(all(v), compare);

    for (int i = 0; i < n; i++) {
        cout << v[i];
    }
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}