#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    bool ya = false;
    for (int i = 0; i < n-1; i++) {
        int minm = a[i], idx = -1;
        for (int j = i+1; j < n; j++) {
            if (a[j] < minm && a[i] > a[j]) {
                idx = j;
                minm = a[j];
                ya = true;
            }
        }
        if (idx != -1) swap(a[i], a[idx]);
        if (ya) break;
    }

    bool sorted = true;
    for (int i = 0; i < n-1; i++) {
        if (a[i] > a[i+1]) sorted = false;
    }

    if (sorted) cout << "YES\n";
    else cout << "NO\n";
}
