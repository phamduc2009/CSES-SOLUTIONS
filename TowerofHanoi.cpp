#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define freopen(name) if(fopen(name".INP","r")) {freopen (name".INP","r",stdin); freopen (name".OUT","w",stdout);}
#define fir first
#define sec second
#define str string
const int Max_n=1e5;
const ll mod=1e9+7;
void Try(int a, int b, int c, int n){
    if(n == 0) return;
    Try(a, c, b, n - 1);
    cout << a << ' ' << c << '\n';
    Try(b, a, c, n - 1);
}
int main(){
    freopen("");
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    cout << (1 << n) - 1 << '\n';
    Try(1, 2, 3, n);
    return 0;
}//111111111111111111111111
