#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<int> dp(n);
    dp[0] = a[0];
    dp[1] = a[1];
    for (int i = 2; i < n; i++) {
        dp[i] = a[i] + min(dp[i-1], dp[i-2]);
    }

    cout << min(dp[n-1], dp[n-2]) << endl;
    return 0;
}
