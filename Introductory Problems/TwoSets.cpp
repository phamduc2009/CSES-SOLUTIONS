#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define freopen(name) if(fopen(name".INP","r")) {freopen (name".INP","r",stdin); freopen (name".OUT","w",stdout);}
#define fir first
#define sec second
#define str string
const int Max_n=1e6;
const ll mod=1e9+7;
int cnt1 = 0, cnt2 = 0, check[Max_n+3];
int main(){
    freopen("");
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll n; cin >> n;
    ll val = n * (n + 1) / 2;
    if(val % 2 != 0) return cout << "NO",0;
    val = val / 2;
    for (int i = n; i >= 1; --i){
    	 if(val >= i){
    	 	val -= i;
    	 	check[i] = 1;
            cnt1++;
    	 }
    }
    if(val != 0){
       cnt1++;
       check[val] = 1;
    }
    check[val] = 1;
    cout << "YES" << '\n';
    cout << cnt1 << '\n';
    for (int i = 1; i <= n; ++i) if(check[i]) cout << i << ' ';
    cout << '\n';
    cout << n - cnt1 << '\n';
    for (int i = 1; i <= n; ++i) if(!check[i]) cout << i << ' ';
    return 0;
}//111111111111111111111111
