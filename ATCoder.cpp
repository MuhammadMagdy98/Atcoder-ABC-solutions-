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

const int N = 11;
char s[N];

bool valid(char c) {
    return c == 'A' || c == 'T' || c == 'G' || c == 'C';
}
int main() {
    scanf("%s", s);
    int len = strlen(s);
    int ans = 0;
    int cnt = 0;
    for (int i = 0; i < len; i++) {
        if (valid(s[i])) cnt++;
        else cnt = 0;
            ans = max(ans, cnt);
    }
    printf("%d", ans);
    return 0;
}
