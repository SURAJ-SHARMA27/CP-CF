#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
int n,m;
cin>>n>>m;
string a,b;
cin>>a>>b;
int c0=0,c1=0;
if(n==1){
    cout<<"YES"<<endl;
    continue;
}
for(int i=0;i<n-1;i++){
if((a[i]=='0')&&(a[i+1]=='0')){
    c0++;
}
}
}
return 0;
}