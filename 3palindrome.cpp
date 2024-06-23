#include <bits/stdc++.h>
using namespace std;
int main(){
    long long t,k=0;
    cin>>t;
    string s[]={"b","b","a","a"};
    for(int i=0;i<t;i++){
        cout<<s[k];
        k++;
        if(k==4){
            k=0;
        }
    }
    cout<<endl;
}