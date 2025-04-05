#pragma once
#include "stringTim.h"
class stringTimDecimal : protected stringTim{//小数乘法类
	string last;
public:
	virtual string getLast();//获取上次小数乘法计算的结果
	virtual string timDecimal(string str, string stra);//小数乘法计算
	virtual string timDecimalAssign(string& str, string stra);//小数乘等计算
};

