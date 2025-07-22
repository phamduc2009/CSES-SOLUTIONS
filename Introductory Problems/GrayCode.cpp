#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define freopen(name) if(fopen(name".INP","r")) {freopen (name".INP","r",stdin); freopen (name".OUT","w",stdout);}
#define fir first
#define sec second
#define str string
const int Max_n=1e5;
const ll mod=1e9+7;
vector <str> ans;
vector <str> backtrack(int n){
    if(n == 0) return {"0"};
    if(n == 1) return {"1", "0"};
    vector <str> res = backtrack(n - 1);
    vector <str> pre;
    for (auto &x : res) pre.push_back("0" + x);
    for (int i = res.size() - 1; i >= 0; --i){
         pre.push_back("1" + res[i]);
    }
    return pre;
}
int main(){
    freopen("");
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    ans = backtrack(n);
    for (auto x : ans) cout << x << '\n';
    return 0;
}//111111111111111111111111
