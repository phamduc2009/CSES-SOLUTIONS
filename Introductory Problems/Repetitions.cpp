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
    str s; cin >> s;
    int dem = 1, res = 0;
    for (int i = 0; i < s.size(); ++i){
    	 if(s[i] == s[i + 1]) dem++;
    	 else{
    	 	 res = max(res, dem);
    	 	 dem = 1;
    	 }
    }
    res = max(res, dem);
    cout << res;
    return 0;
}//111111111111111111111111
