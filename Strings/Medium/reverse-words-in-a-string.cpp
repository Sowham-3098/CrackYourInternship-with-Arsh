class Solution {
public:
    string reverseWords(string s) {
        string res=""; 
        int i=s.length()-1;

        while(i>=0){
            if(s[i]==' ') i--;
            else{
                int j=i;
                string temp=" ";
                while(j>=0 && s[j]!=' '){
                    temp+=s[j--];
                }
                reverse(temp.begin(),temp.end());
                                 res+=temp;
                i=j;
            }
        }
        res.pop_back(); 
        return res;
    }
};
