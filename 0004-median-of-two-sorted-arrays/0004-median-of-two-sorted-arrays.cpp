class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
       // int n=nums1.size();
       // int m=nums2.size();
        
        
        vector<int>v=nums1;
        v.insert(v.end(),nums2.begin(),nums2.end());
      //  int l=0;
       // int r=v.size()-1;
     //   int med=v[0];
        sort(v.begin(),v.end());
       // for(int i:v){
        int n=v.size();
            if(v.size()%2!=0){
                
                return v[n/2];
            }
      //      }
            else{
                return (v[n/2-1]+v[n/2])/2.0;
            }
            
        }
        
    
};