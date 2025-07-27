#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define freopen(name) if(fopen(name".INP","r")) {freopen (name".INP","r",stdin); freopen (name".OUT","w",stdout);}
#define fir first
#define sec second
#define str string
const int Max_n=2*1e5;
const ll mod=1e9+7;
int a[Max_n+3];
int main(){
    freopen("");
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    for (int i = 1; i <= n; ++i) cin >> a[i];
    sort(a + 1, a + n + 1);
    if(n == 1) return cout << 0,0;
    int val1 = a[n / 2 + 1], val2 = a[n / 2], val3 = a[n / 2 - 1];
    ll res = 1e18, cnt = 0;
    for (int i = 1; i <= n; ++i) cnt += abs(val1 - a[i]);
    res = min(res, cnt); cnt = 0;
    for (int i = 1; i <= n; ++i) cnt += abs(val2 - a[i]);
    res = min(res, cnt); cnt = 0;
    for (int i = 1; i <= n; ++i) cnt += abs(val3 - a[i]);
    res = min(res, cnt);
    cout << res; 
    return 0;
}//111111111111111111111111
