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
    	int a, b; cin >> a >> b;
    	if(a > b) swap(a, b);
    	if(b > a * 2) cout << "NO" << '\n';
    	else if(b == 2 * a) cout << "YES" << '\n';
    	else{
            if((a + b) % 3 == 0) cout << "YES" << '\n';
            else cout << "NO" << '\n';
        }
    }
    return 0;
}//111111111111111111111111
