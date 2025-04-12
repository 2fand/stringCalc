#include "stringSubDecimal.h"
string stringSubDecimal::getLast() {//获取上次小数减法计算的结果
	return this->last;
}
string stringSubDecimal::subDecimal(string str, string stra) {//小数减法计算
	regex dotRegex("\\.");
	for (int index = 0; index < (str.size() > stra.size() ? str.size() : stra.size()); index++) {
		if (index < str.size() && ('-' != str[index] && '.' != str[index] && ('0' > str[index] || '9' < str[index]) || index > 0 && '-' == str[index])) {
			str.erase(index);
		}
		if (index < stra.size() && ('-' != stra[index] && '.' != stra[index] && ('0' > stra[index] || '9' < stra[index]) || index > 0 && '-' == stra[index])) {
			stra.erase(index);
		}
	}
	!str.size() ? str = "0" : "";
	!stra.size() ? stra = "0" : "";
	if ('-' == stra.front()) {
		regex delMinusSign("^-");
		stra = regex_replace(stra, delMinusSign, "");
	}
	else {
		stra.insert(0, "-");
	}
	int strDotBackNum = regex_search(str, dotRegex) * (str.size() - str.find('.') - 1);
	int straDotBackNum = regex_search(stra, dotRegex) * (stra.size() - stra.find('.') - 1);
	int maxDotBackNum = strDotBackNum > straDotBackNum ? strDotBackNum : straDotBackNum;
	string strDigit = regex_replace(str, dotRegex, "");
	string straDigit = regex_replace(stra, dotRegex, "");
	if (strDotBackNum != maxDotBackNum) {
		strDigit.append(string(maxDotBackNum - strDotBackNum, '0'));
	}
	else if (straDotBackNum != maxDotBackNum) {
		straDigit.append(string(maxDotBackNum - straDotBackNum, '0'));
	}
	string addStr = add(strDigit, straDigit);
	string timStr = "1";
	timStr.insert(0, string(maxDotBackNum, '0'));
	timStr.insert(1, ".");
	return addStr = timDecimal(addStr, timStr);
}
string stringSubDecimal::subDecimalAssign(string& str, string stra) {//小数减等计算
	regex dotRegex("\\.");
	for (int index = 0; index < (str.size() > stra.size() ? str.size() : stra.size()); index++) {
		if (index < str.size() && ('-' != str[index] && '.' != str[index] && ('0' > str[index] || '9' < str[index]) || index > 0 && '-' == str[index])) {
			str.erase(index);
		}
		if (index < stra.size() && ('-' != stra[index] && '.' != stra[index] && ('0' > stra[index] || '9' < stra[index]) || index > 0 && '-' == stra[index])) {
			stra.erase(index);
		}
	}
	!str.size() ? str = "0" : "";
	!stra.size() ? stra = "0" : "";
	if ('-' == stra.front()) {
		regex delMinusSign("^-");
		stra = regex_replace(stra, delMinusSign, "");
	}
	else {
		stra.insert(0, "-");
	}
	int strDotBackNum = regex_search(str, dotRegex) * (str.size() - str.find('.') - 1);
	int straDotBackNum = regex_search(stra, dotRegex) * (stra.size() - stra.find('.') - 1);
	int maxDotBackNum = strDotBackNum > straDotBackNum ? strDotBackNum : straDotBackNum;
	string strDigit = regex_replace(str, dotRegex, "");
	string straDigit = regex_replace(stra, dotRegex, "");
	if (strDotBackNum != maxDotBackNum) {
		strDigit.append(string(maxDotBackNum - strDotBackNum, '0'));
	}
	else if (straDotBackNum != maxDotBackNum) {
		straDigit.append(string(maxDotBackNum - straDotBackNum, '0'));
	}
	string addStr = add(strDigit, straDigit);
	string timStr = "1";
	timStr.insert(0, string(maxDotBackNum, '0'));
	timStr.insert(1, ".");
	return addStr = str = timDecimal(addStr, timStr);
}
