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
#include <cmath>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int h, w, hh, ww;
    cin >> h >> w >> hh >> ww;
    int arr[20][20]{};
    for (int i = 0; i < h && hh--; i++) {
        for (int j = 0; j < w; j++) {
            arr[i][j] = 1;
        }
    }
    for (int i = 0; i < w && ww--; i++) {
        for (int j = 0; j < h; j++) {
            arr[j][i] = 1;
        }
    }
    int ans = 0;
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (arr[i][j] == 0) ans++;
        }
    }
    cout << ans << '\n';
    return 0;
}
