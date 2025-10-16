#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n, k;

int solve (const vector<pair<int,int>> x[]) {
    int dp[k][k];
    dp[0][0] = 0;
    for (int i = 1; i < k; i++) {
        for (int j = 1; j < k; j++) {
            //dp[i][j] = dp[]
        }
    }
}

signed main(){
    ios_base::sync_with_stdio(0); cin.tie(0);

    cin >> n >> k;
    vector<pair<int,int>> v[k];

    for (int i = 0; i < k; i++) {
        int a, b;
        cin >> a >> b;
        v[i].push_back({a, b});
    }

    cout << solve(v) << '\n';
}