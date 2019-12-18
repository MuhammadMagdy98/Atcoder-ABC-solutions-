#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

#define F first
#define S second

using ll = long long;


int main() {
    string s;
    cin >> s;
    cout << min(count(s.begin(), s.end(), '0'), count(s.begin(), s.end(), '1')) * 2 << '\n';
    return 0;
}
