#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define freopen(name) if(fopen(name".INP","r")) {freopen (name".INP","r",stdin); freopen (name".OUT","w",stdout);}
#define fir first
#define sec second
#define str string
const int Max_n=2*1e5;
const ll mod=1e9+7;
int d[Max_n+3];
int main(){
    freopen("");
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    for (int i = 1; i <= n - 1; ++i){
    	 int x; cin >> x;
         d[x] = 1;
    }
    for (int i = 1; i <= n; ++i){
    	 if(!d[i]){
    	 	cout << i;
    	 	break;
    	 }
    }
    return 0;
}//111111111111111111111111
