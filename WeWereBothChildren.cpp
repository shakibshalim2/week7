#include <bits/stdc++.h>
using namespace std;
const int N=(int)1e6+5;            
int main(){
    ios::sync_with_stdio(false); 
    cin.tie(NULL);    
    int n;
    cin>>n;
    while(n--){
        int x;
        cin>>x;
        vector<long long>a(x);
        for(int i=0;i<x;i++){
            cin>>a[i];
        }
        vector<long long>f(x+2,0);
        for(int i=0;i<x;i++){
            if(a[i]>x)
            continue;
            f[a[i]]++;
        }
        long long res=0;
        for(int i=1;i<=x;i++){
            long long count=0;
            for(long long j=1;j*j<=i;j++){
                if(i%j==0){
                    count+=f[j];
                    if(j*j!=i){
                        count+=f[i/j];
                    }
                }
            }
            res=max(res,count);
        }
        cout<<res<<endl;
    }
}