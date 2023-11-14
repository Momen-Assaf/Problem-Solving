#include<bits/stdc++.h>
#define ll long long
#define ull unsigned ll
#define endl '\n'
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)

ll mod = 998244353;
using namespace std;
pair<ll, ll> sum_rational(ll p, ll q, pair<ll, ll> ans) {
    ans.first = (ans.first * q + p * ans.second) % mod;
    ans.second = (ans.second * q) % mod;
    return ans;
}

ll modpow(ll x, ll n, ll m) {
    if (n == 0) return 1 % m;
    ll u = modpow(x, n / 2, m);
    u = (u * u) % m;
    if (n % 2 == 1) u = (u * x) % m;
    return u;
}

int solve() {
    ll n, k;
    cin >> n >> k;

    if (n > k * 6) {
        cout << 0;
    } else {
        pair<ll, ll> ans;
        ans.first = 0;
        ans.second = 1;

        for (int i = 1; i <= k; i++) {
            if (i > n) break;
            if (i * 6 < n) continue;
            ans = sum_rational(1, pow(6, i), ans);
        }

        ans.second = (ans.second * k) % mod;

        ll inverse = modpow(ans.second, mod - 2, mod); // Calculate the modular inverse
        ll result = (ans.first * inverse) % mod;

        cout << result;
    }

    return 0;
}

int main() {
    fast;

    int t;
    t = 1;
    while (t--) {
        solve();
    }

    return 0;
}
