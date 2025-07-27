#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define freopen(name) if(fopen(name".INP","r")) {freopen (name".INP","r",stdin); freopen (name".OUT","w",stdout);}
#define fir first
#define sec second
#define str string
const int Max_n=2*1e5;
const ll mod=1e9+7;
pair <int, int> a[Max_n+3];
bool cmp(pair <int,int> a, pair<int,int> b){
    return a.sec < b.sec;
}
int main(){
    freopen("");
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    for (int i = 1; i <= n; ++i){
    	 cin >> a[i].fir >> a[i].sec;
    }
    sort(a + 1, a + n + 1, cmp);
    int res = 1, val = a[1].sec;
    for (int i = 2; i <= n; ++i){
         if(a[i].fir >= val){
            res++;
            val = a[i].sec;
         }
    }
    cout << res;
    return 0;
}//111111111111111111111111
