class Solution {
public:
    string removeOccurrences(string s, string part) {
        while(s.length()>0 && s.find(part) < s.length()){// lesser because to prevent invalid index if the part does not occur in s{
            s.erase(s.find(part),part.length());//erase(start,the length of part to be erased);
            
        }
        return s;
    }
        
    
};