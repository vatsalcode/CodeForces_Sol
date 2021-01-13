#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int kp(int wt[], int val[], int w, int n) {
	if (n == 0 || w == 0)
		return 0;
	if (wt[n - 1] > w)
		return (kp(wt, val, w, n - 1));
	else
		return max(kp(wt, val, w, n - 1), kp(wt, val, w - wt[n - 1], n - 1) + val[n - 1]);
}




int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	cin >> n;
	int w;
	cin >> w;
	int val[n], wt[n];
	for (int i = 0; i < n; i++) {
		cin >> wt[i];
		cin >> val[i];
	}
	cout << kp(wt, val, w, n);


	return 0;
}
