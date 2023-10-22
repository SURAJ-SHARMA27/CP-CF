#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include<bits/stdc++.h>
using namespace std;
void inc(vector<long long>&arr,long long s,long long e){
    for(long long i=s;i<=e;i++){
        arr[i]=arr[i]+1;
    }
    
}
int main() {
    long long t;
    cin >> t;

    while (t--) {
        long long n, m;
        cin >> n >> m;
        vector<pair<long long, long long>> segments;
        map<long long, long long> segment_count;

        for (long long i = 0; i < n; i++) {
            long long li, ri;
            cin >> li >> ri;
            segments.push_back({li, ri});
            for(int i=li;i<=ri;i++){
                segment_count[i]++;
            }
            
        }
         

        long long max_count = 0;
        long long max_count_element = -1;
        long long current_count = 0;

        for (const auto& entry : segment_count) {
        //cout<<entry.first<<" "<<entry.second<<endl;
        if (entry.second >max_count) {
            max_count = entry.second;
            max_count_element = entry.first;
        }
    }
       //cout<<max_count<<endl;
         //cout<<endl;
    
            
            for(int i=0;i<segments.size();i++){
                 long long li = segments[i].first;
            long long ri = segments[i].second;
             if (!(li <= max_count_element && ri >= max_count_element)) {
                for(int i=li;i<=ri;i++){
                segment_count[i]--;
            }
            }
          
            
            }
     

    long long min_frequency = numeric_limits<long long>::max();
    long long min_frequency_element = 0;

    for (const auto& entry : segment_count) {
        //cout<<entry.first<<" "<<entry.second<<endl;
        if (entry.second < min_frequency) {
            min_frequency = entry.second;
            min_frequency_element = entry.first;
        }
    }
    
   cout<<max_count-min_frequency<<endl;
    }
    

    return 0;
}
