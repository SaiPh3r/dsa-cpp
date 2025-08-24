// // this is a sliding window problem using deque in codehelp l3 under queue
// class Solution {
// public:
//     vector<int> maxSlidingWindow(vector<int>& nums, int k) {
//        deque<int>dq;
//        vector<int>ans;
//        //1st window
//        // addition
//        for(int i=0;i<k;i++){
//         while(!dq.empty() && nums[dq.back()] < nums[i]){
//             dq.pop_back();
//         }
//         dq.push_back(i);
//        }
//        // ans;
//        ans.push_back(nums[dq.front()]);

//        // now for rest of the windows

//        for(int i=k; i<nums.size();i++){
//         // removal
//         if(!dq.empty() && i-dq.front() >=k){
//             dq.pop_front();
//         }
//         // addition
//         while(!dq.empty() && nums[dq.back()] < nums[i]){
//             dq.pop_back();
//         }
//         dq.push_back(i);

//         // ans
//         ans.push_back(nums[dq.front()]);


//        }
//        return ans;
        
//     }
// };