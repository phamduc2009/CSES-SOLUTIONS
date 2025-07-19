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
    ll n, val = 1, res = 0; cin >> n;
    for (ll i = 1; i <= 15; ++i){
         val *= 5;
         res += n / val;
    }
    cout << res;
    return 0;
}//111111111111111111111111
