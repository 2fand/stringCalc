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
	if (!str.size()) {
		str = "0";
	}
	if (!stra.size()) {
		stra = "0";
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
	if (isNegative && "0" != divStr) {
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
	if (!str.size()) {
		str = "0";
	}
	if (!stra.size()) {
		stra = "0";
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
	if (isNegative && "0" != divStr) {
		divStr.insert(0, "-");
	}
	str = this->last = divStr;
	return divStr;
}
string stringDiv::getLast() {//获取上次除法计算出的结果
	return this->last;
}
string stringDiv::div(string str, string stra, bool isUp){//整数除法向上/下取整计算
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
	1 == isNegative + isUp && "0" != str ? subAssign(divStr, "-1") : "";
	if (isNegative && "0" != divStr) {
		divStr.insert(0, "-");
	}
	this->last = divStr;
	return divStr;
}
string stringDiv::divAssign(string& str, string stra, bool isUp) {//整数除等向上/下取整计算
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
	1 == isNegative + isUp && "0" != str ? subAssign(divStr, "-1") : "";
	if (isNegative && "0" != divStr) {
		divStr.insert(0, "-");
	}
	str = this->last = divStr;
	return divStr;
}
