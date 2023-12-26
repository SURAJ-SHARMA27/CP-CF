#include<bits/stdc++.h>
using namespace std;
int main()
{
long long t;
cin>>t;
while(t--){
long long size;
cin>>size;
vector<long long>arr(size);
unordered_map<long long,long long>mp;
for(long long i=0;i<size;i++){
    cin>>arr[i];
}
for(long long i=0;i<size;i++){
    mp[arr[i]-i]++;
}
long long ans=0;
for(auto it:mp){
    long long n=it.second;
ans=ans+(((n*(n-1))/2));
}
cout<<ans<<endl;

}
return 0;
}