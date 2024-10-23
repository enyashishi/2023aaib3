//LeetCode 1041
class Solution {
public:
    bool isRobotBounded(string instructions) {
        int dx[4] = {1,0,-1,0};
        int dy[4] = {0,1,0,-1};
        int x=0,y=0,dir=0; //dir方向direction: 0:右 1:下 2:左 3:右
        for(char c:instructions){
            if(c=='G'){
                x += dx[dir];
                y += dy[dir];
            }
            if(c=='L') dir=(dir+3)%4; //往左轉-1
            if(c=='R') dir=(dir+1)%4; //往右轉+1
        }
        if(x==0 && y==0) return true;
        else if (dir==0) return false;
        else return true;
    }
};