#include <iostream>
#include <cstring>
#include <set>
#include <vector>

using namespace std;

using ll = long long;

int main() {
    int n, m;
    cin >> n >> m;
    char arr[100][100];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }
    int extra = m + 2;
    cout << string(extra, '#') << '\n';
    for (int i = 0; i < n; i++) {
        cout << '#';
        for (int j = 0; j < m; j++) {
            cout << arr[i][j];
        }
        cout << "#\n";
    }
    cout << string(extra, '#') << '\n';
    return 0;
}
