#pragma once
#include <iostream>
using namespace std;
class stringPlus {
private:
	string last;//上次加法计算得到的结果
public:
	string getLast();//获取上次加法计算得到的结果
	string add(string str, string stra);//加法计算
};
