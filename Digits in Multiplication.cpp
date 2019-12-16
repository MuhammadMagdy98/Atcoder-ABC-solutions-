#include <iostream>
#include <cstring>
#include <set>
#include <vector>

using namespace std;

using ll = long long;

ll cnt_digits(ll x) {
    int ret = 0;
    while (x > 0) {
        ret++;
        x /= 10;
    }
    return ret;
}

int main() {
    ll n;
    cin >> n;
    ll ans = 1e10 + 10;
    for (ll i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            ll x = max(cnt_digits(i), cnt_digits(n / i));
            ans = min(ans, x);
        }
    }
    cout << ans << '\n';
    return 0;
}
