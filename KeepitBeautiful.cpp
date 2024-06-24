#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        ll n, num;
        cin >> n;
        ll flag = 0, first = -1, last = -1;

        while (n--) {
            cin >> num;
            if (flag) {
                if (num >= last && num <= first) {
                    last = num;
                    cout << 1;
                } 
                else {
                    cout << 0;
                }
            } 
            else {
                if (first == -1) {
                    first = last = num;
                    cout << 1;
                } 
                else if (num >= last) {
                    last = num;
                    cout << 1;
                } 
                else if (first >= num) {
                    last = num;
                    flag = 1;
                    cout << 1;
                } 
                else {
                    cout << 0;
                }
            }
        }
        cout << endl;
    }
}
