#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        map<int, int> m1, m2;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            m1[a[i]]++;
        }
        
        vector<int> v;
        for (auto it : m1) {
            int x = it.first;
            int y = it.second;
            if (x <= n) {
                for (int i = 1; i < y; i++)
                v.push_back(x);
                m2[x] = 1;
            } 
            else {
                for (int i = 1; i <= y; i++) 
                v.push_back(x);
            }
        }
        
        int count = 1;
        int result = 0;
        for (int i = 0; i < v.size(); i++) {
            while (count <= n && m2[count] == 1) 
            count++;
            if (count > n) {
                result = -1;
                break;
            }
            int p = (v[i] - 1) / 2;
            if (count <= p) {
                count++;
                result++;
            } 
            else {
                result = -1;
                break;
            }
        }
        cout << result << endl;
    }
}
