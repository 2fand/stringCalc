#pragma once
#include <iostream>
using namespace std;
class stringPlus {//整数加法计算类
private:
	string last;//上次整数加法计算得到的结果
public:
	virtual string getLast();//获取上次整数加法计算得到的结果
	virtual string add(string str, string stra);//整数加法计算
	virtual string addAssign(string& str, string stra);//整数加等计算
};
