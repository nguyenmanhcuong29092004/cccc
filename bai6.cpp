#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;
const int MOD = 1e9 + 7;


// hàm tính lũy thừa
long long power(long long x, long long n) {
    long long res = 1;
    while (n > 0) {
        if (n & 1) {
            res = (res * x) % MOD;
        }
        x = (x * x) % MOD;
        n >>= 1;
    }
    return res;
}

int main() {
    int n;
    cin >> n;
    long long p = 1;
    long long tmp;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        p *= power(2, tmp) + 1 ;
        p %= MOD;
        cout<<p<<endl;
    }

    cout << (p - 1) % MOD << endl;

    return 0;
}
