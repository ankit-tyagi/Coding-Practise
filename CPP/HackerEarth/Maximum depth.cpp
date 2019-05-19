#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll MAX = 2e5 + 5, inf = 1e9;
ll vis[MAX] = {};
vector<ll>adj[MAX], lvl[MAX];


ll bfs(ll val[]){
    queue<pair<ll, ll> >q;
    q.push({1,0});
    ll mx = 0;
    while(!q.empty()){
        ll v = q.front().first;
        ll h = q.front().second;
        mx = max(mx, h);
        lvl[h].push_back(val[v]);
        q.pop();
        vis[v] = 1;
        for(auto it:adj[v]){
            if(!vis[it])q.push({it, h + 1});
        }
    }
    for(int i = 0; i < MAX; i++)    sort(lvl[i].begin(), lvl[i].end());
    return mx;
}


int main()
{
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    ll n, q;
    cin >> n >> q;
    ll val[n + 1];
    for(int i = 1; i <= n; i++){
            cin >> val[i];
        assert(val[i] <= inf);
    }
    for(int i = 1; i < n; i++){
        ll u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    ll mxd = bfs(val);
    while(q--){
        ll v, x;
        cin >> v >> x;
        assert(v <= n);
        assert(v <= inf);
        v %= (mxd + 1);
        auto it = lower_bound(lvl[v].begin(), lvl[v].end(), x);
        ll ans = -1;
        if(it != lvl[v].end())ans = *it;
        cout << ans << endl;
    }
    return 0;
}
