#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long int ll;

ll power_mod(ll base, ll exp) {
    ll result = 1;
    while (exp) {
        if (exp % 2 == 1) {
            result = (result * base) % mod;
            exp--;
        } 
        else {
            base = (base * base) % mod;
            exp /= 2;
        }
    }
    return result % mod;
}

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);  
    ll t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;
        string binary;
        while (k) {
            binary += (k % 2 == 0) ? '0' : '1';
            k /= 2;
        }

        ll ans = 0;
        for (int i = 0; i < binary.size(); i++) {
            if (binary[i] == '1') {
                ans = (ans + power_mod(n, i)) % mod;
            }
        }
        cout << ans << endl;
    }
}
