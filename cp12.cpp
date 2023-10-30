#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
string st;
cin>>st;
string ans="";
int i=-1;
int count=1;
while(i<n){
i=i+count;
if(i<n){
ans=ans+st[i];
count=count+1;
}
}
cout<<ans<<endl;
return 0;
}