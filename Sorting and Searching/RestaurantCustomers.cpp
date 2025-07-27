#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define freopen(name) if(fopen(name".INP","r")) {freopen (name".INP","r",stdin); freopen (name".OUT","w",stdout);}
#define fir first
#define sec second
#define str string
#define pii pair <int, int>
const int Max_n=1e5;
const ll mod=1e9+7;
vector <pii> v;
int main(){
    freopen("");
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n, res = 0, dem = 0; cin >> n;
    for (int i = 1; i <= n; ++i){
    	 int a, b; cin >> a >> b;
         v.push_back({a, 1});
         v.push_back({b, 0});
    }
    sort(v.begin(), v.end());
    for (auto x : v){
    	 if(x.sec) dem++;
    	 else dem--;
    	 res = max(res, dem);
    }
    cout << res;
    return 0;
}//111111111111111111111111
