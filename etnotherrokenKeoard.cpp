#include <bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin >> t;
    while (t--){
        map<long long, char> m;
        long long n, idx;
        string str;
        cin >> str;
        n = (long long)str.size();
        stack<long long> u, l;
        for (long long i = 0; i < n; i++){
            if (str[i] == 'B'){
                if (!u.empty()){
                    idx = u.top();
                    m[idx] = '$';
                    u.pop();
                }
                continue;
            }
            if (str[i] == 'b'){
                if (!l.empty()){
                    idx = l.top();
                    m[idx] = '$';
                    l.pop();
                }
                continue;
            }
            m[i] = str[i];
            if (isupper(str[i])){
                u.push(i);
            }
            else{
                l.push(i);
            }
        }
        for (long long i = 0; i < n; i++){
            if (m.count(i) and m[i] != '$'){
                cout << m[i];
            }
        }
        cout << endl;
    }
}