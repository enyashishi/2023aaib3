//Leetcode 1523
//week09-2.cpp
class Solution {
public:
    int countOdds(int low, int high) {
        int ans=(high-low)/2; //錯的
        if(low%2==1 || high%2==1) ans++; //頭尾都是奇數
        return ans; 
    }
};