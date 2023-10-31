#include<bits/stdc++.h>
using namespace std;
bool isPowerOfTwo(int n) {
    if (n <= 0) {
        return false; 
    }
    return (n & (n - 1)) == 0;
}

int main()
{
int t;
cin>>t;
while(t--){
int n;
bool flag=true;
cin>>n;
vector<int>arr(n);
for(int i=0;i<n;i++){
   cin>>arr[i];
}

for(int i=0;i<n-1;i++){
    // cout<<"m called";
   if(arr[i]>arr[i+1]){
    
    if(!isPowerOfTwo(i+1)){
        cout<<"NO"<<endl;
        flag=false;
        break;
    }
   }
}
if(flag){
    cout<<"YES"<<endl;
}

}
return 0;
}
