#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define freopen(name) if(fopen(name".INP","r")) {freopen (name".INP","r",stdin); freopen (name".OUT","w",stdout);}
#define fir first
#define sec second
#define str string
const int Max_n=2*1e5;
const ll mod=1e9+7;
int res = 0, l = 1, a[Max_n+3], mp[Max_n+3];
vector <int> v;
int main(){
    freopen("");
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    for (int i = 1; i <= n; ++i) cin >> a[i], v.push_back(a[i]);
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());
    for (int i = 1; i <= n; ++i) a[i] = lower_bound(v.begin(), v.end(), a[i]) - v.begin();
    for (int r = 1; r <= n; ++r){
    	 mp[a[r]]++;
    	 while(mp[a[r]] >= 2){
    	 	mp[a[l]]--;
    	 	l++;
    	 }
    	 res = max(res, r - l + 1);
    }
    cout << res;
    return 0;
}//111111111111111111111111
