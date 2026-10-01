#include <bits/stdc++.h> // Inclui toda a STL de uma vez
using namespace std;    // Evita ter que digitar std::vector, std::cout, etc.

using ll = long long;
using vi = vector<int>;
using vll = vector<long long>;


int solve() {
    int q;
    if(!(cin >> q)) return 0;

    deque<char> fila;
    ll countA = 0, countB = 0, answer = 0;
    
    while (q--) {
        int tipo;
        cin >> tipo;

        if(tipo == 1) {
            char x;
            cin >> x;
            if(x == 'A') {countA++;}
            else {answer += countA; countB++;}
            fila.push_back(x);
        }
        else if (tipo == 2) {
            char x;
            cin >> x;
            if(x == 'A') {answer += countB; countA++;}
            else {countB++;}
            fila.push_front(x);
        }
        else if (tipo == 3) {
            char x = fila.back();
            if(x == 'A') {countA--;}
            else {answer -= countA; countB--;}
            if(fila.size()) fila.pop_back();
        }
        else {
            char x = fila.front();
            if(x == 'A') {answer -= countB; countA--;}
            else {countB--;}
            if(fila.size()) fila.pop_front();
        }
        cout << answer << "\n";  
    }
    return 0;
}


int main() {
    // Desativa a sincronização do C++ com I/O do C (deixa cin/cout extremamente rápidos)
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
}