#pragma once
#include "stringSubDecimal.h"
class stringDivDecimal : protected stringSubDecimal {
protected:
	string last;
public:
	string getLast();
	string divDecimal(string str, string stra);
	string divDecimalAssign(string& str, string stra);
};

