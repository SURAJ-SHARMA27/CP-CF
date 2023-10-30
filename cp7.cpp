#include<bits/stdc++.h>
using namespace std;
int main()
{

int a,b,c;
vector<int>ans;
cin>>a>>b>>c;
ans.push_back(a);
ans.push_back(b);
ans.push_back(c);
int mini=INT_MAX;
sort(ans.begin(),ans.end());
for(int i=ans[0];i<=ans[2];i++){
int temp=(abs(i-ans[0])+abs(i-ans[1])+abs(i-ans[2]));
if(temp<mini){
    mini=temp;
}
}
cout<<mini<<endl;
return 0;
}