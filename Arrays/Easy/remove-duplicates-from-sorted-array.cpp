class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       int i=0;
        int j=1;
        
        if(nums.size()==0)
        {
            return 0;
        }
        
        while(j<nums.size())
        {
            if(nums[i]!=nums[j])
            {
                nums[++i]=nums[j];
            }
            j++;
        }
        
        return i+1; 
    }
};
