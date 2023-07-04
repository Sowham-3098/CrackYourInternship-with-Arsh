class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        string s=to_string(x);
        int n=s.length();
       
        for(int i=0,j=n-1;i<n/2,j>=n/2;i++,j--){
            if(s[i]!=s[j]){
                return false;
            }
        }
        return true;
    }
};
