#include <iostream>

using namespace std;

using ll = long long;
int main() {
    ll n, m;
    cin >> n >> m;
    if (n > m / 2) {
        cout << m / 2;
    } else {
        cout << n + (m - 2 * n) / 4;
    }
    return 0;
}
