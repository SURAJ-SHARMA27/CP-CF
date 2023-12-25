#include<bits/stdc++.h>
using namespace std;
#define int long long
int a[2000][2000],ans[2000];
void solve(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++)ans[i]=(1<<30)-1;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
			if(i!=j)ans[i]&=a[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i==j)continue;
			if((ans[i]|ans[j])!=a[i][j]){
				cout<<"no"<<endl;
				return;
			}
		}
	}
	cout<<"yes"<<endl;
	for(int i=0;i<n;i++)cout<<ans[i]<<" ";
	cout<<endl;
}
signed main(){
	int t;
	cin>>t;
	while(t--)solve();
	return 0;
}