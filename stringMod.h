#pragma once
#include "stringSub.h"
class stringMod : public stringSub {
public:
	string getLast();//获取上次模运算之后的结果
	string mod(string str, string stra);//模计算
	string modAssign(string& str, string stra);//模等计算
};

