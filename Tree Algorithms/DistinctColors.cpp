#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define freopen(name) if(fopen(name".INP","r")) {freopen (name".INP","r",stdin); freopen (name".OUT","w",stdout);}
#define fir first
#define sec second
#define str string
const int Max_n=2*1e5;
const ll mod=1e9+7;
int a[Max_n+3], ans[Max_n+3];
vector <int> g[Max_n+3];
set <int> s[Max_n+3];
void dfs(int u, int par){
	for (auto v : g[u]){
		 if(v == par) continue;
		 dfs(v, u);
		 if(s[u].size() < s[v].size()) swap(s[u], s[v]);
		 for (auto x : s[v]) s[u].insert(x);
	}
    ans[u] = s[u].size();
}
int main(){
    freopen("");
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    for (int i = 1; i <= n; ++i) cin >> a[i], s[i].insert(a[i]);
    for (int i = 1; i <= n - 1; ++i){
    	 int u, v; cin >> u >> v;
         g[u].push_back(v);
         g[v].push_back(u);
    }
    dfs(1, -1);
    for (int u = 1; u <= n; ++u) cout << ans[u] << ' ';
    return 0;
}//111111111111111111111111
