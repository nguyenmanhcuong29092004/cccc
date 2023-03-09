#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, M;
    cin >> n >> M;

    vector<int> weight(n + 1), value(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> weight[i] >> value[i];
    }

    vector<int> f(M + 1);
    for (int i = 1; i <= n; i++) {
        for (int j = M; j >= weight[i]; j--) {
            f[j] = max(f[j], f[j - weight[i]] + value[i]);
        }
    }

    cout << f[M] << endl;

    return 0;
}
