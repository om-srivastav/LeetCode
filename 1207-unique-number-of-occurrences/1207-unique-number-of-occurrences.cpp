class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        
        vector<int>res;
        int n=arr.size();
        int count=1;
        for(int i=1;i<arr.size();i++){
             if(arr[i]==arr[i-1]){
                count++;
                
             }
             else{
                res.push_back(count);
                count=1;
             }
        }
                res.push_back(count);
                for(int i=0;i<n;i++){
                    for(int j=i+1;j<res.size();j++){
 if(res[i]==res[j]){
                    return false;
                }
                    }
                }
        
        return true;

        
    }
};