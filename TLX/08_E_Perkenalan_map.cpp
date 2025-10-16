#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    ll n, q;
    cin >> n >> q;

    map<string, string> telp;

    for (int i = 0; i < n; i++) {
        string tnama, ttelp;
        cin >> tnama >> ttelp;
        telp[tnama] = ttelp;
    }

    for (int i = 0; i < q; i++) {
        string inpnama;
        cin >> inpnama;
        if (!telp[inpnama].empty()) cout << telp[inpnama] << '\n';
        else cout << "NIHIL\n";
    }
}