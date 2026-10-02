#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;


// let f(x) = sum of number of unique occurence of subrarrays that start at index i 
// obs is moving from f(x) -> f(x + 1) is easy

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;

    vector<ll> a(n + 1), nxt(n + 1), dp(n + 2);
    vector<ll> last(1000001, n + 1);

    for (int i = 1; i <= n; i++)
        cin >> a[i];

    for (int i = n; i >= 1; i--) {
        nxt[i] = last[a[i]];
        last[a[i]] = i;
    }

    long long S = 0;

    for (int i = n; i >= 1; i--) {
        dp[i] = dp[i + 1] + nxt[i] - i;
        S += dp[i];
    }

    cout << fixed << setprecision(10) << ((ld)2.0 * S - n) / ((ld)n * n) << '\n';
}
