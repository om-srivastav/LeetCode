class Solution {
public:

    int smallestNumber(int n, int t) {
    
    while(true){
        int prd=1;
        int temp=n;
        int last_digit=0;
    while(temp>0){
    last_digit=temp%10;
    prd*=last_digit;
    temp/=10;
    // last_digit++;
    }
    if(prd%t==0)
        return n;
    n++;
        // temp++;
    
    }
    // }
    // return temp;
    }
    


    // 
};