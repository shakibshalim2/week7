#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        int z = 0;
        int O = 0;
        for(int i=0;i<str.size();i++){
            if(str[i] =='0'){
                z++;
            }
            else{
                O++;
            }
        }
        
        for(int i=0;i<str.size();i++){
            if(str[i] =='0'){
                if(O){
                    O--;
                }
                else{
                    break;
                }
            }
            else{
                if(z){
                    z--;
                }
                else{
                    break;
                }
            }
        }
        cout<<O + z<<endl;
    }
    return 0;
}