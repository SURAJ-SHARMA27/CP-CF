#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
vector<int>arr(n);
for(int i=0;i<n;i++)cin>>arr[i];
int ans=0;
  if (arr.size() == 0) {
    return 0;
  }
  int len = 1;
  int maxLen = 1;

  for (int i = 1; i < arr.size(); i++) {
    if (arr[i - 1] < arr[i]) {
      len++;
    } else {
      len = 1;
    }
    maxLen = max(len, maxLen);
  }
  cout<<maxLen<<endl;

return 0;
}