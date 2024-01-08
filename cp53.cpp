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
int size;
cin>>size;
vector<int>arr(size);
for(int i=0;i<size;i++){
    cin>>arr[i];
}
vector<int>res;
for(int i=0;i<size-1;i++){
    int val=arr[i]-arr[i+1];
    if(val!=0){
        if(res.size()>0){
            int x=res.back();
            if(x>0&&val<0){
                res.push_back(val);
            }
            else if(x<0&&val>0){
                res.push_back(val);
            }
        }
        else{
            res.push_back(val);
        }
    }
}
cout<<(1+res.size())<<endl;
}
return 0;
}