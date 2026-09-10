class Solution {
public:
    double trimMean(vector<int>& arr) {
        int n=arr.size();
        int sum=0;
        int remove = (5*n)/100;
        sort(arr.begin(),arr.end());
        for(int i=remove;i<n-remove;i++){
            sum+=arr[i];
        }
        return (double)sum/(n-(2*remove));
    }
};