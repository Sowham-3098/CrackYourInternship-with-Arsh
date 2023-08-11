class Solution {
public:
int dp[10010];
int coin(vector<int>& coins, int amount){
if(amount==0){return 0;}
if(dp[amount]!=-1){
    return dp[amount];
}
    int ans=INT_MAX;

    for(int i=0;i<coins.size();i++){
 if(amount-coins[i]>=0){ans= min(coin(coins,amount-coins[i])+1LL,ans+0LL);}       
    }return dp[amount]=ans;
}
    int coinChange(vector<int>& coins, int amount) {
        memset(dp,-1,sizeof(dp));
        return coin(coins,amount)==INT_MAX ?-1 : coin(coins,amount);
    }
};
