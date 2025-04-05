#pragma once
#include "stringPlus.h"
#include <iostream>
using namespace std;
class stringSub {//整数减法类
protected:
	string last;//上次整数减法计算的结果
public:
	virtual string getLast();//获取上次整数减法计算的结果
	virtual string sub(string str, string stra);//整数减法计算
	virtual string subAssign(string& str, string stra);//整数减等计算
};
