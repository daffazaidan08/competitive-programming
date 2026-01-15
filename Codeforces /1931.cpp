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
        vector<char> c;

        if (n >= 54) {
            c.push_back('z');
            n -= 26;
            if (n > 26) {
                c.push_back('z');
                n -= 26;
                c.push_back('a'+n-1);
            }
            else if (n == 26) {
                c.push_back('y');
                c.push_back('a');
            }
            else {
                c.push_back('a'+n-1);
                c.push_back('a');
            }
        }

        else if (n >= 28) {
            c.push_back('z');
            n -= 26;
            if (n == 26) {
                c.push_back('y');
                c.push_back('a');
            }
            else {
                c.push_back('a'+n-2);
                n -= n-2;
                c.push_back('a'+n-2);
            }
        }
        
        else if (n < 28) {
            c.push_back('a'+n-3);
            c.push_back('a');
            c.push_back('a');
        }

        reverse(c.begin(),c.end());
        for (auto x : c) cout << x;
        cout << endl;
    }
}
