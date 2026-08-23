class Solution {
public:
    bool sumGame(string num) {
        int n=num.length();
        int Lsum=0;
        int Rsum=0;
        int lq=0;
        int rq=0;
        for(int i=0;i<n/2;i++){
            if(num[i]=='?')
                lq++;
            else
                Lsum+=num[i]-'0';
        }
         for(int i=n/2;i<n;i++){
            if(num[i]=='?')
                rq++;
            else
                Rsum+=num[i]-'0';
        }
        if((lq+rq)%2==1)
            return true;
        int diff=Lsum-Rsum;
        return diff!=(rq-lq)*9/2;
    }
};