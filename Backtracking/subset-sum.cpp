class Solution{
public:
    int equalPartition(int N, int arr[])
    {
        // code here
        int tot = 0;
        for(int i = 0; i < N; i++)
            tot += arr[i];
        
        if(tot%2==1) return 0;
        
        int need = tot / 2;
        
        vector<int>dp(need+1);
        dp[0] = 1;
        
        for(int i = 0; i < N; i++) {
            for(int s = need; s >= 1; s--) {
                if(s >= arr[i]) {
                    dp[s] += dp[s-arr[i]];
                }
            }
            if(dp[need])
                return 1;
        }
        return 0;
    }
};
