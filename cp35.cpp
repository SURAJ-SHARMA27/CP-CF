#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
long long n;
cin>>n;
string s;
cin>>s;
string ans;
map<int,int>m;
m['a']=1;
m['e']=1;
m['i']=1;
m['o']=1;
m['u']=1;
// m['a']=1;
for(int i=0;i<s.size();i++){
    if(m[s[i]]){
        ans.push_back(s[i]);
        int j=i+1;
        if(j==s.size()-1){

        }
        else if(j+1<=s.size()-1){
            if(m[s[j]]==0&&m[s[j+1]]==0){
                ans.push_back(s[j]);
                ans.push_back('.');
                i=j;
            }
            else{
                ans.push_back('.');
            }
        }
    }
    else{
        ans.push_back(s[i]);
    }
}
cout<<ans<<endl;
}
return 0;
}  