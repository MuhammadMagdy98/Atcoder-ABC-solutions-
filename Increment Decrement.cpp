#include <iostream>
 
using namespace std;
 
int main() {
  int n;
  cin >> n;
  char s[101];
  cin >> s;
  int cnt = 0;
  int ans = 0;
  for (int i = 0; i < n; i++) {
    if (s[i] == 'I') cnt++;
    else cnt--;
    if (cnt > ans) {
      ans = cnt;
    }
  }
  cout << ans;
  return 0;
}
