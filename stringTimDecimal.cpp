#include "stringTimDecimal.h"
string stringTimDecimal::getLast() {
	return this->last;
}
string stringTimDecimal::timDecimal(string str, string stra) {
	for (int index = 0; index < (str.size() > stra.size() ? str.size() : stra.size()); index++) {
		if (index < str.size() && '-' != str[index] && '.' != str[index] && ('0' > str[index] || '9' < str[index])) {
			str.erase(index);
		}
		if (index < stra.size() && '-' != stra[index] && '.' != str[index] && ('0' > stra[index] || '9' < stra[index])) {
			stra.erase(index);
		}
	}
	!str.size() ? str = "0" : "";
	!stra.size() ? stra = "0" : "";
	string strDigit = "";
	string straDigit = "";
	for (char ch : str) {
		if ('.' != ch) {
			strDigit.push_back(ch);
		}
	}
	for (char ch : stra) {
		if ('.' != ch) {
			straDigit.push_back(ch);
		}
	}
	int dotBackNum = (str.size() - 1 - str.find('.')) + (stra.size() - 1 - stra.find('.'));
	string timStr = tim(straDigit, strDigit);
	while (timStr.size() <= dotBackNum) {
		timStr.insert(0, "0");
	}
	timStr.insert(timStr.size() - dotBackNum, ".");
	int dotIndex = timStr.size() - dotBackNum;
	bool canDelete = true;
	for (int i = dotIndex + 1; i < timStr.size(); i++) {
		if ('0' != timStr[i]) {
			canDelete = false;
			break;
		}
	}
	if (canDelete) {
		timStr.erase(dotIndex);
	}
	return this->last = timStr;
}
string stringTimDecimal::timDecimalAssign(string& str, string stra) {
	for (int index = 0; index < (str.size() > stra.size() ? str.size() : stra.size()); index++) {
		if (index < str.size() && '-' != str[index] && '.' != str[index] && ('0' > str[index] || '9' < str[index])) {
			str.erase(index);
		}
		if (index < stra.size() && '-' != stra[index] && '.' != str[index] && ('0' > stra[index] || '9' < stra[index])) {
			stra.erase(index);
		}
	}
	!str.size() ? str = "0" : "";
	!stra.size() ? stra = "0" : "";
	string strDigit = "";
	string straDigit = "";
	for (char ch : str) {
		if ('.' != ch) {
			strDigit.push_back(ch);
		}
	}
	for (char ch : stra) {
		if ('.' != ch) {
			straDigit.push_back(ch);
		}
	}
	int dotBackNum = (str.size() - 1 - str.find('.')) + (stra.size() - 1 - stra.find('.'));
	string timStr = tim(straDigit, strDigit);
	while (timStr.size() <= dotBackNum) {
		timStr.insert(0, "0");
	}
	timStr.insert(timStr.size() - dotBackNum, ".");
	int dotIndex = timStr.size() - dotBackNum;
	bool canDelete = true;
	for (int i = dotIndex + 1; i < timStr.size(); i++) {
		if ('0' != timStr[i]) {
			canDelete = false;
			break;
		}
	}
	if (canDelete) {
		timStr.erase(dotIndex);
	}
	return this->last = str = timStr;
}