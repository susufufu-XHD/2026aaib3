//week04-3.cpp 在CodeBlocks 裡實作一下
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> a; ///上週Week03教的
    a.push_back(99);
    a.push_back(88);
    a.push_back(77);///上週Week03教的
    ///請在CodeBlocks的Settings-Compiler...要勾地2個 -std=c++11
    for(int num : a)cout<<num<<' ';///2011年的C++,沒設好會出錯
    cout << "\n";

    vector<int>a2(5, 7);///本週教「陣列的初始化」有5格,每格都放7
    for(int num : a2)cout<<num<<' ';
    cout << "\n";

    vector<int>a3{9,8,7,1,2,3,6,5,4,0};///陣列的初始值
    for(int num : a3)cout<<num<<' ';
    cout << "\n";
    }
