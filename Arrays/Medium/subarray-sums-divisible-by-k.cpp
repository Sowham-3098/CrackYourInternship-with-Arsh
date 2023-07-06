class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
         int ans = 0;
        unordered_map<int,int> mp;
        mp[0]++;
        int sum = 0;
        for(auto &i: nums){
            sum += i;
            sum = ((sum)%k+k)%k;
            ans += mp[sum];
            mp[sum]++;
        }
        return ans;
    }
};
