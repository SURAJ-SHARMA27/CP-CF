#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
int n;
cin>>n;
//vector<vector<int>>mat;
  vector<vector<char>> mat(n, vector<char>(n));
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
    cin>>mat[i][j];
    }
}

int last=n-1;
int ans=0;
int start=0;
for(int i=0;i<n/2;i++){
    for(int j=0;j<n/2;j++){
        vector<int>res;
        res.push_back(mat[i][j]-'a');
        res.push_back(mat[j][n-1-i]-'a');
        res.push_back(mat[n-1-i][n-1-j]-'a');
        res.push_back(mat[n-1-j][i]-'a');
        sort(res.begin(),res.end());
        for(int k=0;k<4;k++){
            ans=ans+(res[3]-res[k]);
        }

    }
}
cout<<ans<<endl;
}
return 0;
}