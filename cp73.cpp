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
long long  a,b,c;
cin>>a>>b>>c;
vector<long long >arr(a);
for(long long  i=0;i<a;i++){
    cin>>arr[i];
}
sort(arr.begin(),arr.end());
for(long long  i=a-1;i>=(a-c);i--){
    arr[i]=arr[i]*-1;
}
long long  sum=0;
for(long long  i=0;i<a;i++){
sum+=arr[i];
}
// cout<<sum<<endl;
long long  ans=sum;
for(long long  i=a-1;i>=a-b;i--){
if(arr[i]<0){
    sum=sum+abs(arr[i]);
}
else{
    sum=sum-arr[i];
}
if(i-c>=0){
    sum=sum-(2*arr[i-c]);
    // ans=max(ans,sum);
    arr[i-c]=arr[i-c]*(-1);
    
}
ans=max(ans,sum);
}
cout<<ans<<endl;
}
return 0;
}