#include<bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
long long t;
cin >> t;
while (t--) {
    long long ind=0;
    string str;
    cin>>str;
    long long n=str.length();
    char mini='9';
    for(long long i=n-1;i>=0;i--){
    if(str[i]<=mini)mini=str[i];
    else{
        str[i]=min((char)(str[i]+1),(char)'9');
    }
   
    }
    
     sort(str.begin(),str.end());
    cout<<str<<endl;
}
return 0;
}