#include <bits/stdc++.h>  // Archivo de cabecera universal, incluye casi todas las bibliotecas estándar
using namespace std;

// Definiciones de tipos comunes, facilitan la escritura rápida de código
using ll = long long;

// Función principal de resolución de problemas
int solve(int a, int b) {
    if(b==0) return a;
    return solve(b, a%b);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int T = 1;

    while (T--) {
        int a, b;
        cin >> a >> b;
        if(a>b){
            cout << solve(a,b) <<"\n";
        }else{
            cout << -1 << "\n";
        }
    }
    return 0;
}