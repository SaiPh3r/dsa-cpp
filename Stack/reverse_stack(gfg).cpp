// // approach using recursion first find top element the pop then recursive call
// // after that backtracking with using insert at bottom function


// class Solution {
//   public:
  
//     void insertAtBottom(stack<int>&s , int value){
//         // base case
//         if(s.empty()){
//             s.push(value);
//             return;
//         }
//         // ek case hum solve krleye h baaki recursion
//         int topElement = s.top();
//         s.pop();
//         insertAtBottom(s ,value);
        
//         s.push(topElement);
//     }
    
    
//     void reverse(stack<int> &st) {
//         // base case
//         if(st.empty()){
//             return;
//         }
        
//         // ek case hum baki recusrion
//         int topEL = st.top();
//         st.pop();
//         reverse(st);
        
//         // back tracking
//         insertAtBottom(st ,topEL);
        
        
        
//     }
// };