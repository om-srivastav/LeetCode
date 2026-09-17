class Solution {
public:
bool vowel(char c){
    return c=='a'||c=='e'||c=='i'||c=='o'||c=='u';
}
    int maxVowels(string s, int k) {
        int curr=0;
        for(int i=0;i<k;i++){
            curr+=vowel(s[i]);
        }
            int ans=curr;
        
        for(int i=k;i<s.size();i++){
            curr+=vowel(s[i]);
            curr-=vowel(s[i-k]);
             ans=max(ans,curr);
        }
        return ans;
    }
};