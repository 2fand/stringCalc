#pragma once
#include "stringTimDecimal.h"
class stringPowDecimal : protected stringTimDecimal {
	string last;//上次小数次方计算的结果
public:
	string getLast();//获取上次小数次方计算的结果
	string powDecimal(string str, string stra);//小数次方计算
	string powDecimalAssign(string& str, string stra);//小数次等计算
};

