#pragma once
#include "stringTimDecimal.h"
class stringPlusDecimal : public stringTimDecimal {//小数加法计算类
protected:
	string last;//上次小数加法计算之后的结果
public:
	virtual string getLast();//获取上次小数加法计算之后的结果
	virtual string addDecimal(string str, string stra);//小数加法计算
	virtual string addDecimalAssign(string& str, string stra);//小数加等计算
};

