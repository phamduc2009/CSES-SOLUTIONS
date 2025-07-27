#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define freopen(name) if(fopen(name".INP","r")) {freopen (name".INP","r",stdin); freopen (name".OUT","w",stdout);}
#define fir first
#define sec second
#define str string
const int Max_n=2*1e5;
const ll mod=1e9+7;
map <int, int> mp, mp2;
int a[Max_n+3];
int main(){
    freopen("");
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n, x, val, vt1, vt2, check = 0; cin >> n >> x;
    for (int i = 1; i <= n; ++i) cin >> a[i], mp[a[i]] = i, mp2[a[i]]++;
    for (int i = 1; i <= n; ++i){
    	 if(mp[x - a[i]] != i && mp[x - a[i]] >= 1){
            check = 1;
            cout << i << ' ' << mp[x - a[i]] << '\n';
            return 0;
    	 }
    	 if(x - a[i] == a[i]){
            if(mp2[a[i]] > 1){
               val = a[i];
               check = 1;
               vt1 = i;
            }
    	 }
    }
    for (int i = 1; i <= n; ++i){
    	 if(a[i] == val){
    	    if(i != vt1){
    	       vt2 = i;
    	    }
    	 }
    }
    if(check) cout << vt1 << ' ' << vt2;
    else cout << "IMPOSSIBLE";
    return 0;
}//111111111111111111111111
