class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        map<int, int> mp;
		
		
        for(int i = 0; i < nums2.size(); i++) {
			mp[nums2[i]] = i;
		}
        
        for(int i = 0; i < nums1.size(); i++) {
		
            int id = mp[nums1[i]], res = -1;
            for(int j = id+1; j < nums2.size(); j++) {
                if(nums2[j] > nums1[i]) {
				
                    res = nums2[j]; break; 
                }
            }
		
            ans.push_back(res);
        }
        
        return ans;
    }
};
