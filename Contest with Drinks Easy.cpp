#include <iostream>
 
using namespace std;
 
int main() {
  int n;
  cin >> n;
  int t[100];
  for (int i = 0; i < n; i++)
    cin >> t[i];
  int m;
  cin >> m;
  int p[100], after_drink[100];
  for (int i = 0; i < m; i++) {
    cin >> p[i] >> after_drink[i];
    int tmp = t[p[i] - 1];
    t[p[i] - 1] = after_drink[i];
    int s = 0;
    for (int j = 0; j < n; j++)
      s += t[j];
    t[p[i] - 1] = tmp;
    cout << s << '\n';
  }
  return 0;
}
