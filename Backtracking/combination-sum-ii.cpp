class Solution {
public:
    void total(vector<int>&vec,int idx, int target,vector<vector<int>>& c,int n,vector<int>& x){
        if(target==0){
           
                c.push_back(x);
            return;
        }
       for(int i=idx;i<vec.size();i++){
           if(i>idx && vec[i]==vec[i-1]){
               continue;
           }
           if(vec[i]>target){
               break;
           }
 
            x.push_back(vec[i]);
            total(vec,i+1,target-vec[i],c,n,x);
            x.pop_back();

        
       }

    }


    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        int n=candidates.size();
        vector<vector<int>>vec;
        vector<int>x;
        sort(candidates.begin(),candidates.end());
         total(candidates,0,target,vec,n,x);
         return vec;
    }
};
