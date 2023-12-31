#include<bits/stdc++.h>
using namespace std;
int main()
{
long long t;
cin>>t;
while(t--){
long long a,b,c,d;
cin>>a>>b>>c>>d;
long long ans=0;
if(a==0){
cout<<1<<endl;
}
else{
if(b<c){
ans=ans+(b*2);
c=c-b;
b=0;
if((2*a)<(b+c+d)){
    ans=ans+(2*a);
    if(((b+c+d)-(2*a))>0){
        ans=ans+1;
    }
    cout<<ans<<endl;
}
else{
    ans=ans+a+b+c+d;
    cout<<ans<<endl;
}
}
if(c<=b){
ans=ans+(c*2);
// cout<<ans<<"yes"<<endl;
b=b-c;
c=0;
if((2*a)<(b+c+d)){
    ans=ans+(2*a);
    if(((b+c+d)-(2*a))>0){
        ans=ans+1;
    }
    cout<<ans<<endl;
}
else{
    ans=ans+a+b+c+d;
    cout<<ans<<endl;
}
}
}

}
return 0;
}