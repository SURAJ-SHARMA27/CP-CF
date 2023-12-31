#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
int n;
cin>>n;
vector<int> arr(n);
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int start=0;
for(int i=0;i<n;i++){
    vector<int>num(i+start+1);
 for(int j=start;j<=i;j++){
 num[j]=arr[j];

 }
 bool m=true;
 while(num.size()!=1){
 if(m){
 
 }
 else{

 }
 }
   
}
}
return 0;
}