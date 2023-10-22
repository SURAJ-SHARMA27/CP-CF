for (long long i = 0; i < n; i++) {
            long long li, ri;
            cin >> li >> ri;
            segments.push_back({li, ri});
            for(int i=li;i<=ri;i++){
                segment_count[i]++;
            }
            
        }