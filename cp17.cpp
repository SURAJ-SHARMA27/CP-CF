#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
int a,b,c;
cin>>a>>b>>c;
if(b<=a){
    cout<<a<<endl;
    continue;
}
else if(a+c>=b){
    cout<<b<<endl;
    continue;
}
else if(a+c<b){
    cout<<(b+(b-(a+c)))<<endl;
    continue;
}
}
return 0;
}