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
    int n, x, res = 0; cin >> n >> x;
    for (int i = 1; i <= n; ++i) cin >> a[i];
    sort(a + 1, a + n + 1);
    int i = 1, j = n;
    while (i <= j){
    	if(a[i] + a[j] <= x){
           res++;
           i++;
           j--;
    	}
    	else j--, res++;
    }
    cout << res;
    return 0;
}//111111111111111111111111
