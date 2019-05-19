#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pll pair<ll,ll>
#define pii pair<int,int>
#define mp make_pair
#define pb push_back
#define mod 1000000007
#define s(x) scanf("%d",&x)
#define sll(x) scanf("%lld",&x)
#define pf(x) printf("%d\n",x)
#define pfl(x) printf("%lld\n",x)
#define forl(i,x,y) for(ll i=x;x<y;i++)
#define flash ios_base::sync_with_stdio(false);cin.tie(0)
#define MAX5 100005
#define MAX6 1000005
#define MLOG 18
#define limit 1e18
#define mod 1000000007
#define MAX 3000000000
ll power(ll x, ll y, ll p){
    ll res = 1;
    x = x % p;
    while (y > 0){
        if (y & 1)
            res = (res*x) % p;
        y = y>>1;
        x = (x*x) % p;
    }
    return res;
}
ll fact[2*MAX5];
ll func(){
    fact[0] = fact[1] = 1;
    for(ll i = 2; i < 200001; i++){
        fact[i] = (fact[i-1]*i)%mod;
    }
    return 0;
}
ll arr[MAX5];
map <ll, pll> mm;
set < ll > s;
int main(){
	//freopen("in07.txt","r",stdin);
	//freopen("out07.txt","w",stdout);
	ll n, m, x;
	sll(n);sll(m);
	set < ll > :: iterator it, it1;
	ll sum = 0;
	while(m--){
		sll(x);
		if(mm.find(x) != mm.end()){
			cout << sum << endl;
			continue;	
		}
		if(mm.size() == 0){
			mm[x] = mp(1,n);
			sum += 1+n;
			s.insert(x);
			cout << sum << endl;
			continue;
		}
		it = s.lower_bound(x);
		if(it == s.begin()){
			pii p = mm[*it];
			sum -= (p.first + p.second);
			
			mm[x] = mp(p.first,(*it)-1);
			sum += mm[x].first + mm[x].second;
			
			mm[*it] = mp(x+1, p.second);
			sum += mm[*it].first + mm[*it].second;
			
			s.insert(x);
			cout << sum << endl;
			continue;
		}
		it--;
		it1 = it;
		it++;
		if(it == s.end()){
			pii p = mm[*it1];
			sum -= (p.first + p.second);
			
			mm[x] = mp((*it1) + 1, n);
			sum += mm[x].first + mm[x].second;
			
			mm[*it1] = mp(p.first, x-1);	
			sum += mm[*it1].first + mm[*it1].second;		
		} 
		else{
			pii p = mm[*it1];
			pii p1 = mm[*it];
			sum -= (p.first + p.second + p1.first + p1.second);
			
			mm[x] = mp((*it1) + 1, (*it) - 1);
			sum += mm[x].first + mm[x].second;
			
			mm[*it1] = mp(p.first, x-1);
			sum += mm[*it1].first + mm[*it1].second;
			
			mm[*it] = mp(x+1, p1.second);
			sum += mm[*it].first + mm[*it].second;
		}
		s.insert(x);
		cout << sum << endl;
	}	
}