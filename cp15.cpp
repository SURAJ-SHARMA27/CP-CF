#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
int size;
cin>>size;
map<int,int>mp;
int x=0;
for(int i=0;i<size;i++){
    cin>>x;
    mp[x]++;
}
if(mp.size()>2){
    cout<<"NO"<<endl;
    continue;;
}
if(mp.size()==1){
    cout<<"YES"<<endl;
    continue;
}
vector<int>temp;
if((mp.size()==2)){
    for(auto it:mp){
    temp.push_back(it.second);
    }
    if(abs(temp[0]-temp[1])>=2){
        cout<<"NO"<<endl;
        continue;
    }
}
cout<<"YES"<<endl;
}
return 0;
}