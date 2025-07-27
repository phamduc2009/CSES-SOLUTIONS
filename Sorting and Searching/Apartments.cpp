#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define freopen(name) if(fopen(name".INP","r")) {freopen (name".INP","r",stdin); freopen (name".OUT","w",stdout);}
#define fir first
#define sec second
#define str string
const int Max_n=2*1e5;
const ll mod=1e9+7;
int a[Max_n+3], b[Max_n+3], dem = 0;
int main(){
    freopen("");
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n, m, k; cin >> n >> m >> k;
    for (int i = 1; i <= n; ++i) cin >> a[i];
    for (int j = 1; j <= m; ++j) cin >> b[j];
    sort(a + 1, a + n + 1);
    sort(b + 1, b + m + 1);
    int i = 1, j = 1;
    while (i <= n && j <= m){
    	 if(abs(a[i] - b[j]) <= k){
    	 	dem++;
    	 	i++;
    	 	j++;
    	 }
    	 else{
    	 	if(a[i] - b[j] > k) j++;
    	 	else if(b[j] - a[i] > k) i++;
    	 }
    }
    cout << dem;
    return 0;
}//111111111111111111111111
