#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
int a,b;
cin>>a>>b;
int sum=2;
int fl=1;
int i=1;
while(sum<a){
    sum=sum+(b*i);
    fl++;
}
cout<<fl<<endl;
}
return 0;
}