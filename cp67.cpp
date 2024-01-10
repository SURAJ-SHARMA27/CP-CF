#include<bits/stdc++.h>
typedef long long ll;
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
ll n,m,sum=0;
cin>>n>>m;
string s;
vector<vector<ll>>a(n,vector<ll>(m,0));
for(ll i=0;i<n;i++){
    cin>>s;
    for(ll j=0;j<m;j++){

        a[i][j]=s[j]-'0';
        sum+=a[i][j];
    }
}
ll minn=4;
for(ll i=0;i<n-1;i++){
    for(ll j=0;j<m-1;++j){
        ll cnt=a[i][j]+a[i+1][j]+a[i][j+1]+a[i+1][j+1];
        minn=min(minn,cnt);
    }
}
if(sum==0)cout<<"0"<<endl;
else{
    if(minn<3){
        cout<<sum<<endl;
    }
    else{
        minn-=2;
        cout<<sum-minn<<endl;
    }
}
}
return 0;
}