#include<bits/stdc++.h>
using namespace std;
void dpans(int i,int n,string str,string temp,string &s1,string &s2,bool &check){
    if(i==n){
        s2=s1;
        check=false;
        return;
    }
    cout<<i<<"  "<<s1<<endl;
    if(i+1<n&&temp[i]=='C'&&temp[i+1]=='V'&&check){
        s1=s1+str[i]+str[i+1]+'.';
        dpans(i+2,n,str,temp,s1,s2,check);
        s1.pop_back();
        s1.pop_back();
        s1.pop_back();

    }
    if(i+2<n&&temp[i]=='C'&&temp[i+1]=='V'&&temp[i+2]=='C'&&check){
        s1=s1+str[i]+str[i+1]+str[i+2]+'.';
        dpans(i+3,n,str,temp,s1,s2,check);
        s1.pop_back();
        s1.pop_back();
        s1.pop_back();
        s1.pop_back();

    }

}
int main()
{
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
string str;
cin>>str;
string temp="";

for(int i=0;i<str.length();i++){
    if(str[i]=='b'||str[i]=='c'||str[i]=='d'){
        temp=temp+'C';
    }
    else{
        temp=temp+'V';
    }
}
int i=0;
string str1="",str2="";
bool ans=true;
dpans(i,n,str,temp,str1,str2,ans);
str2.pop_back();
cout<<str2<<endl;
// bool flag=false


}
return 0;
}