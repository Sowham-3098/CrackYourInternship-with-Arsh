class Solution {
public:
void allsub( vector<vector<int>>& subset,vector<int>&v, vector<int>& arr,int idx, int n){
    // if(idx==n){
       
            subset.push_back(v);
    //      return;
    // }
   
    for(int i=idx;i<n;i++){
        if( i!=idx && arr[i]==arr[i-1]){
            continue;
        }
         v.push_back(arr[i]);
         allsub(subset,v,arr,i+1,n);
    v.pop_back();
    // allsub(subset,v,arr,i+1,n);
        
    }
    
}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
          int n=nums.size();
        vector<vector<int>> subset;
        vector<int>v;
        sort(nums.begin(),nums.end());
        
        allsub(subset,v,nums,0,n);
        return subset;
    }
};
