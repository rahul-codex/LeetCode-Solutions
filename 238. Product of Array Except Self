    class Solution {
    public:
        vector<int> productExceptSelf(vector<int>& nums) {
            int n = nums.size();
            vector<int> ans(n, 1);
            // vector<int> left(n, 1);  aab eska use ni ha 
            // vector<int> right(n, 1);      eska v 
                int cnt = n-2;
            for (int i = 1; i < n; i++) {
                ans[i] = ans[i - 1] * nums[i - 1];
            }
            
            int suffix = 1;
            for (int i = n - 2; i >= 0; i--) {
                suffix *= nums[i + 1];
                ans[i] *= suffix;
            }
            //es ma mena 2 extra jo variable ban raha tha usko sidha 
            // answer ma store kar diya and right ka sabhi value ko 
            // aak single varible ma store karliya  
            // for (int i = 0; i < n; i++) {
            //     ans[i] = left[i] * right[i];
            // }
            return ans;
        }
    };
