#include <iostream>
using namespace std;
int main()
{
    long long n, dem = 0; cin >> n;
    cout << n << ' ';
    while (n != 1){
        if(n % 2  == 0) n = n / 2;
        else n = 3 * n + 1;
        dem++;
        cout << n << ' ';
    }
    return 0;
}
