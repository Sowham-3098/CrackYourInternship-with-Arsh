class Solution 
{
    public:
    int minSwaps(vector<int>&nums){
        int n = nums.size();
        unordered_map<int, int> mp;
        for(int i=0;i<n;i++)
            mp[nums[i]]=i;
        vector<int> aux = nums;
        sort(aux.begin(), aux.end());
        int count=0;
        for(int i=0;i<n;i++){
            int x = mp[aux[i]];
            if(x!=i){
                mp[nums[i]] = x;
                swap(nums[x], nums[i]);
                count++;
            }
        }
        return count;
    }
};
