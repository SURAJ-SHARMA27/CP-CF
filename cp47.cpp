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
long long n,k;
cin>>n>>k;
vector<int>arr(n);
for(long long i=0;i<k;i++){
cin>>arr[i];
}
long long ele=arr[0];
bool flag=true;
for(long long i=0;i<k-1;i++){
    long long temp=arr[i+1]-arr[i];
    if(temp>=ele){
        ele=temp;
    }
    else{
        // cout<<arr[i+1]<<" "<<arr[i]<<" "<<i<<endl;
    cout<<"NO"<<endl;

        flag=false;
        break;
    }
}
if(flag){
    cout<<"YES"<<endl;
}
}
return 0;
}