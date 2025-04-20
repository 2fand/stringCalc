#pragma once
#include "stringDivDecimal.h"
class stringPowDecimal : protected stringDivDecimal {//指数为小鼠的次方计算类
	string last;//上次指数为小鼠的次方计算之后的结果
public:
	string getLast();//获取上次指数为小鼠的次方计算之后的结果
	string powDecimal(string str, string stra);//指数为小鼠的次方计算
	string powDecimalAssign(string& str, string stra);//指数为小鼠的次等计算
};
