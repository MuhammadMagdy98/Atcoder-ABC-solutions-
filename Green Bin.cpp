#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

map<vector<int>, ll> mp;
int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;
    vector<int> cnt(26);
    for (auto x : s) {
      cnt[x - 'a']++;
    }
    mp[cnt]++;
  }
  ll answer = 0;
  for (auto x : mp) {
   answer += x.second * (x.second - 1) / 2;
  }
  printf("%lld\n", answer);
  return 0;
}
