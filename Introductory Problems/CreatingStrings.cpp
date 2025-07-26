#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define freopen(name) if(fopen(name".INP","r")) {freopen (name".INP","r",stdin); freopen (name".OUT","w",stdout);}
#define fir first
#define sec second
#define str string
const int Max_n=1e5;
const ll mod=1e9+7;
int dem = 0;
vector <str> res;
int main(){
    freopen("");
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    str s; cin >> s;
    sort(s.begin(), s.end());
    do{
       res.push_back(s);
    }while(next_permutation(s.begin(), s.end()));
    cout << res.size() << '\n';
    for (auto x : res) cout << x << '\n';
    return 0;
}//111111111111111111111111
