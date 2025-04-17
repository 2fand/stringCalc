#include "stringDivDecimal.h"
void stringDivDecimal::swap(char& ch, char& cha) {//交换字符
	char temp = ch;
	ch = cha; 
	cha = temp;
}
string stringDivDecimal::getLast() {//获取上次小数除法计算之后的结果
	return this->last;
}
string stringDivDecimal::divDecimal(string str, string stra, size_t maxDecimalNum = 10) {//小数除法计算
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
	regex dotRegex("\\.");
	regex delRegex("\\.?0*$");
	stra = regex_replace(stra, delRegex, "");
	if ("0" == stra) {
		cout << "错误：不能除以0" << endl;
		exit(1);
	}
	if (stra.find('.') < stra.size()) {
		int StraDecimalNum = stra.size() - stra.find('.') - 1;
		stra = regex_replace(stra, dotRegex, "");
		string timNum(StraDecimalNum, '0');
		timNum.insert(0, "1");
		timDecimalAssign(str, timNum);
	}
	int DecimalNum = 0;
	string DivStr = "";
	string DecimalStr = "0";
	while (atoi(str.c_str()) >= atoi(stra.c_str())) {
		subDecimalAssign(str, stra);
		addAssign(DivStr, "1");
	}
	while (atoi(str.c_str())) {
		if (!DecimalNum && maxDecimalNum) {
			DivStr.push_back('.');
		}
		if (DecimalNum > maxDecimalNum + 1) {
			int num = DivStr.back() - '0';
			if (num >= 5) {
				string addStr = "1";
				addStr = regex_replace(addStr, regex("^"), string(DivStr.size() - 1 - DivStr.find('.'), '0');
				addStr.insert(1, ".");
				addStr.insert(0, "-");
				subDecimalAssign(DivStr, addStr);
			}
			break;
		}
		DecimalStr = "0";
		timDecimalAssign(str, "10");
		while (atoi(str.c_str()) >= atoi(stra.c_str())) {
			subDecimalAssign(str, stra);
			addAssign(DecimalStr, "1");
		}
		DivStr.append(DecimalStr);
		DecimalNum++;
	}
	return this->last = DivStr;
}
string stringDivDecimal::divDecimalAssign(string& str, string stra, size_t maxDecimalNum = 10) {//小数除等计算
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
	regex dotRegex("\\.");
	regex delRegex("\\.?0*$");
	stra = regex_replace(stra, delRegex, "");
	if ("0" == stra) {
		cout << "错误：不能除以0" << endl;
		exit(1);
	}
	if (stra.find('.') < stra.size()) {
		int StraDecimalNum = stra.size() - stra.find('.') - 1;
		stra = regex_replace(stra, dotRegex, "");
		string timNum(StraDecimalNum, '0');
		timNum.insert(0, "1");
		timDecimalAssign(str, timNum);
	}
	int DecimalNum = 0;
	string DivStr = "";
	string DecimalStr = "0";
	while (atoi(str.c_str()) >= atoi(stra.c_str())) {
		subDecimalAssign(str, stra);
		addAssign(DivStr, "1");
	}
	while (atoi(str.c_str())) {
		if (!DecimalNum && maxDecimalNum) {
			DivStr.push_back('.');
		}
		if (DecimalNum > maxDecimalNum + 1) {
			int num = DivStr.back() - '0';
			if (num >= 5) {
				string addStr = "1";
				addStr = regex_replace(addStr, regex("^"), string(DivStr.size() - 1 - DivStr.find('.'), '0');
				addStr.insert(1, ".");
				addStr.insert(0, "-");
				subDecimalAssign(DivStr, addStr);
			}
			break;
		}
		DecimalStr = "0";
		timDecimalAssign(str, "10");
		while (atoi(str.c_str()) >= atoi(stra.c_str())) {
			subDecimalAssign(str, stra);
			addAssign(DecimalStr, "1");
		}
		DivStr.append(DecimalStr);
		DecimalNum++;
	}
	return this->last = str = DivStr;
}
