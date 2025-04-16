#pragma once
#include "stringSubDecimal.h"
class stringDivDecimal : protected stringSubDecimal {
protected:
	string last;//上次小数除法计算之后的结果
	void swap(char& ch, char& cha);//交换字符
public:
	string getLast();//获取上次小数除法计算之后的结果
	string divDecimal(string str, string stra);//小数除法计算
	string divDecimalAssign(string& str, string stra);//小数除等计算
};
