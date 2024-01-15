

#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
int t;
cin >> t;
while (t--) {

    ll n; cin >> n;
    string s; cin >> s;
    ll ans = (n * (n+1)) / 2;
    for(int i = 1; i < n; ++i) {
        if(s[i] == s[i-1]) {
            ans -= i;
        }
    }
    cout << ans <<endl;

}
return 0;
}