#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        bool flag = true;
        int n;
        cin >> n;
        string str;
        cin >> str;
        vector<char> vt;
        for (int i = 0; i < n; i++){
            vt.push_back(str[i]);
        }
        int i = 0, z = 1;
        while (vt.size() > 1){
            if (vt[i] != vt[i + 1]){
                z = i + 1;
                vt.erase(vt.begin() + i, vt.begin() + z + 1);
                if (flag)
                    flag = false;
            }
            else{
                break;
            }
        }

        if (!flag){
            cout << "Zlatan" << endl;
        }
        else{
             cout << "Ramos" << endl;
        }
           
    }
    return 0;
}