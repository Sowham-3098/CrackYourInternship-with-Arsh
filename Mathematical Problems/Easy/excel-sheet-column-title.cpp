class Solution {
public:
    string convertToTitle(int columnNumber) {
        string result;
        while(columnNumber>0){
            columnNumber-=1;
            result.insert(result.begin(),65+columnNumber%26);
            columnNumber/=26;
        }
        return result;
    }
};
