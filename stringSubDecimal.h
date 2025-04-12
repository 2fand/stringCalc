#pragma once
#include "stringTimDecimal.h"
class stringSubDecimal : protected stringTimDecimal {//小数减法计算类
protected:
	string last;//上次小数减法计算之后的结果
public:
	virtual string getLast();//获取上次小数减法计算之后的结果
	virtual string subDecimal(string str, string stra);//小数减法计算
	virtual string subDecimalAssign(string& str, string stra);//小数减等计算
};

