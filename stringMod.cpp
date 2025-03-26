#include "stringMod.h"
string stringMod::mod(string str, string stra) {
	for (int index = 0; index < (str.size() > stra.size() ? str.size() : stra.size()); index++) {
		if (index < str.size() && '-' != str[index] && ('0' > str[index] || '9' < str[index])) {
			str.erase(index);
		}
		if (index < stra.size() && '-' != stra[index] && ('0' > stra[index] || '9' < stra[index])) {
			stra.erase(index);
		}
	}
	bool isNegative = '-' == str.front();
	str = (('-' == str.front()) ? sub("0", str) : str);
	stra = (('-' == stra.front()) ? sub("0", stra) : stra);
	if ("0" == stra) {
		cout << "错误：不能除以0" << endl;
		exit(1);
	}
	while (atoi(sub(str, stra).c_str()) >= 0) {
		subAssign(str, stra);
	}
	if (isNegative) {
		str.insert(0, "-");
	}
	this->last = str;
	return str;
}
string stringMod::modAssign(string& str, string stra) {
	for (int index = 0; index < (str.size() > stra.size() ? str.size() : stra.size()); index++) {
		if (index < str.size() && '-' != str[index] && ('0' > str[index] || '9' < str[index])) {
			str.erase(index);
		}
		if (index < stra.size() && '-' != stra[index] && ('0' > stra[index] || '9' < stra[index])) {
			stra.erase(index);
		}
	}
	bool isNegative = '-' == str.front();
	str = (('-' == str.front()) ? sub("0", str) : str);
	stra = (('-' == stra.front()) ? sub("0", stra) : stra);
	if ("0" == stra) {
		cout << "错误：不能除以0" << endl;
		exit(1);
	}
	while (atoi(sub(str, stra).c_str()) >= 0) {
		subAssign(str, stra);
	}
	if (isNegative) {
		str.insert(0, "-");
	}
	this->last = str;
	return str;
}