class Solution {
public:
    bool isValid(string s) {
        stack<int> st;
        for(int i=0;i<s.length();i++){
            if(st.empty()){
                st.push(s[i]);
            }
            
            else if(st.top()=='[' && s[i]==']'){
                st.pop();
            }
            else if(st.top()=='(' && s[i]==')'){
                st.pop();
            }
            else if(st.top()=='{' && s[i] == '}'){
                st.pop();
            }
            else{
                st.push(s[i]);
            }
        }
        
        if(st.size()==0) return true;
        
       return false; 
    }
};
