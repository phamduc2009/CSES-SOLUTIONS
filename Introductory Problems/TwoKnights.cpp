#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define freopen(name) if(fopen(name".INP","r")) {freopen (name".INP","r",stdin); freopen (name".OUT","w",stdout);}
#define fir first
#define sec second
#define str string
const int Max_n=1e5;
const ll mod=1e9+7;
int main(){
    freopen("");
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    for (ll i = 1; i <= n; ++i){
    	 ll k = i * i;
         cout << k * (k - 1) / 2LL - 4LL * (i - 2) * (i - 1) << '\n';
    }
    return 0;
}//111111111111111111111111
