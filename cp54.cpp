#include<bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
long long t;
cin >> t;
while (t--) {
long long n;
cin>>n;
vector<long long>arr(n);
for(long long i=0;i<n;i++){
    cin>>arr[i];
}
sort(arr.begin(),arr.end());
reverse(arr.begin(),arr.end());
vector<pair<long long,long long>>b;
for(long long i=0;i<n;){
    long long j=i;
    while(i<n&&arr[i]==arr[j]){
        i++;
    }
    b.push_back({arr[j],i-j});
}
// for(long long i=0;i<b.size();i++){
//     cout<<b[i].first<<" "<<b[i].second<<endl;
// }
long long m=b.size();
long long ans=b[0].second;
for(long long i=1;i<m;i++){
    if(b[i].first+1==b[i-1].first){
    ans+=max(b[i].second-b[i-1].second,0ll);
    }
    else{
    ans+=b[i].second;    
    }
}
cout<<ans<<endl;
}
return 0;
}