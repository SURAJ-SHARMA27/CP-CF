#include<bits/stdc++.h>
using namespace std;
int N=1000000;
bool sieve[1000001];
void createSieve(){
    for(int i=2;i<=N;i++){
        sieve[i]=true;
    }
    for(int i=2;i*i<=N;i++){
        if(sieve[i]==true){
            for(int j=i*i;j<=N;j+=i){
                sieve[j]=false;
            }
        }
    }
}
int main()
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
createSieve();
int size;
cin>>size;
int ans=0;
vector<int>arr(size);
for(int i=0;i<size;i++){
    cin>>arr[i];
}
for(int i=0;i<size;i++){
    for(int j=i;j<size;j++){
        if(sieve[arr[j]]){
            ans++;
        }
        else{
            j=size;
        }
    }
}
cout<<ans<<endl;
return 0;
}