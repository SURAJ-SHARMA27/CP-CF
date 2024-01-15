#include<bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
long long a,b,c,d;
cin>>a>>b>>c>>d;
double pm=double(d)/b;
if(c<pm){
    cout<<(a*c)<<endl;
}
else{
    if(a%b==0){
        int unit=a/b;
        // cout<<"HI"<<endl;
        cout<<(unit*d)<<endl;
    }
    else{
        int unit=a/b;
        long long ans=unit*d;
        int left=a%b;
        int potential=(left*c);
        if(potential<d){
            ans+=potential;
        }
        else{
            ans+=d;
        }
        cout<<ans<<endl;
    }
}
//  cout<<pm<<endl;
return 0;
}
