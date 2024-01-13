#include<bits/stdc++.h>
using namespace std;
int  main()
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
long long  t;
cin >> t;
while (t--) {
long long  n;
cin>>n;
vector<pair<long long ,long long >>arr(n);
for(long long  i=0;i<n;i++){
long long  a,b;
cin>>a>>b;
pair<long long ,long long >t=make_pair(a,b);

arr[i]=t;
}
long long  h=INT_MIN;
long long  l=INT_MAX;
for(long long  i=0;i<n;i++){
    if(arr[i].first==1){
    h=max(h,arr[i].second);
    }
    if(arr[i].first==2){
    l=min(l,arr[i].second);
    }
    
}
long long  ans=l-h+1;
for(int i=0;i<n;i++){
    if(arr[i].first==3){
      long long num=arr[i].second;
      if(num>=h&&num<=l){
        ans--;
      }
    }
   
}
if(ans<0){
    cout<<0<<endl;
}
else
cout<<ans<<endl;
}

return 0;
}