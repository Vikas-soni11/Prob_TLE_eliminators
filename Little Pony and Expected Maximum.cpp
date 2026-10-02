#include <bits/stdc++.h>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    long double ans = 0;

    for (int k = 1; k <= m; k++) {
        long double p = powl((long double)k / m, n) 
                         - powl((long double)(k - 1) / m, n);

        ans += k * p;
    }

    cout << fixed << setprecision(12) << ans << '\n';
    return 0;
}
