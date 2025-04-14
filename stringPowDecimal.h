#pragma once
#include "stringTimDecimal.h"
class stringPowDecimal : protected stringTimDecimal {
	string last;
public:
	string getLast();
	string powDecimal(string str, string stra);
	string powDecimalAssign(string& str, string stra);
};

