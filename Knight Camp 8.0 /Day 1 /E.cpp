#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int a, b;
        for (int i = 0; i < n; i++) {
            if (s[i] == 'B') {
                a = i;
                break;
            }
        }
        for (int j = n-1; j >= 0; j--) {
            if (s[j] == 'B') {
                b = j;
                break;
            }
        }

        cout << b-a+1 << endl;
    }
}
