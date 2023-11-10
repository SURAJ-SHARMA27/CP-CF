string printMinNumberForPattern(string S){
        // code here 
          int i = 1;
        stack<int> st;
        string result = "";
        
        for (char c: S) {
            st.push(i);
            i += 1;
            
            if (c == 'I') {
                while (!st.empty()) {
                    int el = st.top();
                    st.pop();
                    result.append(to_string(el));
                }
            }
        }
        
        st.push(i);
        while (!st.empty()) {
            int el = st.top();
            st.pop();
            result.append(to_string(el));
        }
        
        return result;
        
    }