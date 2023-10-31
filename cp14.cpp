#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;
      vector<long long> powers(31);
            for (long long i = 0; i <= 30; i++) {
            powers[i] = 1LL << i;
        }
        
    while (t--) {
        long long n, q;
        cin >> n >> q;
        vector<long long> a(n);
        vector<long long> quer(q); 

        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }

        for (long long i = 0; i < q; i++) {
            cin >> quer[i];
        }

        
       vector<int>vis(31,0);

        for (long long i = 0; i < q; i++) {
            
            long long ele = quer[i];
            if(vis[ele]==1)continue;
            long long p = powers[ele];
            vis[ele]=1;
            long long ch = powers[ele - 1];
            for (long long j = 0; j < n; j++) {
                if (a[j] % p == 0) {
                    a[j] = a[j] + ch;
                }
            }
        }

        for (long long i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
