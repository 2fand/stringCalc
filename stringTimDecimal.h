#pragma once
#include "stringTim.h"
class stringTimDecimal : protected stringTim{
	string last;
public:
	virtual string getLast();
	virtual string timDecimal(string str, string stra);
	virtual string timDecimalAssign(string& str, string stra);
};

