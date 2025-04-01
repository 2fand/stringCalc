#pragma once
#include "stringDiv.h"
class stringPow : protected stringDiv {
	string last;
public:
	string getLast();
	string pow(string str, string stra);
	string powAssign(string& str, string stra);
};