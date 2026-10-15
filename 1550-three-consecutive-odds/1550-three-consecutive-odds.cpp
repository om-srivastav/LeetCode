class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int i=0;
        int j=arr.size()-1;
    int c=0;
        while(i<=j){
        if(arr[i]%2!=0){
            c++;
            if (c==3){
            return true;
            }
        }
             else {
                c=0;
            }
            i++;
        
        }
        return false;
    }
};