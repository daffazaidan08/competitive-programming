#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void gambar (ll n) {
    if (n == 1) {
        cout << '*' << '\n';
        return;
    } else {
        gambar(n - 1);
        for (int i = 0; i < n; i++) cout << '*';
        cout << '\n';
        gambar(n - 1);
    }
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    ll n;
    cin >> n;
    gambar(n);
}