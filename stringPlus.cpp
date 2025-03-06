#include "stringPlus.h"
string stringPlus::getLast() {//获取上次计算得到的结果
	return this->last;
}
string stringPlus::calc(string str, string stra) {//计算
	this->last.clear();
	int addNum = 0;
	bool itIsZero = !str.size();
	bool itaIsZero = !stra.size();
	bool strIsNegative = (str.size() ? '-' == str.front() : false);
	bool straIsNegative = (stra.size() ? '-' == stra.front() : false);
	bool isNegative = false;
	auto it = str.crbegin();
	auto ita = stra.crbegin();
	int digitNum = 0;
	while (!itaIsZero || !itIsZero || addNum) {
		if (str.crend() == it || '0' > *it || '9' < *it) {
			itIsZero = true;
		}
		if (stra.crend() == ita || '0' > *ita || '9' < *ita) {
			itaIsZero = true;
		}
		digitNum = (itIsZero ? 0 : (1 - strIsNegative * 2) * (*it - '0')) + (itaIsZero ? 0 : (1 - straIsNegative * 2) * (*ita - '0')) + addNum;
		isNegative = digitNum ? digitNum < 0 : isNegative;
		addNum = (1 - 2 * (itIsZero || str.crend() == it ? 0 : 1 - 2 * strIsNegative * *it) < (itaIsZero || stra.crend() == ita ? 0 : 1 - 2 * straIsNegative * *ita)) * digitNum / 10;
		digitNum = (itIsZero || str.crend() == it ? 0 : 1 - 2 * strIsNegative * *it) < (itaIsZero || stra.crend() == ita ? 0 : 1 - 2 * straIsNegative * *ita) ? 10 + digitNum : abs(digitNum %= 10);
		if (!itaIsZero || !itIsZero || addNum) {
			this->last.insert(this->last.begin(), '0' + digitNum);
		}
		(itIsZero || (it++, 0)), (itaIsZero || (ita++, 0));
	}
	if (this->last.empty()) {
		this->last.push_back('0');
	}
	else if (isNegative) {
		this->last.insert(this->last.begin(), '-');
	}
	return this->last;
}
