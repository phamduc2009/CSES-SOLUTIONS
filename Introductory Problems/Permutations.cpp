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
    if(n == 1) return cout << 1,0;
    if(n <= 3) return cout << "NO SOLUTION", 0;
    if(n == 4) return cout << 2 << ' ' << 4 << ' ' << 1 << ' ' << 3, 0;
    for (int i = 1; i <= n; i += 2) cout << i << ' ';
    for (int i = 2; i <= n; i += 2) cout << i << ' ';
    return 0;
}//111111111111111111111111
