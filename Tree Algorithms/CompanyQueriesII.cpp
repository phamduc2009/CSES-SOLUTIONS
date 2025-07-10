#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define freopen(name) if(fopen(name".INP","r")) {freopen (name".INP","r",stdin); freopen (name".OUT","w",stdout);}
#define fir first
#define sec second
#define str string
const int Max_n=2*1e5;
const ll mod=1e9+7;
int up[Max_n+3][20], h[Max_n+3];
vector <int> g[Max_n+3];
void dfs(int u, int par){
	for (auto v : g[u]){
		 if(v == par) continue;
		 h[v] = h[u] + 1;
         up[v][0] = u;
         for (int j = 1; j < 20; ++j){
         	  up[v][j] = up[up[v][j-1]][j-1];
         }
         dfs(v, u);
	}
}
int lca(int u, int v){
	if(h[u] < h[v]) swap(u, v);
	if(h[u] != h[v]){
	   int k = h[u] - h[v];
	   for (int j = 19; j >= 0; --j){
	   	    if(k >> j & 1){
	   	       u = up[u][j];
	   	    }
	   }
	}
	if(u == v) return u;
    int k = __lg(h[u]);
	for (int j = k; j >= 0; --j){
		 if(up[u][j] != up[v][j]){
		 	u = up[u][j];
		 	v = up[v][j];
		 }
	}
	return up[u][0];
}
int main(){
    freopen("");
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n, q; cin >> n >> q;
    for (int i = 2; i <= n; ++i){
    	 int u; cin >> u;
    	 g[u].push_back(i);
    }
    dfs(1, -1);
    while (q--){
    	int u, v; cin >> u >> v;
    	cout << lca(u, v) << '\n';
    }
    return 0;
}//111111111111111111111111
