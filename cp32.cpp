#include<bits/stdc++.h>
using namespace std;
#define int long long
#define N 51
int a[N],b[N];
signed main(){
	int t;
	cin>>t;
	while(t--){
		int n,m,k;
		cin>>n>>m>>k;
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		sort(a+1,a+1+n);
		for(int i=1;i<=m;i++){
			cin>>b[i];
		}
		sort(b+1,b+1+m);
		if(a[1]<b[m]){
			swap(a[1],b[m]);
		}
		sort(a+1,a+1+n);
		sort(b+1,b+1+m);
		int sum1=0,sum2=0;
		for(int i=1;i<n;i++){
			sum1+=a[i];
		}
		if(k&1){
			cout<<sum1+a[n]<<"\n";
		}
		else{
			cout<<sum1+b[1]<<"\n";
		}
	}
	return 0;
} 
