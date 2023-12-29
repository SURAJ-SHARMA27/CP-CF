#include<bits/stdc++.h>
using namespace std;
int main()
{
long long t;
cin>>t;
while(t--){
long long n;
cin>>n;
vector<long long>arr(n);
for(long long i=0;i<n;i++){
    cin>>arr[i];
}
long long temp=INT_MAX;
for(long long i=0;i<n;i++){
   temp=min(temp,arr[i]);
}

if((temp%2==0)){
    if(temp==arr[0]){
 cout<<"Bob"<<endl;

    }
    else{
 cout<<"Alice"<<endl;
    }
   

}
else{
    if(temp==arr[0]){
 cout<<"Bob"<<endl;

    }
    else{
 cout<<"Alice"<<endl;
    }
    // cout<<"Bob"<<endl;

}

}
return 0;
}