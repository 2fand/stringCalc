#pragma once
#include "stringTimDecimal.h"
class stringPlusDecimal : public stringTimDecimal {
protected:
	string last;
public:
	virtual string getLast();
	virtual string addDecimal(string str, string stra);
	virtual string addDecimalAssign(string& str, string stra);
};

