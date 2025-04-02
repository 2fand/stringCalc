#include "stringPow.h"
string stringPow::getLast() {//获取上次次方计算后的值
	return this->last;
}
string stringPow::pow(string str, string stra) {//整数次方计算
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
	int i = atoi(stra.c_str());
	string powStr = i < 0 && '-' == str.front() ? "-1" : "1";
	i < 0 && '-' == str.front() ? (str = sub("0", str)) : "";
	for (; i; i < 0 ? i++ : i--) {
		if (i < 0) {
			divAssign(powStr, str);
		}
		else {
			timAssign(powStr, str);
		}
	}
	return this->last = powStr;
}
string stringPow::powAssign(string& str, string stra) {//整数次等计算
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
	int i = atoi(stra.c_str());
	string powStr = i < 0 && '-' == str.front() ? "-1" : "1";
	i < 0 && '-' == str.front() ? (str = sub("0", str)) : "";
	for (; i; i < 0 ? i++ : i--) {
		if (i < 0) {
			divAssign(powStr, str);
		}
		else {
			timAssign(powStr, str);
		}
	}
	return this->last = str = powStr;
}
