#include <iostream>
#include <algorithm>

using namespace std;

#define F first
#define S second

using ll = long long;

const int N = 1e5 + 5;
pair<ll, ll> arr[N];
int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> arr[i].F >> arr[i].S;
    }
    sort(arr, arr + n);
    ll ans = 0;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (cnt + arr[i].S > m) {
            ans += (m - cnt) * arr[i].F;
            break;
        }
        ans += arr[i].F * arr[i].S;
        cnt += arr[i].S;
    }
    cout << ans << '\n';
    return 0;
}
