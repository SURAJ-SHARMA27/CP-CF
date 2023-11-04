#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
int p;
cin>>p;
int n=2*p;
vector<int>arr(n);
for(int i=0;i<n;i++){
    cin>>arr[i];
    // cout<<arr[i]<<endl;
}
sort(arr.begin(),arr.end());
int ans=0;
for(int i=0;i<p-1;i++){
ans=ans+((abs(arr[i+1]-arr[i]))+(abs(arr[i+p+1]-arr[i+p])));
}
cout<<ans<<endl;
for(int i=0;i<p;i++){
cout<<arr[i]<<" "<<arr[i+p]<<endl;
}
}
return 0;
}