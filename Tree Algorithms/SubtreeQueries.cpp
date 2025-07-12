#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define freopen(name) if(fopen(name".INP","r")) {freopen (name".INP","r",stdin); freopen (name".OUT","w",stdout);}
#define fir first
#define sec second
#define str string
const int Max_n=2*1e5;
const ll mod=1e9+7;
int a[Max_n+3], b[Max_n+3], in[Max_n+3], out[Max_n+3];
vector <int> g[Max_n+3];
ll st[4*Max_n+3], timer;
void dfs(int u, int par){
    in[u] = ++timer;
    for (auto v : g[u]){
         if(v == par) continue;
         dfs(v, u);
    }
    out[u] = timer;
}
void build(int id, int l, int r){
    if(l == r){
       st[id] = a[l];
       return;
    }
    int m = (l + r) / 2;
    build(2 * id, l, m);
    build(2 * id + 1, m + 1, r);
    st[id] = st[2 * id] + st[2 * id + 1];
}
void update(int id, int l, int r, int pos, int val){
    if(l == r){
       st[id] = val;
       return;
    }
    int m = (l + r) / 2;
    if(pos <= m) update(2 * id, l, m, pos, val);
    else update(2 * id + 1, m + 1, r, pos, val);
    st[id] = st[2 * id] + st[2 * id + 1];
}
ll get(int id, int l, int r, int u, int v){
    if(u > r || v < l) return 0;
    if(u <= l && r <= v) return st[id];
    int m = (l + r) / 2;
    return get(2 * id, l, m, u, v) + get(2 * id + 1, m + 1, r, u, v);
}
int main(){
    freopen("");
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n, q; cin >> n >> q;
    for (int i = 1; i <= n; ++i) cin >> b[i];
    for (int i = 1; i <= n - 1; ++i){
         int u, v; cin >> u >> v;
         g[u].push_back(v);
         g[v].push_back(u);
    }
    dfs(1, -1);
    for (int u = 1; u <= n; ++u) a[in[u]] = b[u];
    build(1, 1, n);
    while (q--){
        int k, u; cin >> k >> u;
        if(k == 1){
           int x; cin >> x;
           update(1, 1, n, in[u], x);
        }
        else cout << get(1, 1, n, in[u], out[u]) << '\n';
    }
    return 0;
}//111111111111111111111111
