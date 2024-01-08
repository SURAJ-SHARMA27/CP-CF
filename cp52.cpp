#include<bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
int t;
cin >> t;
while (t--) {
    int n;
    cin>>n;
    vector<int>fare(n);
    vector<int>budget(n);
    priority_queue<int>pos;
    priority_queue<int,vector<int>,greater <int>>neg;
    for(int i=0;i<n;i++){
    cin>>fare[i];    
    }
    for(int i=0;i<n;i++){
    cin>>budget[i];    
    }
    for(int i=0;i<n;i++){
    int diff=(fare[i]-budget[i]);
     if(diff<=0){
     neg.push(diff);
     }
     else{
        pos.push(diff);
     }
    }
    // while(!neg.empty()){
    //     cout<<neg.top()<<" ";
    //     neg.pop();

    // }
    // cout<<endl;
    // while(!pos.empty()){
    //     cout<<pos.top()<<" ";
    //     pos.pop();
    // }
    int ans=0;
    while((!neg.empty())&&(!pos.empty())){
        int pos1=pos.top();
        int neg1=neg.top();
        if(pos1+neg1<=0){
            ans++;
            pos.pop();
            neg.pop();
        }
        else{
            pos.pop();
        }
    }
    ans=ans+((neg.size())/2);
    cout<<ans<<endl;


}
return 0;
}