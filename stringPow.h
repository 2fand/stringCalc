#pragma once
#include "stringDiv.h"
class stringPow : protected stringDiv {
	string last;//上次次方计算后的值
public:
	string getLast();//获取上次次方计算后的值
	string pow(string str, string stra);//整数次方计算
	string powAssign(string& str, string stra);//整数次等计算
};
