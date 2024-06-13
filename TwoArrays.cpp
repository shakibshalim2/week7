#include <bits/stdc++.h>
using namespace std;
bool canTransform(vector<int>&a,vector<int>&b) {
    for (int i = 0; i < a.size(); i++) {
        if (b[i] < a[i] || b[i] > a[i] + 1) {
            return false;
        }
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        if (canTransform(a, b)) {
            cout << "YES" << endl;
        } 
        else {
            cout << "NO" << endl;
        }
    }
}
