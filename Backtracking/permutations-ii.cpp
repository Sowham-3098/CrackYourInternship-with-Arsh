class Solution {
private: 
    void permuteUnique(vector<int>& nums, vector<vector<int>>& output, vector<int> temp, int index){
        if(index == nums.size()){
            output.push_back(temp);
            return;
        }
        for(int i=index; i<temp.size(); i++){
            swap(temp[index], temp[i]);
            bool isPresent = find(output.begin(), output.end(), temp) != output.end();
            if(isPresent){
                continue;
            }
            permuteUnique(nums, output, temp, index+1);
        }
    }
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> output;
        vector<int> temp = nums;
        sort(temp.begin(), temp.end());
        permuteUnique(nums, output, temp, 0);
        return output;
    }
};
