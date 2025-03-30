#include "stringTim.h"
string stringTim::tim(string str, string stra) {//整数乘法计算
	string timStr = "0";
	for (int index = 0; index < (str.size() > stra.size() ? str.size() : stra.size()); index++) {
		if (index < str.size() && '-' != str[index] && ('0' > str[index] || '9' < str[index])) {
			str.erase(index);
		}
		if (index < stra.size() && '-' != stra[index] && ('0' > stra[index] || '9' < stra[index])) {
			stra.erase(index);
		}
	}
	if (!str.size()) {
		str = "0";
	}
	if (!stra.size()) {
		stra = "0";
	}
	bool isNegative = 1 == ('-' == str.front()) + ('-' == stra.front()) && (atoi(str.c_str()) && atoi(stra.c_str()));
	int i = abs(atoi(stra.c_str()));
	'-' == str.front() ? str = sub("0", str) : "";
	for (; i; i--) {
		timStr = add(timStr, str);
	}
	if (isNegative) {
		timStr.insert(0, "-");
	}
	this->last = timStr;
	return timStr;
}
string stringTim::timAssign(string& str, string stra) {//整数乘等计算
	string timStr = "0";
	for (int index = 0; index < (str.size() > stra.size() ? str.size() : stra.size()); index++) {
		if (index < str.size() && '-' != str[index] && ('0' > str[index] || '9' < str[index])) {
			str.erase(index);
		}
		if (index < stra.size() && '-' != stra[index] && ('0' > stra[index] || '9' < stra[index])) {
			stra.erase(index);
		}
	}
	if (!str.size()) {
		str = "0";
	}
	if (!stra.size()) {
		stra = "0";
	}
	bool isNegative = 1 == ('-' == str.front()) + ('-' == stra.front()) && (atoi(str.c_str()) && atoi(stra.c_str()));
	int i = abs(atoi(stra.c_str()));
	'-' == str.front() ? str = sub("0", str) : "";
	for (; i; i--) {
		timStr = add(timStr, str);
	}
	if (isNegative) {
		timStr.insert(0, "-");
	}
	str = this->last = timStr;
	return timStr;
}
string stringTim::getLast() {//获取上次整数乘法运算的结果
	return this->last;
}
