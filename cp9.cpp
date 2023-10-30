#include<bits/stdc++.h>
using namespace std;
int main()
{
long long n;
cin>>n;
long long sum=0;
int i=0;
while(sum<=n){
i=i+1;
sum=sum+(((i)*(i+1))/2);

}
cout<<i-1<<endl;
return 0;
}