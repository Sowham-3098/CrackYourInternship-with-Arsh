class Solution {
public:
void allsub( vector<vector<int>>& subset,vector<int>&v, int n,int idx, int k){
    if(v.size()==k){
        subset.push_back(v);
        return;
    }
    if(idx==n+1){
         return;
    }
    
    v.push_back(idx);
    allsub(subset,v,n,idx+1,k);
    v.pop_back();
    allsub(subset,v,n,idx+1,k);
}
    vector<vector<int>> combine(int n, int k) {
        
        vector<vector<int>> subset;
        vector<int>v;
     
        
        allsub(subset,v,n,1,k);
        return subset;
    }
};
