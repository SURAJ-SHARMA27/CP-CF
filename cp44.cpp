#include<bits/stdc++.h>
using namespace std;
int main()
{
 #ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
int t;
cin>>t;
while(t--){
long long n;
cin>>n;
vector<int>arr(n);
for(int i=0;i<n;i++){
    cin>>arr[i];
}
long long sum=0;
long long odd=0;
long long even=0;
if(arr[0]%2==1){
    odd++;
}
cout<<arr[0]<<" ";
sum+=arr[0];
for(int i=1;i<n;i++){
    sum+=arr[i];
if(arr[i]%2==1){
    odd++;
}
int val=(odd/3);
if(odd%3==1){
    val++;
}
cout<<sum-val<<" ";

}
cout<<endl;
}
return 0;
}