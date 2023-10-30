#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
vector<string>st={
    "1","11","111","1111",
    "2","22","222","2222",
    "3","33","333","3333",
    "4","44","444","4444",
    "5","55","555","5555",
    "6","66","666","6666",
    "7","77","777","7777",
    "8","88","888","8888",
    "9","99","999","9999"
};
while(t--){
    int ans=0;
    int num;
    cin>>num;
    for(int i=0;i<st.size();i++){
        ans=ans+st[i].size();
        if(to_string(num)==st[i]){
        cout<<ans<<endl;
        break;
        }
    }
}
return 0;
}