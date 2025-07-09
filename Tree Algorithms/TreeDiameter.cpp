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
int res = 0, far;
void dfs(int u, int par, int dist){
    if(dist > res){
       res = dist;
       far = u;
    }
    for (auto v : g[u]){
         if(v == par) continue;
         dfs(v, u, dist + 1);
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
    dfs(1, -1, 0);
    res = 0;
    dfs(far, -1, 0);
    cout << res;
    return 0;
}//111111111111111111111111
