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
 int answer=0;
vector<int>arr(n);
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int mini=INT_MIN;

for(int i=0;i<n;i++){
mini=max(arr[i],mini);
}
for(int i=1;i<=mini;i++){
    bool flag=true;
    vector<int>temp(n);
    for(int j=0;j<n;j++){
        temp[j]=arr[j]%i;
    }
   
    for(int i=2;i<=n;i++){
        if(n%i==0){
        for(int j=0;j<(n/i);j++){
            for(int k=j;k<n;k+=n/i){
                if((k+(n/i))<n){
                  if(temp[k]!=temp[(k+(n/i))]){
                    flag=false;
                    break;
                  }
                }
              
            }
           
        }


        }
    }
    if(flag==true){
 answer++;  
    }
 
}
 cout<<answer<<endl;

}
return 0;
}