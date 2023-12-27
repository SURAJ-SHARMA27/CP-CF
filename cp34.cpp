#include<bits/stdc++.h>
using namespace std;
int  main()
{
long long t;
cin>>t;
while(t--){
long long a,b;
cin>>a>>b;
vector<long long >arr(a);
vector<long long >q(b);
for(long long i=0;i<a;i++){
    cin>>arr[i];
}
vector<pair<long long ,long long >>mem;
for(long long i=0;i<b;i++){
    long long ele;
    cin>>ele;
    mem.push_back({ele,i});
}
sort(mem.begin(),mem.end());
vector<long long >ans(b);
long long j=0,sum=0;
for(long long i=0;i<b;i++){
    while(j<a){
        if(arr[j]<=mem[i].first){
            sum+=arr[j];
            j++;
        }
        else{
            break;
        }
    }
    ans[mem[i].second]=sum;
}

for(long long i=0;i<b;i++){
    cout<<ans[i]<<" ";
}
cout<<endl;
}
return 0;
}