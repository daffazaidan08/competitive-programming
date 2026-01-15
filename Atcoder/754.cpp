#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
    cin >> s;
    int n = s.size();
    
    int x = 753, ans = 100000;
    for (int i = 0; i < n-2; i++) {
        int a = (s[i]-'0')*100 + (s[i+1]-'0')*10 + (s[i+2]-'0');
        ans = min(ans, abs(x-a));
    }
    cout << ans << endl;
}
