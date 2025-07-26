#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define freopen(name) if(fopen(name".INP","r")) {freopen (name".INP","r",stdin); freopen (name".OUT","w",stdout);}
#define fir first
#define sec second
#define str string
const int Max_n=20;
const ll mod=1e9+7;
int n = 8, b[Max_n+3], res, cheo1[Max_n+3], cheo2[Max_n+3], cot[Max_n+3];
char a[Max_n+3][Max_n+3];
void Try(int i){
	if(i > n){
       res++;
       return;
	}
	for (int j = 1; j <= n; ++j){
		 if(a[i][j] != '*' && !cot[j] && !cheo1[i + j] && !cheo2[i - j + 8]){
		 	b[i] = j;
		 	cot[j] = 1; cheo1[i + j] = 1; cheo2[i - j + 8] = 1;
		 	Try(i + 1);
		 	cot[j] = 0; cheo1[i + j] = 0; cheo2[i - j + 8] = 0;
		 }
	}
}
int main(){
    freopen("");
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    for (int i = 1; i <= n; ++i){
    	 for (int j = 1; j <= n; ++j){
    	 	  cin >> a[i][j];
    	 }
    }
    Try(1);
    cout << res;
    return 0;
}//111111111111111111111111
