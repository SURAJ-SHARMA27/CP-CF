#include<iostream>
using namespace std;
int main(){
int k, n;
	string s;
	cin>>k;
	while(k--){
		cin >> n>> s;
		long long c = 0;
		for(int i=1; i<=n; i++)
			for(int j=i; j<=n; j+=i){
				if(s[j-1] == '1')
					break;
				if(s[j-1] == '0')
					c += i;
				s[j-1] = ' ';
			}
		cout << c << endl;
	}
}