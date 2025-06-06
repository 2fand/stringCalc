#include "stringPlus.h"
#include <cmath>
string stringPlus::getLast() {//获取上次整数加法计算得到的结果
	return this->last;
}
string stringPlus::add(string str, string stra) {//整数加法计算
	this->last.clear();
	int addNum = 0;
	int ix = 0;
	int iy = 0;
        for (int index = 0; index < (str.size() > stra.size() ? str.size() : stra.size()); index++) {
                if (index < str.size() && ('-' != str[index] && ('0' > str[index] || '9' < str[index]) || index > 0 && '-' == str[index])) {
                        str.erase(index);
                }
                if (index < stra.size() && ('-' != stra[index] && ('1' > stra[index] || '9' < stra[index]) || index > 0 && '-' == stra[index])) {
                        stra.erase(index);
                }
        }
	if (abs(atoi(stra.c_str())) > abs(atoi(str.c_str()))) {
		str.swap(stra);
	}
	bool itIsZero = !str.size();
	bool itaIsZero = !stra.size();
	bool strIsNegative = (str.size() ? '-' == str.front() : false);
	bool straIsNegative = (stra.size() ? '-' == stra.front() : false);
	bool tenSub = 1 == strIsNegative + straIsNegative;
	int absStr = abs(atoi(str.c_str()));
	int absStra = abs(atoi(stra.c_str()));
	bool isNegative = '-' == (absStr > absStra ? str.front() : absStr == absStra ? false : stra.front());
	auto it = str.crbegin();
	auto ita = stra.crbegin();
	int digitNum = 0;
	regex delRegex("^0+");
	while (!itaIsZero || !itIsZero || addNum) {
		if (str.crend() == it || '0' > *it || '9' < *it) {
			itIsZero = true;
		}
		if (stra.crend() == ita || '0' > *ita || '9' < *ita) {
			itaIsZero = true;
		}
		ix = (1 - 2 * strIsNegative) * (itIsZero ? 0 : *it++ - '0');
		iy = (1 - 2 * straIsNegative) * (itaIsZero ? 0 : *ita++ - '0');
		digitNum = (tenSub && abs(ix) < abs(iy)) ? 10 + abs(ix) - abs(iy) : ix + iy;
		digitNum += !(0 > addNum && 2 == itIsZero + itaIsZero) * (1 - 2 * (digitNum < 0)) * addNum;
		addNum = tenSub && abs(ix) < abs(iy) ? -1 : digitNum / 10;
		digitNum = abs(digitNum % 10);
		if (!itIsZero || !itaIsZero || addNum || digitNum) {
			this->last.insert(this->last.begin(), '0' + digitNum);
		}
	}
	this->last = regex_replace(this->last, delRegex, "");
	if (this->last.empty()) {
		this->last.push_back('0');
	}
	else if (isNegative) {
		this->last.insert(this->last.begin(), '-');
	}
	return this->last;
}
string stringPlus::addAssign(string& str, string stra) {//整数加等计算
	this->last.clear();
	int addNum = 0;
	int ix = 0;
	int iy = 0;
        for (int index = 0; index < (str.size() > stra.size() ? str.size() : stra.size()); index++) {
                if (index < str.size() && ('-' != str[index] && ('0' > str[index] || '9' < str[index]) || index > 0 && '-' == str[index])) {
                        str.erase(index);
                }
                if (index < stra.size() && ('-' != stra[index] && ('1' > stra[index] || '9' < stra[index]) || index > 0 && '-' == stra[index])) {
                        stra.erase(index);
                }
        }
	if (abs(atoi(stra.c_str())) > abs(atoi(str.c_str()))) {
		str.swap(stra);
	}
	bool itIsZero = !str.size();
	bool itaIsZero = !stra.size();
	bool strIsNegative = (str.size() ? '-' == str.front() : false);
	bool straIsNegative = (stra.size() ? '-' == stra.front() : false);
	bool tenSub = 1 == strIsNegative + straIsNegative;
	int absStr = abs(atoi(str.c_str()));
	int absStra = abs(atoi(stra.c_str()));
	bool isNegative = '-' == (absStr > absStra ? str.front() : absStr == absStra ? false : stra.front());
	auto it = str.crbegin();
	auto ita = stra.crbegin();
	int digitNum = 0;
	regex delRegex("^0+");
	while (!itaIsZero || !itIsZero || addNum) {
		if (str.crend() == it || '0' > *it || '9' < *it) {
			itIsZero = true;
		}
		if (stra.crend() == ita || '0' > *ita || '9' < *ita) {
			itaIsZero = true;
		}
		ix = (1 - 2 * strIsNegative) * (itIsZero ? 0 : *it++ - '0');
		iy = (1 - 2 * straIsNegative) * (itaIsZero ? 0 : *ita++ - '0');
		digitNum = (tenSub && abs(ix) < abs(iy)) ? 10 + abs(ix) - abs(iy) : ix + iy;
		digitNum += !(0 > addNum && 2 == itIsZero + itaIsZero) * (1 - 2 * (digitNum < 0)) * addNum;
		addNum = tenSub && abs(ix) < abs(iy) ? -1 : digitNum / 10;
		digitNum = abs(digitNum % 10);
		if (!itIsZero || !itaIsZero || addNum || digitNum) {
			this->last.insert(this->last.begin(), '0' + digitNum);
		}
	}
	this->last = regex_replace(this->last, delRegex, "");
	if (this->last.empty()) {
		this->last.push_back('0');
	}
	else if (isNegative) {
		this->last.insert(this->last.begin(), '-');
	}
	return str = this->last;
}
