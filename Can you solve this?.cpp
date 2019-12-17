#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <unordered_map>
#include <iomanip>

using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, m, c;
    cin >> n >> m >> c;
    vector<int> a(m);
    for (int i = 0; i < m; i++) {
        cin >> a[i];
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int s = 0;
        for (int j = 0; j < m; j++) {
            int x;
            cin >> x;
            s += x * a[j];
         }
        s += c;
        if (s > 0) ans++;
    }
    cout << ans << '\n';
    return 0;
}
