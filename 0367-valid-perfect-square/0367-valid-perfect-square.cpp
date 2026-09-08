class Solution {
public:
int sq(int x){
    long long i=0;
    while(i*i<=x){
        i++;
    }
    return i-1;
}
    bool isPerfectSquare(int num) {
        int sqr=sq(num);
        int pro=sqr*sqr;
        if(sqr*sqr==num){
            return true;
        }
        return false;
    }
};