class Solution {
public:
bool ispal(string s,int l,int r){
    int n=s.size();
    // int i=0,j=n-1;
    while(l<r){
        if(s[l]!=s[r]) return false;
            l++;
            r--;
        }
        return true;
    }

    bool validPalindrome(string s) {
        int n=s.size();
        int i=0,j=n-1;
        while(i<j){
            if(s[i]!=s[j])  return ispal(s,i+1,j) || ispal(s,i,j-1);
            
         else{
                i++;
                j--;
            }
        }
            return true;
        
        // if(n==1)return true;
        // string temp=s;
        // reverse(temp.begin(),temp.end());
        // if(temp==s)return true;
        // int flag=false;
        // while(i<j){
        //     int diff=s[i]-s[j];
        //     i++;
        //     j--;
        //     if(diff!=0){
        //         return flag;
        //     }
        //     else {flag =true;}
        
        // }
        // return flag;
}
};