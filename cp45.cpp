#include<bits/stdc++.h>
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
int n;
vector<int>arr(n);
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int ele=arr[n-1];
vector<int>temp(n,ele);
for(int i=n-2;i>=0;i--){
if(temp[i+1]%arr[i]==0){
    temp[i]=arr[i];
}
else{
    
}
}
}
return 0;
}