#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
vector<int>arr(n,0);
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int ans=0;
int maxi=1;
for(int i=0;i<n-1;i++){
    if(arr[i]<arr[i+1]){
        maxi++;
        
    }
    else{
        maxi=1;
    }
    ans=max(maxi,ans);
}
if(ans==0)
cout<<1<<endl;
else
cout<<ans<<endl;

return 0;
}