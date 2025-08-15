#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define freopen(name) if(fopen(name".INP","r")) {freopen (name".INP","r",stdin); freopen (name".OUT","w",stdout);}
#define fir first
#define sec second
#define str string
const int Max_n=1e5;
const ll mod=1e9+7;
ll max_digit(ll n){
	ll k = n, dem = 0;
	while (k != 0){
		dem = max(dem, k % 10);
		k = k / 10;
	}
	return dem;
}
int main(){
    freopen("DIGIT");
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll n, res = 0; cin >> n;
    while (n != 0){
        n -= max_digit(n);
        res++;
    }
    cout << res;
    return 0;
}//111111111111111111111111
