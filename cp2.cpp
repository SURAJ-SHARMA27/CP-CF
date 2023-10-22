#include<bits/stdc++.h>
using namespace std;
int find(int num){
    int sum=0;
    while(num){
    int dig=num%10;
    sum+=dig;
    num=num/10;
    }
    return sum;
}
int main()
{
int t;
cin>>t;
while(t--){
int a,b;
cin>>a>>b;
int i=a;
bool flag=true;
while(flag){
int ans=find(i);
if(ans%b==0){
    cout<<i<<endl;
    flag=false;
    break;
}
i++;
}
}
return 0;
}