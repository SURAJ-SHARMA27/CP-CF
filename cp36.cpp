#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
int n;
cin>>n;
int ans=n;
vector<int>arr(n+1);
for(int i=1;i<=n;i++){
    cin>>arr[i];
}
int ch=0;
for(int i=1;i<=n;i++){
    int num=arr[i];
    while(num){
     if(num%2==0){
        ch++;
        num=num/2;
     }
     else{
        num=0;
        break;
     }
    }
}
// cout<<ch<<endl;
ans=n-ch;
if(ans<=0){
    cout<<0<<endl;
}
vector<int>temp;
if(ans>0){
for(int i=1;i<=n;i++){
    int power=0;
    int num=i;
    while (num % 2 == 0) {
        num /= 2;
        power++;
    }
    if(power){
    temp.push_back(power);
    }
    
}
sort(temp.begin(),temp.end());
int opr=0;
bool flag=false;
for(int i=temp.size()-1;i>=0;i--){
    ans=ans-temp[i];
    opr++;
    if(ans<=0){
        cout<<opr<<endl;
        flag=true;
        break;
    }
}
if(flag==false){
    cout<<-1<<endl;
}
}
}
return 0;
}