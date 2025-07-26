#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define freopen(name) if(fopen(name".INP","r")) {freopen (name".INP","r",stdin); freopen (name".OUT","w",stdout);}
#define fir first
#define sec second
#define str string
const int Max_n=30;
const ll mod=1e9+7;
int n, a[Max_n+3], b[Max_n+3];
ll res = 1e18;
void Try(int i){
	if(i > n){
	   ll sum1 = 0, sum2 = 0;
	   for (int j = 1; j <= n; ++j){
            if(b[j] == 1) sum1 += a[j];
            else sum2 += a[j];
	   }
	   res = min(res, abs(sum1 - sum2));
	   return;
	}
	for (int v = 0; v <= 1; ++v){
		 b[i] = v;
		 Try(i + 1);
	}
}
int main(){
    freopen("");
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; ++i) cin >> a[i];
    Try(1);
    cout << res;
    return 0;
}//111111111111111111111111
