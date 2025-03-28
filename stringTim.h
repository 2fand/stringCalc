#pragma once
#include "stringPlus.h"
class stringTim : protected stringPlus {
protected:
	string last;//上次乘法计算的结果
public:
	virtual string getLast();//获取上次乘法计算的结果
	virtual string tim(string str, string stra);//整数乘法计算
	virtual string timAssign(string& str, string stra);//整数乘等计算
};

