#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    while (n--) {
        bool flag = true;
        int l;
        cin >> l;
        string x;
        cin >> x;

        vector<char> ch(x.begin(), x.end());
        int i = 0;
        
        while (ch.size() > 1) {
            if (ch[i] != ch[i + 1]) {
                ch.erase(ch.begin() + i, ch.begin() + i + 2);
                flag = !flag;
            } 
            else {
                break;
            }
        }

        if (!flag) {
            cout << "Zlatan" << endl;
        } 
        else {
            cout << "Ramos" << endl;
        }
    }
    
}
