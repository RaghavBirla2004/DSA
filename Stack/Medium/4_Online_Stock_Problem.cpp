//GFG Question - Stock Span Problem
vector<int> span(n);
         stack<pair<int, int>> st;
    
    for (int i = 0; i < n; i++) {
        int currentSpan = 1;
        while (!st.empty() && st.top().first <= price[i]) {
            currentSpan += st.top().second;
            st.pop();
        }
        st.push({price[i], currentSpan});
        span[i] = currentSpan;
    }
    
    return span;
       //Naive Solution
       
       
    //   vector<int>v;
    //   for(int i=0;i<n;i++){
    //       int span = 1;
    //       for(int j=i-1; j>=0 && price[j]<=price[i]; j--){
    //           span++;
    //       }
    //       v.push_back(span);
           
    //   }
    //   return v;


//Leetcode Question - Online stock span

class StockSpanner {
public:
stack<pair<int,int>>st;
    StockSpanner() {
      
    }
    
    int next(int price) {
       int span = 1;
       while(!st.empty() && st.top().first<=price) {
        span+=st.top().second;
        st.pop();
       }
       st.push({price,span});
       return span;
    }
};
