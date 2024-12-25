//week16-2.cpp 函式呼叫函式
//LeetCode 50
class Solution {
public:
    double myPow(double x, long long int n) {
        if(n==0) return 1;
        if(n<0){
            n=-n;
            x=1/x;
        }
        if(n%2==0){
            double now = myPow(x,n/2);
            return now*now;
        }else{ //奇數
            double now=myPow(x,n/2);
            return now*now*x;
        }


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