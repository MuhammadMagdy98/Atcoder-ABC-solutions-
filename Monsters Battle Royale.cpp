#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

#define F first
#define S second

using ll = long long;

int main() {
    int n;
    cin >> n;
    int gcd = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        gcd = __gcd(gcd, x);
    }
    cout << gcd << '\n';
    return 0;
}
