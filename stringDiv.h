#pragma once
#include "stringSub.h"
class stringDiv : public stringSub {
public:
	virtual string div(string str, string stra);//整数除法计算
	virtual string divAssign(string& str, string stra);//整数除等计算
};

