#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

#define F first
#define S second

using ll = long long;

int main() {
    int n, m;
    cin >> n >> m;
    int freq[31]{};
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        for (int j = 0; j < k; j++) {
            int x;
            cin >> x;
            freq[x]++;
        }
    }
    int ans = 0;
    for (int i = 1; i <= 30; i++) {
        if (freq[i] == n) {
            ans++;
        }
    }
    cout << ans << '\n';
    return 0;
}
