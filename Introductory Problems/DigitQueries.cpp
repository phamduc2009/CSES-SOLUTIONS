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
    int q; cin >> q;
    while (q--){
    	ll k; cin >> k;
        str s = to_string(k);
        ll res = 0, val = 9, j = 0;
        for (ll i = 1; i <= 18; ++i){
             if(i != 1) val = val * 10;
             res += val * i;
             if(k < res){
                res -= val * i;
                j = i;
                break;
             } 
        }
        k -= res;
        if(k == 0) cout << 9;
        else{
            ll tmp = (k % j == 0 ? k / j - 1 : k / j);
            k -= tmp * j;
            ll val = 1;
            for (int i = 1; i <= j - 1; ++i) val = val * 10 + 0;
            val += tmp;
            str a = to_string(val);
            cout << a[k - 1] - '0';
        }
        cout << '\n';
    }
    return 0;
}//111111111111111111111111
