#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        set<ll> a;
        while (n--) {
            ll in;
            cin >> in;
            a.insert(in);
        }
        ll c = a.size();
        for (int i = 0; i < 1001; i++) {
            c = a.size();
            if (a.count(c)) {
            cout << c << endl;
            break;
            }
            else a.insert(c);
        }
    }

    return 0;
}
