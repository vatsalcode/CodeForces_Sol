#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n, k;
	cin >> n >> k;
	vector<ll>a(n);
	vector<ll>b(n);
	ll mini = 1e9;
	int id = -1;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		ll x = a[i];
		b[i] = 0;
		while (x % k == 0) {
			x /= k;
			b[i]++;
		}
		if (b[i] < mini) {
			mini = b[i];
			id = i;
		}
	}
	ll ans = 0;
	for (int i = 0; i < n; i++) {
		ans += (mini + 1LL) * a[i];
	}
	for (int i = 0; i < id; i++) {
		ans += a[i];
	}
	cout << ans << "\n";


	return 0;
}
