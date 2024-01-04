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
long long a,b;
cin>>a>>b;
vector<long long>arr(a);
long long sum=0;
for(long long i=0;i<a;i++){
   cin>>arr[i];
   sum+=arr[i];
}
stack<long long>sts;
stack<long long>ste;
for(long long i=0;i<a;i++){
if(arr[i]==1){
    ste.push(i);
}
}
for(long long i=a-1;i>=0;i--){
if(arr[i]==1){
    sts.push(i);
}
}
long long cost=0;
long long s=0;
long long e=a-1;
while((sum!=b)&&(s<=e)&&(!sts.empty())&&(!ste.empty())){
long long c1=sts.top()-s;
long long c2=e-ste.top();
if(c2<c1){
    cost+=c2+1;
    e=ste.top()-1;
    ste.pop();
}
else{
    cost+=c1+1;
    s=sts.top()+1;
    sts.pop();
}
sum=sum-1;
}
if(sum==b){
    cout<<cost<<endl;
}
else{
    cout<<-1<<endl;
}
}
return 0;
}