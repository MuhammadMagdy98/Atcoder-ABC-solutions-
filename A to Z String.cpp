#include <iostream>
#include <cstring>
using namespace std;
 
int main() {
  char s[200001];
  cin >> s;
  int len = strlen(s);
  int mn_a = len + 1, mx_z = -1;
  for (int i = 0; i < len; i++) {
    if (s[i] == 'A') {
      if (i < mn_a)
        mn_a = i;
    }
    if (s[i] == 'Z') {
      if (i > mx_z)
        mx_z = i;
    }
  }
  cout << mx_z - mn_a + 1;
  return 0;
}
