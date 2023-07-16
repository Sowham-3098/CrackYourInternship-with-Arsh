class Solution {
public:
     long long maxProduct(vector<int> nums) {
	
        int n = nums.size(), res = nums[0];
        int left = 0, right  = 0;
        
        for(int i = 0; i<n; i++){
            
            left = (left == 0 ? 1 : left) * nums[i];
            right = (right == 0 ? 1 : right) * nums[n - 1 - i];
            
            res = max(res, max(left, right));
        }
        
        return res;
    
}
};
