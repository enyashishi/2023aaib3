//week16-1b.cpp
//LeetCode 50
//送出會失敗
class Solution {
public:
    double myPow(double x, int n) {
        double ans=1;
        if(n>0){
            for(int i=0;i<n;i++){
                ans*=x;
            }
        }else if(n<0){
            for(int i=0;i<-n;i++){ //n可能超級大 有瑕疵
                ans*=1/x;
            }
        }
        return ans;
    }
};