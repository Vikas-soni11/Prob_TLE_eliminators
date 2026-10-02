#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    ll p;
    cin >> n >> p;

    vector<ld> prob(n);

    for (int i = 0; i < n; i++) {
        ll l, r;
        cin >> l >> r;

        ll cnt = r / p - (l - 1) / p;
        prob[i] = (ld)cnt / (r - l + 1);
    }

    ld ans = 0;

    for (int i = 0; i < n; i++) {
        int j = (i + 1) % n;

        ld happy = prob[i] + prob[j]
                 - prob[i] * prob[j];

        ans += happy * 2000;
    }

    cout << fixed << setprecision(10) << ans << '\n';

    return 0;
}
