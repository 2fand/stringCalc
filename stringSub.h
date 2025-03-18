#pragma once
#include "stringPlus.h"
#include <iostream>
using namespace std;
class stringSub{
protected:
	string last;//上次减法计算的结果
public:
	virtual string getLast();//获取上次减法计算的结果
	virtual string sub(string str, string stra);//减法计算
};
