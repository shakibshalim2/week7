#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--){
        ll n, p, b, miss, lst;
        cin >> n >> p;
        vector<ll> v, g;
        for (ll i = 0; i < n; i++){
            cin >> b;
            v.push_back(b);
        }
        g = v;
        sort(g.begin(), g.end());
        miss = n;
        for (ll i = 0; i < n; i++){
            if (g[i] != i){
                miss = i;
                break;
            }
        }
        ll tem;
        for (ll i = 0; i < n; i++){
            tem = v[i];
            v[i] = miss;
            miss = tem;
        }
        v.push_back(miss);

        lst = (p - 1) % (n + 1);
        for (ll i = (n + 1 - lst); i < (n + 1); i++){
            cout << v[i] << " ";
        }
        for (ll i = 0; i < (n - lst); i++){
            cout << v[i] << " ";
        }
        cout << endl;
    }
}