#include <bits/stdc++.h>
using namespace std;
#define ll long long int                   
ll cntInv(vector<int> &a, int n) {
    ll inv = 0, cnt = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == 1) {
            cnt++;
        } 
        else {
            inv += cnt;
        }
    }
    return inv;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        ll maxInv = cntInv(a, n);

        for (int i = 0; i < n; i++) {
            if (a[i] == 0) {
                a[i] = 1;
                maxInv = max(maxInv, cntInv(a, n));
                a[i] = 0;
                break;
            }
        }

        for (int i = n - 1; i >= 0; i--) {
            if (a[i] == 1) {
                a[i] = 0;
                maxInv = max(maxInv, cntInv(a, n));
                a[i] = 1;
                break;
            }
        }

        cout << maxInv << endl;
    }
}
