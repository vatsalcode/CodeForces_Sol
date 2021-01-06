#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	int test;
	cin >> test;
	while (test--) {
		int n, x;
		cin >> n >> x;
		ll total = 0;
		ll t1 = 0;
		for (int i = 0; i < n; i++) {
			ll y;
			cin >> y;
			total += y;
			t1 += (y / x);
			if (y % x) t1++;
		}
		ll other = total / x;
		if (total % x) other++;
		cout << other << " " << t1 << "\n";
	}




	return 0;
}
