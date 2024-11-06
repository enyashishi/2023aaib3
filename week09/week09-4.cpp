//Leetcode 860
//week09-4.cpp
class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int b5=0,b10=0,b20=0;
        for(int b:bills){
            if(b==5) b5++;
            else if(b==10){
                if(b5==0) return false; //沒有錢可以找
                b10++; //多了一張10元鈔
                b5--; //少了一張5元鈔
            }else{ //客人拿20元鈔，找他一張10元一張5元
                if(b10>0 && b5>0){
                    b20++;
                    b10--;
                    b5--;
                }else if(b5>=3){
                    b20++;
                    b5-=3;
                }else return false;
            }
        }
        return true;
    }
};