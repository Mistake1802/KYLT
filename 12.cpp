#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    if(!(cin >> T)) return 0;
    const long long T1 = 145;   
    const long long T2 = 180;   
    const long long T3 = 900;   

    while (T--) {
        long long N, M, K;
        cin >> N >> M >> K;
        bool ok = (T1 >= N) && (T2 >= N + M) && (T3 >= N + M + K);
        cout << (ok ? "YES" : "NO");
        if (T) cout << '\n';
    }
    return 0;
}

