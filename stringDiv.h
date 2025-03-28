#pragma once
#include "stringSub.h"
class stringDiv : protected stringSub {
protected:
	string last;//除法计算的结果
public:
	virtual string getLast();//获取上次除法计算的结果
	virtual string div(string str, string stra);//整数除法计算
	virtual string divAssign(string& str, string stra);//整数除等计算
	virtual string div(string str, string stra, bool isUp);//整数除法向上/下取整计算
	virtual string divAssign(string& str, string stra, bool isUp);//整数除等向上/下取整计算
};

