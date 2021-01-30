#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define base 50


int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int i = 0, j = n - 1;
    while (i <= j) {
        if (a[i] < 0 && a[j] > 0) {
            swap(a[i], a[j]);
            i++;
            j--;
        }
        else if (a[i] < 0 && a[j] > 0) {
            i++;
            j--;
        }
        else if (a[i] < 0) {
            i++;
        }
        else if (a[j] > 0) {
            j--;
        }

    }
    if (i == 0 || i == n) {
        for (int m = 0; m < n; m++)
            cout << a[m] << " ";
    }
    else {
        int k = 0;
        while (k < n && i < n) {
            swap(a[k], a[i]);
            k = k + 2;
            i++;
        }
        for (int m = 0; m < n; m++)
            cout << a[m] << " ";
    }







    return 0;
}









