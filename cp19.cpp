#include<bits/stdc++.h>
using namespace std;
bool check(string s){
    // cout<<s<<endl;
    int n=s.length();
    int s1=0,s2=0;
    for(int i=0;i<n/2;i++){
    s1=s1+(s[i]-'0');
    }
    for(int i=n/2;i<n;i++){
    s2=s2+(s[i]-'0');
    }
    if(s1==s2)return true;
    return false;
}
int main()
{
int t;
cin>>t;
vector<string>arr(t);
for(int i=0;i<t;i++){
    string st;
    cin>>st;
    arr[i]=st;
}
vector<vector<int>>p;
for(int i=0;i<t;i++){
    string st;
    st=arr[i];
    int sum=0;
    vector<int>temp;
    for(i=0;i<st.length();i++){
    sum=sum+(st[i]-'0');
    temp.push_back(sum);
    }
    p.push_back(temp);
}
// for(int i=0;i<t;i++)cout<<arr[i]<<endl;
int ans=0;
for(int i=0;i<t;i++){
    string s1=arr[i];
    for(int j=0;j<t;j++){
    string s2=arr[j];
    if((s1.size()+s2.size())%2!=0){
        continue;
    }
    else{
        string s3=s1+s2;
        bool c=check(s3);
        if(c)ans++;
    }
    }

}
// ans=ans+t;
cout<<ans<<endl;

return 0;
}