#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
int a,b;
cin>>a>>b;
int l,r;
l=a;
r=2*a;
if(r<=b){
    cout<<l<<" "<<r<<endl;
}
else{
    cout<<-1<<" "<<-1<<endl;
}
}
return 0;
}