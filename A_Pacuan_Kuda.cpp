#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll maks = 1e9 + 5;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    ll n;
    cin >> n;
    vector<ll> v(n), d(n);

    ll min_idx = maks;
    double min_ratio = maks;

    for (int i = 0; i < n; i++) {
        cin >> v[i] >> d[i];
        double ratio = (double)d[i] / (double)v[i];
        if (ratio < min_ratio) {
            min_ratio = ratio;
            min_idx = i + 1;
        }
    }

    cout << min_idx << '\n';
}