#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define freopen(name) if(fopen(name".INP","r")) {freopen (name".INP","r",stdin); freopen (name".OUT","w",stdout);}
#define fir first
#define sec second
#define str string
const int Max_n=2*1e5;
const ll mod=1e9+7;
int b[Max_n+3];
vector <int> result;
struct cmp{
    bool operator() (int a, int b){
        return a > b;
    }
};
int main(){
    freopen("");
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n, m; cin >> n >> m;
    multiset <int, cmp> s;
    for (int i = 1; i <= n; ++i){
         int x; cin >> x;
         s.insert(x);
    }
    for (int j = 1; j <= m; ++j) cin >> b[j];
    for (int i = 1; i <= m; ++i){
         auto it = s.lower_bound(b[i]);
         int val = (it == s.end() ? -1 : *it);
         result.push_back(val);
         if(val != -1) s.erase(it);
    }
    for (auto x : result) cout << x << '\n';
    return 0;
}//111111111111111111111111
