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
    int rows, cols, r, c;
    cin >> rows >> cols >> r >> c;
    int total = cols * r + c * (rows - r);
    cout << rows * cols - total << '\n';
    return 0;
}
