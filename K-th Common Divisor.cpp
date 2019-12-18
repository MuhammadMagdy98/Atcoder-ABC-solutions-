#include <iostream>
#include <algorithm>

using namespace std;

#define F first
#define S second

using ll = long long;

const int N = 1e5 + 5;
pair<ll, ll> arr[N];
int main() {
    int a, b, k;
    cin >> a >> b >> k;
    for (int i = min(a, b); i >= 1; i--) {
        if (a % i == 0 && b % i == 0) {
            k--;
        }
        if (k == 0) {
            cout << i << '\n';
            break;
        }
    }
    return 0;
}
