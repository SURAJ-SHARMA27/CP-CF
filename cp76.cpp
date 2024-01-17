#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
ll t;
cin >> t;
while (t--) {
ll n,b;
cin>>n>>b;
vector<ll>arr(n);
ll cnto=0;
ll cnte=0;
for(ll i=0;i<n;i++) { 
cin>>arr[i];
if(arr[i]%2){
    cnto++;
}
else{
    cnte++;
}
}
if((cnte-(b-1))>=0){
    if(cnto>=1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
else{
    ll rem=b-cnte;
    if((rem%2)&&(cnto>=rem)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
}
return 0;
}