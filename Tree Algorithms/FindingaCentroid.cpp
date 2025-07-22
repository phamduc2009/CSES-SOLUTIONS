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
int sz[Max_n+3], n;
void dfs(int u, int par){
	sz[u] = 1;
	for (auto v : g[u]){
		 if(v == par) continue;
		 dfs(v, u);
		 sz[u] += sz[v];
	}
}
int find_root(int u, int par){
	for (auto v : g[u]){
		 if(v == par) continue;
		 if(sz[v] * 2 > n){
		 	return find_root(v, u);
		 }
	}
	return u;
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
    int res = find_root(1, -1);
    cout << res;
    return 0;
}//111111111111111111111111
