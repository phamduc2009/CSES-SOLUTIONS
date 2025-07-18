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
    int t; cin >> t;
    while (t--){
    	ll x, y; cin >> x >> y;
        if(x > y){
           if(x % 2 == 0) cout << x * x - (y - 1);
           else cout << (x - 1) * (x - 1) + y;
        }
        else{
           if(y % 2 == 0) cout << (y - 1) * (y - 1) + x;
           else cout << y * y - (x - 1);
        }
        cout << '\n';
    }
    return 0;
}//111111111111111111111111
