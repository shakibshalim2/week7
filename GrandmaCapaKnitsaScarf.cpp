#include <bits/stdc++.h>
using namespace std;

void Grandma(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans = 1e9;
    for (int i = 'a'; i <= 'z'; i++){
        int change = 0;
        int l = 0, r = n - 1;
        while (l <= r){
            if (s[l] != s[r]){
                if (s[l] == i){
                    l++;
                    change++;
                }
                else if (s[r] == i){
                    r--;
                    change++;
                }
                else{
                    change = 1e9;
                    break;
                }
            }
            else{
                l++;
                r--;
            }
        }
        ans = min(ans, change);
    }
    if (ans == 1e9)
        cout << -1 << "\n";
    else
        cout << ans << "\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++){
        Grandma();
    }
}