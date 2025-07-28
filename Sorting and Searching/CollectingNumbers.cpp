#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define freopen(name) if(fopen(name".INP","r")) {freopen (name".INP","r",stdin); freopen (name".OUT","w",stdout);}
#define fir first
#define sec second
#define str string
const int Max_n=2*1e5;
const ll mod=1e9+7;
pair <int,int> a[Max_n+3];
int main(){
    freopen("");
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n, dem = 0, res = 1; cin >> n;
    for (int i = 1; i <= n; ++i) cin >> a[i].fir, a[i].sec = i;
    sort(a + 1, a + n + 1);
    for (int i = 2; i <= n; ++i){
    	 if(a[i].sec > a[i - 1].sec) dem++;
    	 else{
    	 	 dem = 0;
    	 	 res++;
    	 }
    }
    cout << res;	
    return 0;
}//111111111111111111111111
