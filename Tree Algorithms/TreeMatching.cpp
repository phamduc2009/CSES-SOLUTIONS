#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define freopen(name) if(fopen(name".INP","r")) {freopen (name".INP","r",stdin); freopen (name".OUT","w",stdout);}
#define fir first
#define sec second
#define str string
const int Max_n=2*1e5;
const ll mod=1e9+7;
int dp[Max_n+3][2];
vector <int> g[Max_n+3];
void dfs(int u, int par){
    int val = 0;
    for (auto v : g[u]){
         if(v == par) continue;
         dfs(v, u);
         val += max(dp[v][0], dp[v][1]);
    }
    dp[u][0] = val;
    for (auto v : g[u]){
         if(v == par) continue;
         int tmp = val - max(dp[v][0], dp[v][1]) + dp[v][0] + 1;
         dp[u][1] = max(dp[u][1], tmp);
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
    cout << max(dp[1][1], dp[1][0]);
    return 0;
}//111111111111111111111111
