class Solution {
public:
    bool checkPerfectNumber(int n) {
        if (n <= 1) return false;
        vector<int>ls={1};//1 is also a divisor for n>1
        int sum=0;
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0){
                ls.push_back(i);
            
            if((n/i)!=i){ls.push_back(n/i);}
        }
    }
         for(auto elem:ls){
            sum+=elem;
         }
        
    
        return sum==n;
    }
};