#pragma once
#include "stringPlus.h"
#include <iostream>
using namespace std;
class stringSub{
private:
	string last;//上次计算的结果
public:
	string getLast();//获取上次计算的结果
	string sub(string str, string stra);//计算
};
