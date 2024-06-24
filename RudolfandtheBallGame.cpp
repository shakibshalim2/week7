#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define endl '\n'

void Rudolf() {
    int n, m, x;
    cin >> n >> m >> x;
    
    vector<int> v(n, 0);
    v[x - 1] = 1;
    
    while (m--) {
        int d;
        char c;
        cin >> d >> c;
        
        vector<int> q;
        for (int i = 0; i < n; i++) {
            if (v[i]) {
                q.push_back(i);
                v[i] = 0;
            }
        }
        
        for (int i : q) {
            if (c == '?') {
                v[(i + d) % n] = 1;
                v[((i - d) % n + n) % n] = 1;
            } 
            else if (c == '0') {
                v[(i + d) % n] = 1;
            } 
            else {
                v[((i - d) % n + n) % n] = 1;
            }
        }
    }
    
    int ans = count(v.begin(), v.end(), 1);
    cout << ans << endl;
    for (int i = 0; i < n; i++) {
        if (v[i]) cout << i + 1 << " ";
    }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        Rudolf();
    }
}
