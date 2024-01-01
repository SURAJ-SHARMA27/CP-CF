#include<bits/stdc++.h>
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif


int t;
cin>>t;
while(t--){
long long a,b;
cin>>a>>b;
long long t=__gcd(a,b);
long long x=((a*b)/t);
if(x==b){
    cout<<x*(b/a)<<endl;
}
else{
    cout<<x<<endl;
}
}
return 0;
}