#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const ll MOD = 1e9 + 7;

ll binpow(ll a, ll b) {
    ll res = 1;
    while (b) {
        if (b & 1) res = res * a % MOD;
        a = a * a % MOD;
        b >>= 1;
    }
    return res;
}

ll inv(ll val , ll mod){
    return binpow(val , mod - 2);
}

void solve() {
    int n;
    cin >> n;

    vector<ll> a(n);
    for(auto &x : a) cin>>x;
    
    ll sum = accumulate(a.begin() , a.end() , 0ll);

    ll num = 0;

    for (ll x : a) {
        sum -= x;
        
        num = (num + x * ((sum + MOD) % MOD)) % MOD;
    }
    
    num *= 2;
    num %= MOD;

    ll den = 1LL * n * (n - 1) % MOD;

    cout << ((num * inv(den , MOD)) % MOD) << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
}
