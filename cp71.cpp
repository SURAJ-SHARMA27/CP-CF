#include<bits/stdc++.h>
using namespace std;
int ans=INT_MAX;
void findans(int i,int j,int sum,vector<vector<int>>arr,int a,int b,vector<vector<bool>>vis){
    if(i<0||j<0||i>=a||j>=b||vis[i][j]==true){
        return;
    }
    vis[i][j]=true;
    sum=sum+arr[i][j];
    if(sum<0){
        cout<<sum<<endl;
        ans=min(ans,abs(sum));
    }
    findans(i+1,j,sum,arr,a,b,vis);
    findans(i,j+1,sum,arr,a,b,vis);
    vis[i][j]=false;
    sum=sum-arr[i][j];
}
int main()
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
int a,b;
cin>>a>>b;
vector<vector<int>>arr(b,vector<int>(a));
vector<vector<bool>>vis(b,vector<bool>(a,false));

for(int i=0;i<a;i++){
    for(int j=0;j<b;j++){
        cin>>arr[i][j];
    }
}
int sum=0;
findans(0,0,sum,arr,a,b,vis);
cout<<ans<<endl;
return 0;
}