//week07-3.cpp 學習計畫 Simulation 第4題
//LeetCode 1041.Robot Bounded In Circle
class Solution {
public:
    bool isRobotBounded(string instructions) {
        int x=0,y=0,d=0;//d方向0:北1:東2:南3:西
        //重複4次
        instructions=instructions+instructions+instructions+instructions;
        for(char c:instructions){
            if(c=='R')d=(d+1) % 4;//Right右轉
            if(c=='L')d=(d+3) % 4;//Left左轉
            if(c=='G'){//Go往前走一格
                if(d==0)y++;
                if(d==1)x++;
                if(d==2)y--;
                if(d==3)x--;
            }
        }
        if(x==0 && y==0)return true;//成功
        else return false;//沒有回到原來的位置，失敗
    }
};
