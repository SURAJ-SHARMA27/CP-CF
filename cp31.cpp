#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
int a,b,c;
priority_queue<int>jellymax;
priority_queue<int,vector<int>,greater<int>>jellymin;
priority_queue<int,vector<int>,greater<int>>gellymin;
priority_queue<int>gellymax;
vector<int>jelly(a);
vector<int>gelly(b);
 int sumj=0;
 int sumg=0;
cin>>a>>b>>c;

for(int i=0;i<a;i++){
    int ele;
    cin>>ele;
    jelly.push_back(ele);
    jellymax.push(ele);
    jellymin.push(ele);

}
for(int i=0;i<b;i++){
    int ele;
    cin>>ele;
    gelly.push_back(ele);
    gellymax.push(ele);
    gellymin.push(ele);

}
if(c%2!=0){
   
for(int i=0;i<a;i++){
sumj+=jelly[i];
}
for(int i=0;i<b;i++){
sumg+=gelly[i];
}
int templ=jellymin.top();
int templ1=gellymin.top();
int temh=jellymax.top();
int temh1=gellymax.top();
if(sumj<sumg){
    if(templ>temh1){
    cout<<sumj<<endl;
    break;
    }
}
else if(sumj>sumg){
    sumj=sumj-templ+temh1;
    cout<<sumj<<endl;   
}

// sum=sum+max(templ,templ2)-min(templ,templ2)+max(temh,temh1)-min(temh,temh1);
}
else{

}
// cout<<sum<<endl;
}
return 0;
}