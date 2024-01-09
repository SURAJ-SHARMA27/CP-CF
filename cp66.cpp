#include<bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
int a;
cin>>a;
vector<int>arr(a);
for(int i=0;i<a;i++){
   cin>>arr[i];
}
int b;
cin>>b;
vector<int>num(b);
for(int i=0;i<b;i++){
    cin>>num[i];
}
vector<int>s(a);
int sum=0;
for(int i=0;i<a;i++){
    sum+=arr[i];
    s[i]=sum;
}
for(int j=0;j<b;j++){
int ele=num[j];
int st=0,e=a-1;
bool flag=true;
int ans=0;
while(st<=e){
    int mid=(st+e)/2;
    if(s[mid]==ele){
        cout<<mid+1<<endl;
        flag=false;
        break;
    }
    if(ele<s[mid]){
        ans=mid;
        e=mid-1;
    }
    if(ele>s[mid]){
    st=mid+1;
    }
}
if(flag){
    cout<<ans+1<<endl;
}
}

return 0;
}