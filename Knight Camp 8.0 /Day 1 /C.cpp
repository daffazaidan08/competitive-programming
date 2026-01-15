#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0);

    int a, b;
    cin >> a >> b;

    int ans = -1;
    for (int i = 1; i <= 1250; i++) {
        if (i * 8/100 == a && i * 1/10 == b) {
            ans = i;
            break;
        }
    }

    cout << ans << '\n';
}
