#pragma once
#include <iostream>
using namespace std;
class stringPlus {
private:
	string last;//上次计算得到的结果
public:
	string getLast();//获取上次计算得到的结果
	string calc(string str, string stra);//计算
};
