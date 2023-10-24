#include<bits/stdc++.h>
using namespace std;
int main()
{
long long num;
cin>>num;
long long temp=num;
vector<int>ans;
while(temp){
    int dig=temp%10;
    ans.push_back(dig);
    temp=temp/10;
}
int n=ans.size();
for(int i=0;i<ans.size()-1;i++){
    if(ans[i]>4){
        ans[i]=9-ans[i];
    }

}
if(ans[n-1]!=9&&ans[n-1]>4){
ans[n-1]=9-ans[n-1];
}
reverse(ans.begin(),ans.end());
int j=n-1;
long long nums=0;
for(int i=0;i<n;i++){

nums=nums+(ans[i]*(pow(10,j)));
j=j-1;
}
cout<<nums<<endl;
return 0;

}