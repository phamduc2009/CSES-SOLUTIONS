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
int dp[Max_n+3];
void dfs(int u){
    for (auto v : g[u]){
         dfs(v);
         if(g[v].empty()) dp[u] += 1;
         else dp[u] += dp[v] + 1;
    }
}
int main(){
    freopen("");
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    for (int i = 2; i <= n; ++i){
         int u; cin >> u;
         g[u].push_back(i);
    }
    dfs(1);
    for (int i = 1; i <= n; ++i) cout << dp[i] << ' ';
    return 0;
}//111111111111111111111111
