class Solution {
public:
    string digitSum(string s, int k) {
        int n = s.size();
        while(n >k){
            string next_s= "";

            for(int i=0;i<n;i+=k){
                int sum=0;
         for(int j=i;j< min(i+k,(int)s.size());j++){
sum+=s[j]-'0';
         }
        //  to_string(sum);
         next_s+=to_string(sum);
            
            }
            s=next_s;
            n=s.size();
        }
        return s;
    }
};