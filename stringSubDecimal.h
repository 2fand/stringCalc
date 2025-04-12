#pragma once
#include "stringTimDecimal.h"
class stringSubDecimal : protected stringTimDecimal {
protected:
	string last;
public:
	virtual string getLast();
	virtual string subDecimal(string str, string stra);
	virtual string subDecimalAssign(string& str, string stra);
};

