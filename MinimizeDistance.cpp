#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int x=1;
    cin>>x;
    while(x--){
        long long y,res=0,p,s;
        cin>>s>>p;
        vector<int>position,n;
        for(int i=0;i<s;i++){
            int x;
            cin>>x;
            if(x>0){
                position.push_back(x);
            }
            else if(x<0){
                n.push_back(-x);
            }
        }
        sort(position.begin(),position.end());
        sort(n.begin(),n.end());
        for(int i=position.size()-1;i>=0;i-=p){
            res+=2*position[i];
        }
        for(int i=n.size()-1;i>=0;i-=p){
            res+=2*n[i];
        }
        if (!position.empty() && !n.empty()) {
            res -= max(position.back(), n.back());
        } 
    else if (!position.empty()) {
        res -= position.back();
    } 
    else if (!n.empty()) {
    res -= n.back();
    }
        cout<<res<<endl;
    }
}
