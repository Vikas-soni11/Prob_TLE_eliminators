#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    vector<int> p(n);
    for (int &x : p) cin >> x;

    double sum = 0;

    // calculating the expected sum for the first window of length k
    for (int i = 0; i < k; i++) {
        sum += p[i] + 1;
    }

    double ans = sum;
    
    // sliding window technique
    for (int i = k; i < n; i++) {
        sum += p[i] + 1;
        sum -= p[i - k] + 1;
        ans = max(ans, sum);
    }

    cout << fixed << setprecision(10) << ans / 2.0 << '\n';

    return 0;
}
