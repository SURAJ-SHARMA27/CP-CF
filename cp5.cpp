#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> arr(5, vector<int>(5));
   int x,y;
    for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
    cin>>arr[i][j];
    if(arr[i][j]==1){
    x=i;
    y=j;
    }
    }
}
int ans=abs(2-x)+abs(2-y);
cout<<ans<<endl;
return 0;
}