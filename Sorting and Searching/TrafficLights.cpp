#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define freopen(name) if(fopen(name".INP","r")) {freopen (name".INP","r",stdin); freopen (name".OUT","w",stdout);}
#define fir first
#define sec second
#define str string
const int Max_n=2*1e5;
set <int> s;
multiset <int> ms;
int main(){
    freopen("");
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int x, n; cin >> x >> n;
    s.insert(x); s.insert(0);
    ms.insert(x);
    for (int i = 1; i <= n; ++i){
    	 int b; cin >> b;
         auto it = s.lower_bound(b);
         int r = *it;
         it--;
         int l = *it;
         ms.erase(ms.find(r - l));
         ms.insert(r - b);
         ms.insert(b - l);
    	 s.insert(b);
    	 cout << *ms.rbegin() << ' ';
    }
    return 0;
}//111111111111111111111111
