#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
string s;
cin>>s;
int st=-1;
int end=-1;
for(int i=0;i<s.size();i++){
    if(s[i]=='1'){
        st=i;
        break;
    }
}
for(int i=s.size()-1;i>=0;i--){
    if(s[i]=='1'){
        end=i;
        break;
    }
}
int ans=0;
if(st==-1&&end==-1){
    cout<<0<<endl;
}
else if(st==end){
    cout<<0<<endl;
}
else if(st!=end&&st!=-1){
    for(int i=st;i<=end;i++){
    if(s[i]=='0'){
        ans++;
    }
    }
    cout<<ans<<endl;
}
}
return 0;
}