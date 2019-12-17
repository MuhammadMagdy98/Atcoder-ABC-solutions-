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
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    vector<int> pre(n);
    pre[0] = 0;
    for (int i = 1; i < n; i++) {
        pre[i] += pre[i - 1] + (s[i - 1] == 'A' && s[i] == 'C');
    }
    for (int i = 0; i < q; i++) {
        int l, r;
        cin >> l >> r;
        l--;
        r--;
        if (l == 0) {
            cout << pre[r] << '\n';
        } else {
            cout << pre[r] - pre[l] << '\n';
        }
    }
    return 0;
}
