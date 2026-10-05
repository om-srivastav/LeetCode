class Solution {
public:
    int scoreOfParentheses(string s) {
        int sc=0;
        int d=0;
        for(int i=0;i<s.size();i++){
          if(s[i]=='(') ++d;
          else{
            --d;
            if(s[i-1]=='(')
                sc+= (1<<d);//storing 2 to the power n to sc
          }
        }
        return sc;
    }
};