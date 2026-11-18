#include <bits/stdc++.h>  
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int T = 1;
    cin >> T;
    while (T--) {
        string s;
        cin >> s;
        int res = 1;
        int pri = -1 ,seg =-1 , ter = -1;
        bool c = false ,q = false;
        for(int i = 0 ; i < s.length() ; i++){
            char aux = s[i];
            ter = seg;
            seg = pri;
            pri = aux + 0;
            if(pri == seg && seg == ter) c =true;
            if(pri == ter && pri != seg) q = true;
        }
        if(c) res++;
        if(q) res++;
        cout << res << "\n";
    }
    return 0;
}