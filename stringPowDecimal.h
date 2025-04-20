#pragma once
#include "stringDivDecimal.h"
class stringPowDecimal : protected stringDivDecimal {
	string last;
public:
	string getLast();
	string powDecimal(string str, string stra);
	string powDecimalAssign(string& str, string stra);
};