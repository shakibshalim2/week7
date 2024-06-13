#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n), brr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> brr[i];
        }

        int mx = 0;
        map<int, int> difC;
        bool possible = true;

        for (int i = 0; i < n; i++) {
            if (arr[i] < brr[i]) {
                possible = false;
                break;
            } else {
                if (brr[i] == 0) {
                    mx = max(mx, arr[i]);
                } else {
                    int diff = arr[i] - brr[i];
                    difC[diff]++;
                }
            }
        }

        int UniDif = -1;
        for (auto& it : difC) {
            UniDif = it.first;
        }

        if (difC.size() > 1) {
            possible = false;
        }
        if (UniDif != -1 && mx > UniDif) {
            possible = false;
        }

        if (possible) {
            cout << "YES" << endl;
        } 
        else {
            cout << "NO" << endl;
        }
    }
}
