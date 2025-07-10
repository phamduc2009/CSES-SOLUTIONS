#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define freopen(name) if(fopen(name".INP","r")) {freopen (name".INP","r",stdin); freopen (name".OUT","w",stdout);}
#define fir first
#define sec second
#define str string
const int Max_n=2*1e5;
const ll mod=1e9+7;
vector <int> g[Max_n+3];
int first[Max_n+3], sec[Max_n+3], ans[Max_n+3], c[Max_n+3];
void dfs(int u, int par){
    for (auto v : g[u]){
         if(v == par) continue;
         dfs(v, u);
         if(first[u] < first[v] + 1){
            sec[u] = first[u];
            first[u] = first[v] + 1;
            c[u] = v;
         }
         else if(first[v] + 1 > sec[u]){
            sec[u] = first[v] + 1;
         }
    }
}
void dfs2(int u, int par, int pre){
    ans[u] = max(pre, first[u]);
    for (auto v : g[u]){
         if(v == par) continue;
         int val = (c[u] == v ? sec[u] : first[u]);
         dfs2(v, u, max(pre, val) + 1);
    }
}
int main(){
    freopen("");
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    for (int i = 1; i <= n - 1; ++i){
         int u, v; cin >> u >> v;
         g[u].push_back(v);
         g[v].push_back(u);
    }
    dfs(1, -1);
    dfs2(1, -1, 0);
    for (int u = 1; u <= n; ++u) cout << ans[u] << ' ';
    return 0;
}//111111111111111111111111
