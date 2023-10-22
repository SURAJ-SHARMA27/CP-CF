#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
int p=0;
int n=0;
while(t--){
string s;
cin>>s;
for(int i=0;i<3;i++){
 if(s[i]=='+'){
    p++;
    break;
 }   
 if(s[i]=='-'){
    n++;
    break;
 }   
}
}
cout<<p-n<<endl;
return 0;
}