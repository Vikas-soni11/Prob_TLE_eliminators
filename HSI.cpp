#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, m;
    cin >> n >> m;

    long long time = 1900 * m + 100 * (n - m);
    cout << time * (1LL << m) << '\n';

    return 0;
}
