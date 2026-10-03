#include <bits/stdc++.h> // Inclui toda a STL de uma vez
using namespace std;    // Evita ter que digitar std::vector, std::cout, etc.


using ll = long long;
using vi = vector<int>;
using vs = vector<string>;
using vll = vector<long long>;
using msi = map<string, int>;
using msll = map<string, long long>;


int solve() {
    int c, p, s;
    if(!(cin >> c >> p >> s)) return 0;

    vs candidatos(c);
    msll score_cand;

    for (int i = 0; i < c; i++) {
        cin >> candidatos[i];
        score_cand[candidatos[i]] = 0;
    }

    msi score_prob;
    for (int i = 0; i < p; i++) {
        string id;
        int pontos;
        cin >> id >> pontos;
        score_prob[id] = pontos;
    }

    for (int i = 0; i < s; i++) {
        string user, problema, veredito;
        cin >> user >> problema >> veredito;

        if(veredito == "AC" && score_cand.count(user) && score_prob.count(problema)) {
            score_cand[user] += score_prob[problema];
        }
    }

    for (int i = 0; i < c; i++) {
        cout << candidatos[i] << " " << score_cand[candidatos[i]] << "\n";
    }
    
    return 0;
}


int main() {
    // Desativa a sincronização do C++ com I/O do C (deixa cin/cout extremamente rápidos)
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
}