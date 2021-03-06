#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<ll, ll> P;
typedef vector<ll> V;
typedef vector<string> VS;
typedef vector<P> VP;
typedef vector<V> VV;
typedef map<ll,ll> MP;
typedef set<ll> SET;
typedef multiset<ll> MSET;

#define loop(i,n) for(ll i = 0; i < n; i++)
#define loopr(i,x,y) for(ll i = x; i < y; i++)
#define pb push_back;
#define mp make_pair;

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int test;
    
    cin>>test;
    
    while (test--) {
        ll n, m, k;
        
        cin>>n>>m>>k;
        
        ll ans;
        
        ll cards = n/k;
        
        ll maxJokers = min(m, cards);
        
        ll rem = m - maxJokers;
        
        ll jokers = 0;
        
        while (rem > 0) {
        	jokers++;
        	for (int i = 0; i < (k - 1); i++) {
        		rem--;
        		if (rem == 0) {
        			break;
				}
			}
		}
		
		ans = maxJokers - jokers;
        
        cout<<ans<<endl;
    }
}
