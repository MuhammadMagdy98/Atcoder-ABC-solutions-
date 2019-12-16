#include <iostream>
#include <cstring>

using namespace std;

using ll = long long;

int main() {
    char s[51];
    char t[51];
    char p[102]{};
    cin >> s >> t;
    int len1 = strlen(s);
    int len2 = strlen(t);
    int cnt = 0;
    if (len1 > len2) {
        for (int i = 0; i < len2; i++) {
            p[cnt++] = s[i];
            p[cnt++] = t[i];
        }
        for (int i = len2; i < len1; i++) {
            p[cnt++] = s[i];
        }
    } else {
        for (int i = 0; i < len1; i++) {
            p[cnt++] = s[i];
            p[cnt++] = t[i];
        }
        for (int i = len1; i < len2; i++) {
            p[cnt++] = t[i];
        }
    }
    p[cnt] = '\0';
    for (int i = 0; p[i]; i++) {
        cout << p[i];
    }
    return 0;
}
