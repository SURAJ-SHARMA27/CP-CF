#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
long long a,b;
cin>>a>>b;
if(b<a){
    cout<<b<<endl;
    continue;
}
long long ans=(b+(b/(a-1)));
if(ans%a==0){
    ans--;
}
cout<<ans<<endl;
}
return 0;
}