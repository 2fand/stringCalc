#include "stringTim.h"
string stringTim::tim(string str, string stra) {//乘法计算
	string timStr = "0";
	for (int index = 0; index < (str.size() > stra.size() ? str.size() : stra.size()); index++) {
		if (index < str.size() && '-' != str[index] && ('0' > str[index] || '9' < str[index])) {
			str.erase(index);
		}
		if (index < stra.size() && '-' != stra[index] && ('0' > stra[index] || '9' < stra[index])) {
			stra.erase(index);
		}
	}
	bool isNegative = '-' == stra.front() && atoi(stra.c_str());
	int i = abs(atoi(stra.c_str()));
	for (; i; i--) {
		timStr = add(timStr, str);
	}
	if (isNegative) {
		timStr.insert(0, "-");
	}
	this->last = timStr;
	return timStr;
}
