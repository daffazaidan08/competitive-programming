#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> q(n), r(n);
    for (int i = 0; i < n; i++) cin >> q[i] >> r[i];
    int Q;
    cin >> Q;
    while (Q--) {
        int t, d;
        cin >> t >> d;

        int x = (d - (d % q[t-1])) / q[t-1];
        int ans = q[t-1]*x + r[t-1];
        while (ans < d) {
            ans = q[t-1]*x + r[t-1];
            x++;
        }

        cout << ans << endl;
    }
}
