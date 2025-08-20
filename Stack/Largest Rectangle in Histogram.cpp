// class Solution {
// public:
//     void nextSmaller(vector<int>& heights , vector<int>& nextAns){
//         int n = heights.size()-1;
//         stack<int>st;
//         st.push(-1);
//         for(int i = n; i>=0; i--){
//             int element = heights[i];
//             while(st.top()!=-1 && element<= heights[st.top()]){
//                 st.pop();
//             }
//             // this means hme chota element milgya
//             nextAns.push_back(st.top());
//             st.push(i);
//         }
//     }

//     void prevSmaller(vector<int>& heights , vector<int>& prevAns){
//         int n = heights.size()-1;
//         stack<int>st;
//         st.push(-1);
//         for(int i = 0; i<=n; i++){
//             int element = heights[i];
//             while(st.top()!=-1 && element<= heights[st.top()]){
//                 st.pop();
//             }
//             // this means hme chota element milgya
//             prevAns.push_back(st.top());
//             st.push(i);
//         }
//     }
//     int largestRectangleArea(vector<int>& heights) {
//         vector<int>nextAns;
//         vector<int>prevAns;
//         nextSmaller(heights , nextAns);
//         reverse(nextAns.begin() , nextAns.end());
//         for(int i=0;i<nextAns.size();i++){
//             if(nextAns[i] == -1){
//                 nextAns[i] = heights.size();
//             }
            
//         }
//         prevSmaller(heights , prevAns);
//         vector<int>ans;
//         int currentans;

//         for(int i=0;i<nextAns.size();i++){
//             int width = nextAns[i] - prevAns[i]-1;
//             int height = heights[i];
//             currentans = width*height;
//             ans.push_back(currentans);
//         }
//         int maxArea = INT_MIN;
//         for(int i = 0; i<ans.size();i++){
//             maxArea = max(ans[i] , maxArea);
//         }
//         return maxArea;

        


//     }
// };