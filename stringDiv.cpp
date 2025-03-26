#include "stringDiv.h"
string stringDiv::div(string str, string stra) {//整数除法计算
	for (int index = 0; index < (str.size() > stra.size() ? str.size() : stra.size()); index++) {
		if (index < str.size() && '-' != str[index] && ('0' > str[index] || '9' < str[index])) {
			str.erase(index);
		}
		if (index < stra.size() && '-' != stra[index] && ('0' > stra[index] || '9' < stra[index])) {
			stra.erase(index);
		}
	}
	bool isNegative = (1 == ('-' == str.front()) + ('-' == stra.front()));
	'-' == str.front() ? str = sub("0", str) : "";
	'-' == stra.front() ? stra = sub("0", stra) : "";
	if ("0" == stra) {
		cout << "错误：不能除以0" << endl;
		exit(1);
	}
	string divStr = "0";
	while (atoi(sub(str, stra).c_str()) >= 0) {
		str = sub(str, stra);
		divStr = sub(divStr, "-1");
	}
	if (isNegative) {
		divStr.insert(0, "-");
	}
	this->last = divStr;
	return divStr;
}
string stringDiv::divAssign(string& str, string stra) {//整数除等计算
	for (int index = 0; index < (str.size() > stra.size() ? str.size() : stra.size()); index++) {
		if (index < str.size() && '-' != str[index] && ('0' > str[index] || '9' < str[index])) {
			str.erase(index);
		}
		if (index < stra.size() && '-' != stra[index] && ('0' > stra[index] || '9' < stra[index])) {
			stra.erase(index);
		}
	}
	bool isNegative = (1 == ('-' == str.front()) + ('-' == stra.front()));
	'-' == str.front() ? str = sub("0", str) : "";
	'-' == stra.front() ? stra = sub("0", stra) : "";
	if ("0" == stra) {
		cout << "错误：不能除以0" << endl;
		exit(1);
	}
	string divStr = "0";
	while (atoi(sub(str, stra).c_str()) >= 0) {
		str = sub(str, stra);
		divStr = sub(divStr, "-1");
	}
	if (isNegative) {
		divStr.insert(0, "-");
	}
	str = this->last = divStr;
	return divStr;
}
