///week03-1.cpp 無法執行
///因為 range-based for 迴圈 必須在C++ (2011之後) 才能用
///如果使用C++98(1998年版C++)會無法正確編譯、執行會出錯、迴圈出不來
///CodeBlocks 17.12 裡 Setting-Compiler 勾第2個 -std=c++11
# include <iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    for(char c:s){
        if(c!='2')cout<<c;
    }
    return 0;
}