#include<bits/stdc++.h>
using namespace std;
int main()
{
long long t;
cin >> t;
while (t--) {
long long n,b;
cin>>n>>b;
vector<long long>arr(n);
for(long long i=0;i<n;i++){
cin>>arr[i];
}
vector<long long>num(n);
long long sum=0;
for(long long i=0;i<n;i++){
sum+=arr[i];
num[i]=sum;
}
while(b--){
    long long l,r,k;
    long long leftsum=0;
    cin>>l>>r>>k;
    if(l==1){
    leftsum=num[r-1];
    }
    else{
    leftsum=num[r-1]-num[l-2];
    }
    long long ans=sum-leftsum+((r-l+1)*k);
    if(ans%2==0){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
}

}
return 0;
}