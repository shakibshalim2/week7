#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void dejaVU() {
	ll t, d;
	cin >> t >> d;

	ll ar[t];
	for(ll i = 0; i < t; i++) 
    cin >> ar[i];
	
	ll br[d];
	for(ll i = 0; i < d; i++) 
    cin >> br[i];

	set<ll> st;
	
	for(ll i = 0; i < d; i++) {
		if(st.count(br[i]))
        continue;
		st.insert(br[i]);
		for(ll j = 0; j < t; j++) {
			if(ar[j] % (1 << br[i]) == 0) 
            ar[j] += (1 << (br[i] - 1));
		}
	}

	for(auto val : ar) 
    cout << val << " ";
	cout << '\n';

}

int main() {
	int t = 1;
	cin >> t;
	while(t--) {
		dejaVU();
	}
}
