//week07-2a.cpp
//Leetcode 1275 還未完成
class Solution {
public:
    void myDrawBoard(int board[3][3]){
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cout << board[i][j] <<　' ';
            }
            cout << "\n";
        }
        cout << "\n";
    }
    string tictactoe(vector<vector<int>>& moves) {
        int board[3][3] = {}; //step03: C的陣列，裡面都放0代表沒有人放東西
        int now =1; //1,2,1,2(把now=3-now 就會跳動了)
        myDrawBoard(board);
        for(auto move : moves){ //step01: C++進階迴圈
            int i = move[0], j = move[1]; //step02: 取出陣列裡的值
            board[i][j]=now;
            myDrawBoard(board);
            now=3-now;
        }
        return "B"; //"A" or "B" or "Draw"
    }
};