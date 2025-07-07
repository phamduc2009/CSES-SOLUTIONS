#include <bits/stdc++.h>
#define lb long double
#define ln '\n';
#define ll long long
#define str string
#define fir first
#define sec second
#define pb push_back
#define FOR(i,x,n) for ( int i=x;i<=n;i++)
#define freopen(name) if(fopen(name".INP","r")) {freopen (name".INP","r",stdin); freopen (name".OUT","w",stdout);}
#define ALL(x) (x).begin(),(x).end()
#define mod 1000000007
#define stgmtd signed main()
#define __phamduc__ ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);
using namespace std;
int a[200005];
ll dem,sum=LLONG_MAX,k,x,l,r,n;
void solve(){
    cin>>n>>k;
    for ( int i=1;i<=n;i++) cin>>a[i],dem=max(dem,(ll)a[i]);
    ll l=dem,r=1e18;
    while(l<=r){
      ll m=(l+r)/2,res=0;
      int b=1;
       for ( int i=1;i<=n;i++){
         if(res+a[i]>m){
            b++;
            res=0;
         }
          res+=a[i];
       }
      if(b>k) l=m+1;
      else{
        sum=min(sum,m);
        r=m-1;
      }
    }
    cout <<sum;
}
stgmtd{
         __phamduc__
         freopen("MAXVAL")
          int skmd=1;
          if(skmd==1){
            int t=1;
             while(t--){
                solve();
             }
      }
      else cout <<"KK";
}
