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
ll dp[Max_n+3], ans[Max_n+3], res[Max_n+3], n;
void dfs(int u, int par){
    for (auto v : g[u]){
         if(v == par) continue;
         dfs(v, u);
         dp[u] += dp[v] + 1;
    }
}
void dfs2(int u, int par){
    for (auto v : g[u]){
         if(v == par) continue;
         dfs2(v, u);
         ans[u] += ans[v] + dp[v] + 1;
    }
}
void dfs3(int u, int par){
    for (auto v : g[u]){
        if(v == par) continue;
        ans[v] = ans[u] - (dp[v] + 1) + (n - dp[v] - 1);
        dfs3(v, u);
    }
}

int main(){
    freopen("");
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n - 1; ++i){
         int u, v; cin >> u >> v;
         g[u].push_back(v);
         g[v].push_back(u);
    }
    dfs(1, -1);
    dfs2(1, -1);
    dfs3(1, -1);
    for (int u = 1; u <= n; ++u) cout << ans[u] << ' ';
    return 0;
}//111111111111111111111111
