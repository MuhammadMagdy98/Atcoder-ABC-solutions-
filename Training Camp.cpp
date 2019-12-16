#include <iostream>
 
using namespace std;
 
using ll = long long;
 
int main() {
	int n;
	cin >> n;
	ll fact = 1;
	const int mod = 1e9 + 7;
	for (int i = 1; i <= n; i++) {
		fact *= i;
		fact %= mod;
	}
	cout << fact << '\n';
	return 0;
}
