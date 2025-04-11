#include "stringTimDecimal.h"
string stringTimDecimal::getLast() {//获取上次小数乘法计算的结果
	return this->last;
}
string stringTimDecimal::timDecimal(string str, string stra) {//小数乘法计算
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
	regex dotRegex("\\.");
	bool hasDot = regex_search(str, dotRegex);
	bool hasDota = regex_search(stra, dotRegex);
	int dotBackNum = hasDot * (str.size() - 1 - str.find('.')) + hasDota * (stra.size() - 1 - stra.find('.'));
	bool canDelete = true;
	string timStr = tim(straDigit, strDigit);
	while (timStr.size() <= dotBackNum) {
		timStr.insert(0, "0");
	}
	int dotIndex = timStr.size() - dotBackNum;
	regex correntNumRegex("0+$");
	timStr.insert(dotIndex, ".");
	if (regex_search(timStr, dotRegex)) {
		timStr = regex_replace(timStr, correntNumRegex, "");
	}
	return this->last = timStr;
}
string stringTimDecimal::timDecimalAssign(string& str, string stra) {//小数乘等计算
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
	regex dotRegex("\\.");
	bool hasDot = regex_search(str, dotRegex);
	bool hasDota = regex_search(stra, dotRegex);
	int dotBackNum = hasDot * (str.size() - 1 - str.find('.')) + hasDota * (stra.size() - 1 - stra.find('.'));
	bool canDelete = true;
	string timStr = tim(straDigit, strDigit);
	while (timStr.size() <= dotBackNum) {
		timStr.insert(0, "0");
	}
	int dotIndex = timStr.size() - dotBackNum;
	regex correntNumRegex("0+$");
	timStr.insert(dotIndex, ".");
	if (regex_search(timStr, dotRegex)) {
		timStr = regex_replace(timStr, correntNumRegex, "");
	}
	return this->last = str = timStr;
}
