#include <iostream>
#include <cstring>
#include <set>
#include <vector>

using namespace std;

using ll = long long;

#define F first
#define S second


int main() {
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> a(n), b(m);
    for (int i = 0; i < n; i++) {
        cin >> a[i].F >> a[i].S;
    }
    for (int i = 0; i < m; i++) {
        cin >> b[i].F >> b[i].S;
    }
    for (int i = 0; i < n; i++) {
        int idx = 1;
        int mn = 1e9;
        for (int j = 0; j < m; j++) {
            int dis = abs(a[i].F - b[j].F) + abs(a[i].S - b[j].S);
            if (dis < mn) {
                mn = dis;
                idx = j + 1;
            }
        }
        cout << idx << '\n';
    }
    return 0;
}
