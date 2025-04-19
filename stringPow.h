#pragma once
#include "stringDivDecimal.h"
class stringPow : protected stringDivDecimal {//小数次方计算类
protected:
	string last;//上次次方计算后的值
public:
	string getLast();//获取上次次方计算后的值
	string pow(string str, string stra);//小数次方计算
	string powAssign(string& str, string stra);//小数次等计算(未完工)
};
